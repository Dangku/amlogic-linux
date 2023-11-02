# SPDX-License-Identifier: GPL-2.0-only

ccflags-y += -I$(srctree)/drivers/gpio

obj-$(CONFIG_AMLOGIC_WIRELESS) = amlogic-wireless.o
amlogic-wireless-y = main.o
amlogic-wireless-$(CONFIG_AMLOGIC_WIFI) += wifi/wifi_dt.o
amlogic-wireless-$(CONFIG_AMLOGIC_WIFI) += wifi/dhd_static_buf.o
amlogic-wireless-$(CONFIG_AMLOGIC_BLUETOOTH) += bluetooth/bt_device.o