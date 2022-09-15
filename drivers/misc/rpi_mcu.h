#ifndef _RPI_MCU_H_
#define _RPI_MCU_H_

#define LOG_INFO(fmt,arg...) pr_info("rpi-mcu: %s: "fmt, __func__, ##arg);
#define LOG_ERR(fmt,arg...) pr_err("rpi-mcu: %s: "fmt, __func__, ##arg);

#define MAX_I2C_LEN 255

struct rpi_mcu_data {
	struct device *dev;
	struct i2c_client *client;
};

#endif
