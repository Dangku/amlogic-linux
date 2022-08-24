dtb-$(CONFIG_ARM64) += kvim_linux.dtb
dtb-$(CONFIG_ARM64) += kvim2_linux.dtb
dtb-$(CONFIG_ARM64) += kvim3l_linux.dtb
dtb-$(CONFIG_ARM64) += kvim3_linux.dtb
dtb-$(CONFIG_ARM64) += bananapi_m2s.dtb
dtb-$(CONFIG_ARM64) += bananapi_m2s_922x.dtb
dtb-$(CONFIG_ARM64) += bananapi_cm4.dtb

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
subdir-y	+= overlays/kvim
subdir-y	+= overlays/kvim2
subdir-y	+= overlays/kvim3
subdir-y	+= overlays/kvim3l
subdir-y	+= overlays/bpi-m2s
subdir-y	+= overlays/bpi-cm4
clean-files	:= *.dtb *.dtbo
