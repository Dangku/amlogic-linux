# SPDX-License-Identifier: GPL-2.0-only
# Amlogic clock drivers

ccflags-y += -I$(srctree)/drivers/amlogic/clk/meson

obj-$(CONFIG_AMLOGIC_COMMON_CLK) += amlogic-clk.o
amlogic-clk-y := clk-common-init.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_AO_CLKC) += meson-aoclk.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_CPU_DYNDIV) += clk-cpu-dyndiv.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_DUALDIV) += clk-dualdiv.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_EE_CLKC) += meson-eeclk.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_MPLL) += clk-mpll.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_PHASE) += clk-phase.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_PLL) += clk-pll.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_REGMAP) += clk-regmap.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_SCLK_DIV) += sclk-div.o
amlogic-clk-$(CONFIG_AMLOGIC_COMMON_CLK_MESON_VID_PLL_DIV) += vid-pll-div.o
amlogic-clk-$(CONFIG_AMLOGIC_MESON_CLK_MEASURE) += meson-clk-measure.o
amlogic-clk-$(CONFIG_AMLOGIC_CLK_DEBUG) += meson-clk-debug.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_S4) += amlogic-clk-soc-s4.o
amlogic-clk-soc-s4-y := s4.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_SC2) += amlogic-clk-soc-sc2.o
amlogic-clk-soc-sc2-y := sc2.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_C2) += amlogic-clk-soc-c2.o
amlogic-clk-soc-c2-y := c2.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_C3) += amlogic-clk-soc-c3.o
amlogic-clk-soc-c3-y := c3.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_A1) += amlogic-clk-soc-a1.o
amlogic-clk-soc-a1-y := a1.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_T3) += amlogic-clk-soc-t3.o
amlogic-clk-soc-t3-y := t3.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_T7) += amlogic-clk-soc-t7.o
amlogic-clk-soc-t7-y := t7.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_T5M) += amlogic-clk-soc-t5m.o
amlogic-clk-soc-t5m-y := t5m.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_G12A) += amlogic-clk-soc-g12a.o
amlogic-clk-soc-g12a-y := g12a.o

obj-$(CONFIG_AMLOGIC_COMMON_CLK_G12A) += amlogic-aoclk-g12a.o
amlogic-aoclk-g12a-y := g12a-aoclk.o
