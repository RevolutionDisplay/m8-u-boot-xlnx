/*
 * Configuration for Revolution Display boards
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_REVDEV_H
#define __CONFIG_REVDEV_H

#define CONFIG_SYS_SDRAM_SIZE		(1024 * 1024 * 1024)

#define CONFIG_ZYNQ_SERIAL_UART1
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0	0

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_SDHCI0

#include <configs/zynq-common.h>

/* override default boot delay */
#undef CONFIG_BOOTDELAY
#define CONFIG_BOOTDELAY 1

#endif /* __CONFIG_REVDEV_H */
