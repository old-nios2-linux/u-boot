/*
 * (C) Copyright 2012
 * Texas Instruments, <www.ti.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef	_ASM_ARCH_SPL_H_
#define	_ASM_SPL_H_

#define BOOT_DEVICE_XIP       	2
#define BOOT_DEVICE_NAND	5
#ifdef CONFIG_AM33XX
#define BOOT_DEVICE_MMC1	8
#define BOOT_DEVICE_MMC2	9	/* eMMC or daughter card */
#elif defined(CONFIG_TI814X)
#define BOOT_DEVICE_MMC1	9
#define BOOT_DEVICE_MMC2	8	/* ROM only supports 2nd instance */
#endif
#define BOOT_DEVICE_SPI		11
#define BOOT_DEVICE_UART	65
#define BOOT_DEVICE_USBETH	68
#define BOOT_DEVICE_CPGMAC	70
#define BOOT_DEVICE_MMC2_2      0xFF

#ifdef CONFIG_AM33XX
#define MMC_BOOT_DEVICES_START	BOOT_DEVICE_MMC1
#define MMC_BOOT_DEVICES_END	BOOT_DEVICE_MMC2
#elif defined(CONFIG_TI814X)
#define MMC_BOOT_DEVICES_START	BOOT_DEVICE_MMC2
#define MMC_BOOT_DEVICES_END	BOOT_DEVICE_MMC1
#endif
#endif
