# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

obj-$(CONFIG_AMLOGIC_CRYPTO_DMA) += amlogic-crypto-dma.o
amlogic-crypto-dma-y := aml-dma.o
amlogic-crypto-dma-y += aml-crypto-dma.o
amlogic-crypto-dma-y += aml-aes-dma.o
amlogic-crypto-dma-y += aml-sha-dma.o
amlogic-crypto-dma-y += aml-crypto-device.o

amlogic-crypto-dma-$(CONFIG_CRYPTO_DES) += aml-tdes-dma.o
