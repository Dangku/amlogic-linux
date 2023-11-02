# SPDX-License-Identifier: GPL-2.0-or-later
#
#Makefile for the dvb dmx drivers
#

obj-$(CONFIG_AMLOGIC_DVB_DMX) += amlogic-dvb-demux.o

ccflags-y += -I$(srctree)/include
ccflags-y += -I$(srctree)/include/media
ccflags-y += -I$(srctree)/include/uapi
ccflags-y += -I$(srctree)/include/linux/amlogic
ccflags-y += -I$(srctree)/include/uapi
ccflags-y += -I$(srctree)/drivers/amlogic/dvb

amlogic-dvb-demux-y := aml_dvb.o
amlogic-dvb-demux-y += aml_dsc.o
amlogic-dvb-demux-y += aml_dmx.o
amlogic-dvb-demux-y += aml_key.o
#amlogic-dvb-demux-y += dmxdev.o
#amlogic-dvb-demux-y += ringbuffer.o

amlogic-dvb-demux-y += sw_demux/swdmx_cb_list.o
amlogic-dvb-demux-y += sw_demux/swdmx_crc32.o
amlogic-dvb-demux-y += sw_demux/swdmx_demux.o
amlogic-dvb-demux-y += sw_demux/swdmx_ts_parser.o

amlogic-dvb-demux-y += sc2_demux/sc2_control.o
amlogic-dvb-demux-y += sc2_demux/mem_desc.o
amlogic-dvb-demux-y += sc2_demux/ts_output.o
amlogic-dvb-demux-y += sc2_demux/ts_input.o
amlogic-dvb-demux-y += sc2_demux/frontend.o
amlogic-dvb-demux-y += sc2_demux/dvb_reg.o
