# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

ccflags-y += -I$(srctree)/drivers/watchdog

obj-$(CONFIG_AMLOGIC_MESON_GXBB_WATCHDOG) += amlogic-watchdog.o
amlogic-watchdog-y := meson_gxbb_wdt.o

obj-$(CONFIG_AMLOGIC_ARM_SMC_WATCHDOG) += amlogic-smc-watchdog.o
amlogic-smc-watchdog-y := arm_smc_wdt.o
