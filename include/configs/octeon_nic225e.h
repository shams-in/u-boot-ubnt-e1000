/*
 * (C) Copyright 2003
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * Copyright (C) 2004 - 2015 Cavium, Inc. <support@cavium.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

/*
 * This file contains the configuration parameters for
 * Octeon NIC225E board.
 */

#ifndef __OCTEON_NIC225E_H__
#define __OCTEON_NIC225E_H__

#define CONFIG_OCTEON_BIG_STACK_SIZE		0x4000	/** 16K stack */

/** NOR flash is only used for expansion ROM */
#define CONFIG_OCTEON_EXPANSION_ROM_ONLY

/** Enable Octeon secure-mode by disabling bar1 on PCIE bus 0 */
#define CONFIG_OCTEON_SECURE_MODE_BUS	0

/** Board specific environment callbacks */
#define	CONFIG_BOARD_ENV_CALLBACK_LIST		\
	"enable_fec0:enable_fec0,"		\
	"enable_fec1:enable_fec1,"

#include "octeon_common.h"

/** Default DDR clock if tuple doesn't exist in EEPROM */
#define NIC225E_DEF_DRAM_FREQ		800

/** Enable SE application native API support */
#define CONFIG_OCTEON_SE_NAPI

/** TWSI address for the ispPAC-POWR1220AT8 Voltage Controller chip */
#define CONFIG_ISPPAC_POWER

/** ISP power controller TWSI address */
#define BOARD_ISP_TWSI_ADDR		0x08

/** The NIC225e board does not have a MCU */
#define BOARD_MCU_AVAILABLE		0

/** i2c eeprom address */
#define CONFIG_SYS_I2C_EEPROM_ADDR	OCTEON_NIC225E_BOARD_EEPROM_TWSI_ADDR

/** Default eeprom address */
#define CONFIG_SYS_DEF_EEPROM_ADDR	CONFIG_SYS_I2C_EEPROM_ADDR

/** Enable support for PMBus power management chips */
#define CONFIG_PMBUS

/** Enable support for the MP2953A chip */
#define CONFIG_PMBUS_MP2953

/** Power management chips are configured via I2C */
#define CONFIG_POWER_I2C

#define CONFIG_SYS_EEPROM_PAGE_WRITE_BITS	5	/** 32 bytes */
#define CONFIG_SYS_EEPROM_PAGE_WRITE_DELAY_MS	5	/** Delay for page write */

/* Set bootdelay to 0 for immediate boot */
#define CONFIG_BOOTDELAY	0	/** autoboot after X seconds	*/

#undef	CONFIG_BOOTARGS

/** No failsafe for NIC cards */
#define CONFIG_OCTEON_NO_FAILSAFE

#define CONFIG_OCTEON_QLM	/** Enable QLM support */

#define CONFIG_CMD_QLM		/** Enable qlm command */

/** Define this to enable built-in octeon ethernet support (we use XFI) */
#define CONFIG_OCTEON_XAUI_ENET

/** Enable XFI Ethernet */
#define CONFIG_OCTEON_XFI_ENET
/* Enable Octeon built-in networking if RGMII support is enabled */
#if defined(CONFIG_OCTEON_XAUI_ENET) || defined(CONFIG_OCTEON_RXAUI_ENET) || \
    defined(CONFIG_OCTEON_SGMII_ENET) || defined(CONFIG_OCTEON_XFI_ENET)
# define CONFIG_OCTEON_INTERNAL_ENET
#endif

#define CONFIG_SYS_PCI_CONSOLE
#ifdef CONFIG_SYS_PCI_CONSOLE
# define CONFIG_CONSOLE_MUX
# define CONFIG_OCTEON_BOOTCMD /* Deprecated */
#endif

#include "octeon_cmd_conf.h"

/** Enable "sfp" command to display sfp info */
#define CONFIG_CMD_SFP

/** Enable sfp parsing support */
#define CONFIG_PHY_SFP

/*
 * Define the available PHYs
 */
#define CONFIG_PHY_AVAGO		/** Enable Avago gearbox support */
#include "octeon_network.h"

#define CONFIG_CMD_OCTEON_TLVEEPROM	/** Enable TLV EEPROM support */

/** Console information is stored in the environment */
#define CONFIG_CONSOLE_IS_IN_ENV

#define CONFIG_CMD_EXT2			/** EXT2/3/4 filesystem support	*/
#define CONFIG_CMD_FAT			/** FAT support			*/
#define CONFIG_FS_FAT			/** FAT support			*/
#define CONFIG_FAT_WRITE		/** FAT write support		*/
#define CONFIG_FS_EXT4			/** EXT4 filesystem support	*/
#define CONFIG_EXT4_WRITE		/** EXT4 write support		*/

#define CONFIG_SF_DEFAULT_BUS		0	/** Default SPI bus	*/
#define CONFIG_SF_DEFAULT_CS		0	/** Default SPI chip select */
#define CONFIG_SF_DEFAULT_SPEED		25000000/** Default SPI speed	*/

#define CONFIG_OCTEON_SPI		/** Enable OCTEON SPI driver	*/
#define CONFIG_SPI_FLASH		/** Enable SPI flash driver	*/
#define CONFIG_SPI_FLASH_MICRON		/** Enable Micron SPI flash	*/
#define CONFIG_CMD_SPI			/** Enable SPI command		*/
#define CONFIG_CMD_SF			/** Enable SPI flash command	*/
#define CONFIG_SPI_FLASH_BAR		/** Enable full access to SPI flash */

