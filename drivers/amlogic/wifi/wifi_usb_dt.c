/*
 * drivers/amlogic/bluetooth/bt_device.c
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/delay.h>
#include <linux/string.h>
#include <linux/ctype.h>
#include <linux/leds.h>
#include <linux/gpio.h>
#include <linux/slab.h>
#include <linux/of.h>
#include <linux/of_gpio.h>
#include <linux/amlogic/iomap.h>
#include <linux/io.h>
#include "../../gpio/gpiolib.h"

struct wifi_usb_platdata {
	int gpio_wlan_usb_drv;
	int power_state;
	struct device *wifi_dev;
};

static DEFINE_MUTEX(wifi_usb_mutex);

static int wifi_usb_on(struct wifi_usb_platdata *data, bool on_off)
{
	if (!gpio_is_valid(data->gpio_wlan_usb_drv))
		return -EINVAL;
	
	if (on_off) {
		gpio_direction_output(data->gpio_wlan_usb_drv, 1);
		pr_info("aml usb wifi power on\n");
	}
	else {
		gpio_direction_output(data->gpio_wlan_usb_drv, 0);
		pr_info("aml usb wifi power off\n");
	}

	data->power_state = on_off;

	return 0;
}

static ssize_t wifi_usb_power_state_show(struct device *dev,
        struct device_attribute *attr, char *buf)
{
	struct wifi_usb_platdata *data = dev_get_drvdata(dev);
	return sprintf(buf, "%d\n", data->power_state);
}

static ssize_t wifi_usb_power_state_store(struct device *dev,
        struct device_attribute *attr, const char *buf, size_t count)
{
	struct wifi_usb_platdata *data = dev_get_drvdata(dev);
	unsigned long state;
	int err;

	if (!capable(CAP_NET_ADMIN))
		return -EPERM;

	err = kstrtoul(buf, 0, &state);
	if (err)
		return err;

	if (state > 1) 
		return -EINVAL;

	mutex_lock(&wifi_usb_mutex);
	if (state != data->power_state) {
		err = wifi_usb_on(data, state);
		if (err)
			dev_err(dev, "set power failed\n");
	}
	mutex_unlock(&wifi_usb_mutex);

	return count;
}

static DEVICE_ATTR(power_state, S_IRUGO | S_IWUSR,
        wifi_usb_power_state_show, wifi_usb_power_state_store);

static int wifi_usb_probe(struct platform_device *pdev)
{
	struct wifi_usb_platdata *data;
	struct gpio_desc *desc;
	const char *power;
	int ret = 0;

	pr_info("aml usb wifi probe\n");
	data = devm_kzalloc(&pdev->dev, sizeof(*data), GFP_KERNEL);
	if (!data)
		return -ENOMEM;

	data->wifi_dev = &pdev->dev;
	dev_set_drvdata(data->wifi_dev, data);

	ret = of_property_read_string(pdev->dev.of_node,
			"power_on_pin", &power);
	if (ret) {
		pr_warn("aml usb wifi, not get power_on_pin\n");
		data->gpio_wlan_usb_drv = 0;
	} else {
		desc = of_get_named_gpiod_flags(pdev->dev.of_node,
			"power_on_pin", 0, NULL);
		data->gpio_wlan_usb_drv = desc_to_gpio(desc);
	}

	device_create_file(&pdev->dev, &dev_attr_power_state);

	/* gpioH_4 internal pull high, set output low default */
	wifi_usb_on(data, 1);
	
	return 0;

}

static int wifi_usb_suspend(struct platform_device *pdev,
	pm_message_t state)
{
	struct wifi_usb_platdata *data = platform_get_drvdata(pdev);
	
	wifi_usb_on(data, 0);
	
	pr_info("aml usb wifi suspend\n");

	return 0;
}

static int wifi_usb_resume(struct platform_device *pdev)
{
	struct wifi_usb_platdata *data = platform_get_drvdata(pdev);
	
	wifi_usb_on(data, 1);
	
	pr_info("aml usb wifi resume\n");

	return 0;
}

static void wifi_usb_shutdown(struct platform_device *pdev)
{
	struct wifi_usb_platdata *data = platform_get_drvdata(pdev);
	
	pr_info("aml usb wifi shutdown\n");
	
	wifi_usb_on(data, 0);
	
	device_remove_file(&pdev->dev, &dev_attr_power_state);
}

static int wifi_usb_remove(struct platform_device *pdev)
{
	device_remove_file(&pdev->dev, &dev_attr_power_state);
	return 0;
}

static const struct of_device_id wifi_usb_ids[] = {
	{ .compatible = "amlogic,aml_usb_wifi" },
	{ }
};

static struct platform_driver wifi_usb_driver = {
	.probe = wifi_usb_probe,
	.remove = wifi_usb_remove,
	.shutdown = wifi_usb_shutdown,
	.suspend = wifi_usb_suspend,
	.resume	= wifi_usb_resume,
	.driver = {
		.owner  = THIS_MODULE,
		.name   = "aml_usb_wifi",
		.of_match_table = wifi_usb_ids,
	},
};

module_platform_driver(wifi_usb_driver);

MODULE_DESCRIPTION("amlogic usb wlan driver");
MODULE_LICENSE(GPL);
