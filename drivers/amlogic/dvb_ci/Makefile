# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

ccflags-y += -I$(srctree)/
ccflags-y += -I$(srctree)/include
ccflags-y += -I$(srctree)/drivers/gpio
ccflags-y += -I$(srctree)/drivers/media/dvb-core
ccflags-y += -I$(srctree)/include/media

obj-$(CONFIG_AMLOGIC_DVB_CI) += amlogic-dvb-ci.o
amlogic-dvb-ci-y := aml_pcmcia.o
amlogic-dvb-ci-y += aml_ci.o
amlogic-dvb-ci-y += aml_ci_bus.o
amlogic-dvb-ci-y += cimcu/dvb_ca_en50221_cimcu.o
amlogic-dvb-ci-y += cimax/dvb_ringbuffer.o
