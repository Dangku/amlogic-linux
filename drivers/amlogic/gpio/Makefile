ccflags-y += -I$(srctree)/drivers/gpio
ccflags-y += -I$(srctree)/drivers

obj-$(CONFIG_AMLOGIC_GPIO) += amlogic-gpio.o
amlogic-gpio-y := main.o

amlogic-gpio-$(CONFIG_AMLOGIC_GPIOLIB) += gpiolib.o
amlogic-gpio-$(CONFIG_AMLOGIC_MESON_IRQ_GPIO) += irqchip/irq-meson-gpio.o
amlogic-gpio-$(CONFIG_AMLOGIC_PINCTRL_MESON) += pinctrl/pinctrl-meson.o
amlogic-gpio-$(CONFIG_AMLOGIC_PINCTRL_MESON) += pinctrl/pinctrl-meson-axg-pmx.o

obj-$(CONFIG_AMLOGIC_PINCTRL_MESON) += pinctrl/