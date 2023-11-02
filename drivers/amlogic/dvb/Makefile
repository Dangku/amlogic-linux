# SPDX-License-Identifier: GPL-2.0-or-later

ccflags-y += -I.
ccflags-y += -I$(srctree)/drivers/media/dvb-core
ccflags-y += -I$(srctree)/include/media

obj-$(CONFIG_AMLOGIC_DVB_CONFIG) += amlogic-dvb.o
amlogic-dvb-y = main.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_demod_common.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_tuner.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_atvdemod.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_dtvdemod.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_tuner_ops.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_demod_ops.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_EXTERN) += aml_dvb_extern_driver.o
amlogic-dvb-$(CONFIG_AMLOGIC_AUCPU) += aucpu/aml_aucpu.o
amlogic-dvb-$(CONFIG_AMLOGIC_DVB_DSM) += dsm/aml_dsm.o
amlogic-dvb-$(CONFIG_AMLOGIC_SMARTCARD) += smartcard_sc2/smartcard.o

obj-$(CONFIG_AMLOGIC_DVB_DMX) += demux/
