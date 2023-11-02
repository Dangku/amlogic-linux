# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

ccflags-y += -I$(srctree)/fs/pstore/
ccflags-y += -I$(srctree)/kernel/sched/

obj-$(CONFIG_AMLOGIC_DEBUG) += amlogic-debug.o
amlogic-debug-y := main.o
amlogic-debug-y += lockup.o
amlogic-debug-y += cpu_mhz.o
amlogic-debug-y += sched.o

amlogic-debug-$(CONFIG_AMLOGIC_DEBUG_ATRACE) += atrace.o
amlogic-debug-$(CONFIG_AMLOGIC_DEBUG_FILE) += debug_file.o
amlogic-debug-$(CONFIG_AMLOGIC_DEBUG_HLD) += watchdog_hld.o

ifeq ($(CONFIG_AMLOGIC_DEBUG_PRINTK),m)
amlogic-debug-$(CONFIG_AMLOGIC_DEBUG_PRINTK) += printk.o
else
obj-$(CONFIG_AMLOGIC_DEBUG_PRINTK) += printk.o
endif

# builtin
obj-$(CONFIG_AMLOGIC_BGKI_DEBUG_MISC) += debug_misc.o
obj-$(CONFIG_AMLOGIC_BGKI_DEBUG_IOTRACE) += ftrace_ramoops.o

# debug test ko
obj-$(CONFIG_AMLOGIC_DEBUG_TEST) += debug_test.o
obj-$(CONFIG_AMLOGIC_AUDIO_UTILS) += amlogic-audio-utils.o
amlogic-audio-utils-y := audio_utils.o

