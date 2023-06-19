# SPDX-License-Identifier: GPL-2.0-only

MODULE_NAME = amlogic-input

PR_FMT = $(subst amlogic-,,$(MODULE_NAME))
PR_FMT_DEFINE="-Dpr_fmt(fmt)= \"[$(PR_FMT)]: \" fmt"
ccflags-y += $(PR_FMT_DEFINE)

obj-$(CONFIG_AMLOGIC_INPUT) = $(MODULE_NAME).o
$(MODULE_NAME)-y = main.o

include drivers/amlogic/input/ir/Makefile
include drivers/amlogic/input/keyboard/Makefile