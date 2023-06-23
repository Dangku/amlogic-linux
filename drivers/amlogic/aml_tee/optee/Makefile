# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_AML_OPTEE) += optee.o
optee-y := core.o call.o notif.o rpc.o supp.o device.o smc_abi.o ffa_abi.o log.o

# for tracing framework to find optee_trace.h
CFLAGS_smc_abi.o := -I$(src)
