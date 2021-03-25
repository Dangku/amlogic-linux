/******************************************************************************
 *
 * Copyright(c) 2013 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#include <drv_types.h>
#ifdef CONFIG_GPIO_WAKEUP
#include <linux/gpio.h>
#endif
#if defined(CONFIG_PLATFORM_AML_MESONSM1)
#include "platform_aml_sm1_sdio.h"
#endif

#ifdef CONFIG_GPIO_WAKEUP
extern unsigned int oob_irq;
#endif

/*
 * Return:
 *	0:	power on successfully
 *	others: power on failed
 */
int platform_wifi_power_on(void)
{
	int ret = 0;

#if defined(CONFIG_PLATFORM_AML_MESONSM1)
	RTW_INFO("%s: power up, reinit card.\n", __FUNCTION__);
	extern_wifi_set_enable(0);
	msleep(500);
	extern_wifi_set_enable(1);
	msleep(500);
	sdio_reinit();

#ifdef CONFIG_GPIO_WAKEUP
	oob_irq = wifi_irq_num();
#endif
#endif
	return ret;
}

void platform_wifi_power_off(void)
{
#if defined(CONFIG_PLATFORM_AML_MESONSM1)
	RTW_INFO("%s: remove card, power off.\n", __FUNCTION__);
	extern_wifi_set_enable(0);
#endif
}
