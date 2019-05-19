#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/soc.0",
    "/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0",
    "/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/soc.0/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    // "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/soc.0/gpio_keys.99/input/input*",
    "/sys/devices/virtual/input/input*",
    "/sys/devices/virtual/misc/uinput",

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    // "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",

    // USB drive is in here
    // "/sys/devices/platform/xhci-hcd*",
    "/sys/devices/platform/msm_hsusb",

    // Encryption
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/misc/ion",
    // "/sys/devices/virtual/qseecom/qseecom",

    NULL
};
