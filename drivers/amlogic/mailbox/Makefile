# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

obj-$(CONFIG_AMLOGIC_MHU_MBOX) += amlogic-mailbox.o
amlogic-mailbox-y := meson_mhu_main.o
amlogic-mailbox-y += meson_mhu.o meson_mhu_pl.o
amlogic-mailbox-y += meson_mhu_fifo.o
amlogic-mailbox-y += meson_mhu_sec.o
amlogic-mailbox-y += meson_mailbox.o

amlogic-mailbox-$(CONFIG_ARM_SCPI_PROTOCOL) += scpi_protocol.o 
amlogic-mailbox-$(CONFIG_ARM_SCPI_PROTOCOL) += meson_mhu_user.o
