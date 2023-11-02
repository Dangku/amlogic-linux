# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_AML_OPTEE) += optee.o
optee-y := core.o
optee-y += call.o
optee-y += notif.o
optee-y += rpc.o
optee-y += supp.o
optee-y += device.o
optee-y += smc_abi.o
optee-y += ffa_abi.o
optee-y += log.o

# for tracing framework to find optee_trace.h
CFLAGS_smc_abi.o := -I$(src)
