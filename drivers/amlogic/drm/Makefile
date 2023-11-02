# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

obj-$(CONFIG_AMLOGIC_DRM) += aml_drm.o
aml_drm-y := meson_drm_main.o

ccflags-y += -I$(srctree)/$(src)/vpu-hw -I$(srctree)/$(src) \
	     -I$(srctree)/drivers/amlogic/media \
	     -I$(srctree)/include

ccflags-y += -I$(srctree)/drivers/amlogic/media/common/ion_dev

aml_drm-$(CONFIG_AMLOGIC_DRM_USE_ION) += meson_gem.o
aml_drm-$(CONFIG_AMLOGIC_DRM_USE_ION) += meson_fb.o
aml_drm-$(CONFIG_AMLOGIC_DRM_EMULATE_FBDEV) += meson_fbdev.o
aml_drm-$(CONFIG_AMLOGIC_DRM_VPU) += meson_vpu.o

aml_drm-y += meson_drv.o
aml_drm-y += meson_plane.o
aml_drm-y += meson_atomic.o
aml_drm-y += meson_sysfs.o
aml_drm-y += meson_writeback.o
aml_drm-y += meson_logo.o
aml_drm-y += meson_async_atomic.o
aml_drm-y += meson_of_parser.o
aml_drm-y += meson_vpu_pipeline_traverse.o
aml_drm-y += meson_crtc.o
aml_drm-y += meson_vpu_pipeline.o
aml_drm-y += meson_vpu_pipeline_private.o
aml_drm-y += meson_debugfs.o
aml_drm-y += meson_vpu_util.o
aml_drm-y += meson_drm_bind.o
aml_drm-y += meson_lcd.o
aml_drm-y += meson_hdmi.o
aml_drm-y += meson_cvbs.o
aml_drm-y += vpu-hw/meson_vpu_video_wrapper.o
aml_drm-y += vpu-hw/meson_vpu_osd_mif.o
aml_drm-y += vpu-hw/meson_osd_afbc.o
aml_drm-y += vpu-hw/meson_osd_scaler.o
aml_drm-y += vpu-hw/meson_osd_proc.o
aml_drm-y += vpu-hw/meson_vpu_osdblend.o
aml_drm-y += vpu-hw/meson_vpu_hdr_dv.o
aml_drm-y += vpu-hw/meson_vpu_postblend.o

