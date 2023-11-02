# SPDX-License-Identifier: (GPL-2.0+ OR MIT)
# Makefile for audiobridge

obj-$(CONFIG_AMLOGIC_AUDIO_BRIDGE) += amlogic-audiobridge.o

amlogic-audiobridge-y := bridge_audio.o
amlogic-audiobridge-y += bridge_ringbuffer.o
amlogic-audiobridge-y += bridge_pcm_hal.o
amlogic-audiobridge-y += bridge_arm_pcm.o
amlogic-audiobridge-$(CONFIG_AMLOGIC_BRIDGE_UAC) += bridge_uac_pcm.o
amlogic-audiobridge-$(CONFIG_AMLOGIC_BRIDGE_DSP) += bridge_dsp_pcm.o
amlogic-audiobridge-$(CONFIG_AMLOGIC_BRIDGE_DSP) += dsp_client_api.o
amlogic-audiobridge-$(CONFIG_AMLOGIC_BRIDGE_DSP) += bridge_dsp_card.o
