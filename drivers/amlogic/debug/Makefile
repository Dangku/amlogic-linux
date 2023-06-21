# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

ccflags-y += -I$(srctree)/fs/pstore/
ccflags-y += -I$(srctree)/kernel/sched/

obj-$(CONFIG_AMLOGIC_DEBUG) += amlogic-debug.o
amlogic-debug-y = main.o lockup.o cpu_mhz.o sched.o

obj-$(CONFIG_AMLOGIC_DEBUG_ATRACE) += atrace.o
obj-$(CONFIG_AMLOGIC_DEBUG_FILE) += debug_file.o
obj-$(CONFIG_AMLOGIC_GKI_CONFIG) += gki_config.o
obj-$(CONFIG_AMLOGIC_DEBUG_HLD) += watchdog_hld.o
#obj-$(CONFIG_AMLOGIC_DEBUG_PRINTK) += printk.o

obj-$(CONFIG_AMLOGIC_BGKI_DEBUG_MISC) += debug_misc.o
obj-$(CONFIG_AMLOGIC_BGKI_DEBUG_IOTRACE) += ftrace_ramoops.o

obj-$(CONFIG_AMLOGIC_DEBUG_TEST) += debug_test.o
obj-$(CONFIG_AMLOGIC_AUDIO_UTILS) += audio_utils.o

