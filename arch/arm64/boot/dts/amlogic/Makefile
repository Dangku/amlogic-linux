dtb-$(CONFIG_ARCH_BANANAPI_M2S) += bananapi_m2s.dtb \
	bananapi_m2s_922x.dtb
dtb-$(CONFIG_ARCH_BANANAPI_CM4) += bananapi_cm4io.dtb \
	raspberrypi_cm4io.dtb

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
subdir-$(CONFIG_ARCH_BANANAPI_M2S) += overlays/m2s
subdir-$(CONFIG_ARCH_BANANAPI_CM4) += overlays/cm4io
clean-files	:= *.dtb *.dtbo
