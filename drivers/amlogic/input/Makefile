# SPDX-License-Identifier: GPL-2.0-only

obj-$(CONFIG_AMLOGIC_INPUT) += amlogic-input.o
amlogic-input-y := main.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_core.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_main.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_sysfs.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_cdev.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_raw.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_regmap.o
amlogic-input-$(CONFIG_AMLOGIC_MESON_IR) += ir/meson_ir_decoder_xmp.o
amlogic-input-$(CONFIG_AMLOGIC_GPIO_KEY) += keyboard/gpio_keypad.o
amlogic-input-$(CONFIG_AMLOGIC_ADC_KEYPADS) += keyboard/adc_keypad.o
