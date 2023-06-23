# SPDX-License-Identifier: (GPL-2.0+ OR MIT)
# Makefile for audiobridge

obj-$(CONFIG_AMLOGIC_AUDIO_BRIDGE) += amlogic-audiobridge.o

amlogic-audiobridge-y := bridge_audio.o \
                         bridge_ringbuffer.o \
                         bridge_pcm_hal.o \
                         bridge_arm_pcm.o

ifeq ($(CONFIG_AMLOGIC_BRIDGE_UAC),y)
        amlogic-audiobridge-y += bridge_uac_pcm.o
endif

ifeq ($(CONFIG_AMLOGIC_BRIDGE_DSP),y)
        amlogic-audiobridge-y += bridge_dsp_pcm.o \
                                 dsp_client_api.o \
                                 bridge_dsp_card.o
endif
