# Overlays for the Odroid platform

dtbo-$(CONFIG_ARCH_MESON64_BANANAPI_FIREWALLA) += spi0.dtbo		\
					i2c0.dtbo		\
					i2c1.dtbo		\
					uart0.dtbo		\
					uart1.dtbo		\
					saradc.dtbo		\
					irblaster.dtbo		\
					onewire.dtbo		\
					can0.dtbo		\
					fanspeed-full.dtbo	\
					gpio_spdif.dtbo		\
					pwm_cd.dtbo		\
					pwm_ef.dtbo		\
					pwm_c-pwmfan.dtbo	\
					pwm_d-backlight.dtbo	\
					i2c0_eeprom.dtbo	\
					spi0_flash.dtbo

targets	+= $(dtbo-y)
always	:= $(dtbo-y)
