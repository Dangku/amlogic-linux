# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

obj-$(CONFIG_AMLOGIC_SPI) = amlogic-spi.o
amlogic-spi-y := module-init.o
amlogic-spi-y += spi-meson-mem.o
amlogic-spi-$(CONFIG_AMLOGIC_SPI_MESON_SPICC) += spi-meson-spicc.o
amlogic-spi-$(CONFIG_AMLOGIC_SPI_MESON_SPIFC) += spi-meson-spifc.o
amlogic-spi-$(CONFIG_AMLOGIC_SPI_MESON_SPIFC_V2) += spi-meson-spifc-v2.o
amlogic-spi-$(CONFIG_AMLOGIC_SPI_MESON_SPICC_SLAVE) += spi-meson-spicc-slave.o vmem.o
