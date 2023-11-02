# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

MODULE_NAME = amlogic-memory-debug

obj-$(CONFIG_AMLOGIC_MEMORY_DEBUG) = $(MODULE_NAME).o
$(MODULE_NAME)-y += main.o

include drivers/amlogic/memory_debug/memory_ext/Makefile
include drivers/amlogic/memory_debug/reg_access/Makefile
include drivers/amlogic/memory_debug/ddr_tool/Makefile
include drivers/amlogic/memory_debug/ramdump/Makefile
