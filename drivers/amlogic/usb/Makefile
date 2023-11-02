# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

MODULE_NAME = amlogic-usb
obj-$(CONFIG_AMLOGIC_USB_SUPPORT)      += $(MODULE_NAME).o
$(MODULE_NAME)-y = usb_main.o

include drivers/amlogic/usb/crgdrdphy/Makefile
include drivers/amlogic/usb/usb2phy/Makefile
include drivers/amlogic/usb/usb3v2phy/Makefile
include drivers/amlogic/usb/usbc2phy/Makefile
#include drivers/amlogic/usb/usb3v3phy/Makefile
include drivers/amlogic/usb/usbotg/Makefile
include drivers/amlogic/usb/cc/Makefile
include drivers/amlogic/usb/bc/Makefile
include drivers/amlogic/usb/crg/Makefile

obj-$(CONFIG_AMLOGIC_USB_DWC_OTG_HCD) += dwc_otg/310/
