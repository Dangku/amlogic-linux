dtb-$(CONFIG_ARM64) += bananapi_m2s.dtb
dtb-$(CONFIG_ARM64) += bananapi_m2s_922x.dtb
dtb-$(CONFIG_ARM64) += bananapi_cm4io.dtb
dtb-$(CONFIG_ARM64) += bananapi_rpicm4io.dtb

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
subdir-y	+= overlays/bpi-m2s
subdir-y	+= overlays/bpi-cm4
clean-files	:= *.dtb *.dtbo