/** Environment is stored in SPI flash */
#define	CONFIG_ENV_IS_IN_SPI_FLASH	1

/**
 * Start of where the SPI bootloader images are placed.  Must be on an erase
 * block boundary.
 */
#define CONFIG_OCTEON_SPI_BOOT_START		0x10000

/**
 * End of the SPI boot partition which is searched for a bootloader.  Must be
 * on an erase block boundary.
 */
#define CONFIG_OCTEON_SPI_BOOT_END		0x400000

/** Environment SPI flash sector size */
#define CONFIG_ENV_SECT_SIZE		256

/** Size of environment */
#define CONFIG_ENV_SIZE			(8 * 1024)

/** Address in SPI flash is at at 56K (environment partition) */
#define CONFIG_ENV_OFFSET		0xe000

#define CONFIG_LIBATA			/** Enable ATA/SATA support	*/
#define CONFIG_CMD_SATA			/** Enable the sata command */
#define CONFIG_SYS_SATA_MAX_DEVICE	2	/* Support up to 2 devices */
#define CONFIG_SATA_AHCI		/** Enable AHCI driver */
#define CONFIG_SATA_AHCI_PLAT		/** Enable platform AHCI support */
#define CONFIG_SATA_AHCI_OCTEON		/** Enable Octeon AHCI support */
#define CONFIG_AHCI_SETFEATURES_XFER

#define CONFIG_CMD_PART			/** Enable part command */

/*
 * Miscellaneous configurable options
 */

/** Default environment settings */
#define	CONFIG_EXTRA_ENV_SETTINGS			\
        "autoload=n\0"					\
        ""

/*-----------------------------------------------------------------------
 * FLASH and environment organization
 */
#define CONFIG_OCTEON_MMC		/** Enable Octeon MMC driver */

/** Needed for SE API */
#define CONFIG_SYS_MMC_MAX_DEVICE	1
/** Minimum MMC bus speed */
#define CONFIG_OCTEON_MIN_BUS_SPEED_HZ	100000
#define CONFIG_CMD_MMC				/** Enable mmc command */
#define CONFIG_MMC				/** Enable MMC support */
#define CONFIG_SYS_MMC_ENV_DEV		0	/** MMC device containing the env */
#define CONFIG_SYS_MMC_MAX_DEVICE 	1

/** Enable octbootbus command */
#define CONFIG_CMD_OCTEON_BOOTBUS

/* Add NOR flash support */
#define CONFIG_CMD_FLASH		/** flinfo, erase, protect	*/
#define CONFIG_SYS_FLASH_SIZE		(1*1024*1024)	/** 1MB */
#define CONFIG_SYS_MAX_FLASH_BANKS	1	/** Max memory banks	*/
#define CONFIG_SYS_MAX_FLASH_SECT	32	/** Max flash sectors	*/
/** Width of flash */
#define CONFIG_SYS_FLASH_CFI_WIDTH	FLASH_CFI_8BIT
#define CONFIG_SYS_FLASH_CFI		1	/** Enable CFI NOR flash */
#define CONFIG_FLASH_CFI_DRIVER		1	/** Enable CFI NOR flash */
#define CONFIG_SYS_FLASH_USE_BUFFER_WRITE	/** Speed up writes	*/

/*-----------------------------------------------------------------------
 * Cache Configuration
 */
/** L1 data cache size (not used */
#define CONFIG_SYS_DCACHE_SIZE		(32 * 1024)

/** instruction cache size (not used) */
#define CONFIG_SYS_ICACHE_SIZE		(72 * 1024)

/**
 * DTT sensor
 * The NIC225e has a SA56004X
 */
#define CONFIG_SYS_I2C_DTT_ADDR		0x4C

/* Include shared board configuration, consisting mainly of DRAM details. */
#include "octeon_nic225e_shared.h"

/** Disable DDR2 support */
#define CONFIG_OCTEON_DISABLE_DDR2

#define CONFIG_CMD_OCTEON_VPD
#define CONFIG_SYS_SSD_VPD_BUS		0
#define CONFIG_SYS_SSD_VPD_ADDR	\
	(gd->arch.board_desc.rev_major >= 4 ? 0x53 : 0x57)
#define CONFIG_SYS_SSD_VPD_MAX_POWER	32
#define CONFIG_SYS_SSD_VPD_INIT_POWER	32
#define CONFIG_SYS_SSD_VPD_PCIE0_GEN	3
#define CONFIG_SYS_SSD_VPD_PCIE0_WIDTH	8
#define CONFIG_SYS_SSD_VPD_VEND_ID	0x177d
#define CONFIG_SYS_SSD_VPD_SENSOR_TYPE	0x44
#define CONFIG_SYS_SSD_VPD_SENSOR_ADDR	CONFIG_SYS_I2C_DTT_ADDR

#define CONFIG_OCTEON_PCI	/** Enable support to read PCIe EEPROM */

/* The following line should be defined for all PCIe connected LiquidIO card
 * It will do initialization needed for oct-remote-app-ctl host utilty to
 * provide hotplug features when controlling start/add_cores/del_cores/shutdown
 * hotplugable SE application from x86 HOST
 */
#define CONFIG_OCTEON_REMOTE_HOTPLUG

#endif	/* __OCTEON_NIC225E_H__ */
