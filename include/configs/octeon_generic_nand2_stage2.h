/*
 * (C) Copyright 2003
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * Copyright (C) 2004 - 2012 Cavium, Inc. <support@cavium.com>
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
 * Octeon EBB6300 board.
 */

#ifndef __CONFIG_H__
#define __CONFIG_H__

#define CONFIG_OCTEON_NAND_BOOT
/*
 * Define CONFIG_OCTEON_PCI_HOST = 1 to map the pci devices on the
 * bus.  Define CONFIG_OCTEON_PCI_HOST = 0 for target mode when the
 * host system performs the pci bus mapping instead.  Note that pci
 * commands are enabled to allow access to configuration space for
 * both modes.
 */
#ifndef CONFIG_OCTEON_PCI_HOST
# define CONFIG_OCTEON_PCI_HOST		0
#endif

#define CONFIG_OCTEON_NO_FAILSAFE
#define CONFIG_OCTEON_NO_BOOT_BUS
#define CONFIG_SYS_NO_FLASH
#define CONFIG_OCTEON_DISABLE_UBI
#define CONFIG_OCTEON_DISABLE_JFFS2
#define CONFIG_ENV_IS_NOWHERE
#define CONFIG_OCTEON_NAND
#define CONFIG_OCTEON_HW_BCH
#define CONFIG_OCTEON_DISABLE_NETWORKING
#define CONFIG_OCTEON_DISABLE_QLM

#include "octeon_common.h"

/* CONFIG_OCTEON_GENERIC_NAND set by Makefile in include/config.h */
#define NAND_STAGE2_BOARD_TYPE			CVMX_BOARD_TYPE_GENERIC

/**
 * Add command to boot stage 3 bootloader out of NAND
 */
#define CONFIG_CMD_OCTEON_NAND_BOOT_STAGE3

/**
 * Start of where the NAND bootloader images are placed.  Must be on an erase
 * block boundary/
 */
#define CONFIG_OCTEON_NAND_BOOT_START		0

/**
 * End of the NAND boot partition which is searched for a bootloader.  Must be
 * on an erase block boundary.  It should be large enough to be able to handle
 * at least one bad block.
 */
#define CONFIG_OCTEON_NAND_BOOT_END		0x600000

/**
 * NAND device to boot the stage 3 bootloader from
 */
#define CONFIG_OCTEON_NAND_BOOT_DEV	0

/**
 * Address to load the stage 3 bootloader for booting
 */
#define CONFIG_OCTEON_STAGE3_LOAD_ADDR	0x81000000

/**
 * If more than one NAND chip is present, define which one contains the
 * bootloader.
 */
#define CONFIG_OCTEON_NAND_BOOT_DEV		0
#define DEFAULT_DDR3_CLOCK_FREQ_MHZ		667

#define DEFAULT_CPU_REF_FREQUENCY_MHZ		50
#define DEFAULT_DDR_REF_FREQUENCY_MHZ		50

/** Address of board EEPROM on TWSI bus */
#define CONFIG_SYS_I2C_EEPROM_ADDR	\
			OCTEON_GENERIC_NAND2_STAGE2_BOARD_EEPROM_TWSI_ADDR

/** Default EEPROM address */
#define CONFIG_SYS_DEF_EEPROM_ADDR	CONFIG_SYS_I2C_EEPROM_ADDR
/* These speed up writes to the serial EEPROM by enabling page writes.
 * Please see the datasheet for details.
 */
#define CONFIG_SYS_EEPROM_PAGE_WRITE_BITS	5	/* 32 bytes */
#define CONFIG_SYS_EEPROM_PAGE_WRITE_DELAY_MS	5

/* Set bootdelay to 0 for immediate boot */
#define CONFIG_BOOTDELAY	1	/* autoboot after X seconds	*/
#define CONFIG_BOOTCOMMAND	"bootstage3"

#undef	CONFIG_BOOTARGS

/*
 * The EBB6300 does not use the internal arbiter in Octeon.
 * Enable this for boards that do.
 */
/* #define USE_OCTEON_INTERNAL_ARBITER */

/* Change the NAND MTD partitioning here.  The JFFS2 filesystem should be kept
 * as small as reasonably possible to minimize boot time.  This environment
 * variable is suitabel for passing directly to the Linux kernel.
 * The 'mtdids' environment variable is used in conjunction with the 'mtdparts'
 * variable to define the MTD partitions for u-boot.
 */
#define MTDPARTS_DEFAULT				\
	"mtdparts=octeon_nand0:4m(bootloader)ro,"	\
	"2m(bootloader-environ)ro,"			\
	"8m(ubifs-bootloader),"				\
	"128m(ubifs-kernel),"				\
	"256m(ubifsbig)\0"

#define MTDIDS_DEFAULT	"nand0=octeon_nand0\0"

#include "octeon_cmd_conf.h"

#undef CONFIG_SYS_LONGHELP

#undef CONFIG_BZIP2
#undef CONFIG_ZIP
#undef CONFIG_GZIP
#undef CONFIG_LZMA
#undef CONFIG_CMD_UNZIP
#undef CONFIG_REGEX
#undef CONFIG_FIT
#undef CONFIG_CMD_MEMINFO
#undef CONFIG_CMD_ASKENV
#undef CONFIG_CMD_EDITENV
#undef CONFIG_CMD_BDI
#undef CONFIG_CMD_XIMG
#undef CONFIG_CMD_GPIO
#undef CONFIG_CMD_CRAMFS
#undef CONFIG_CMD_OCTEON_REGINFO
#undef CONFIG_CMD_I2C
#undef CONFIG_CMD_GREPENV
#undef CONFIG_CMD_OCTEON_LINUX
#undef CONFIG_CMD_OCTEON_ELF
#undef CONFIG_CMD_OCTEON
#undef CONFIG_CMD_OCTEON_MEM
#undef CONFIG_CMD_TIME
#undef CONFIG_CMD_STRINGS
#undef CONFIG_CMD_SOURCE
#undef CONFIG_CMD_NMI
#undef CONFIG_CMD_ITEST
#undef CONFIG_CMD_CONSOLE
#undef CONFIG_CMD_SAVEENV
#undef CONFIG_CMD_SETEXPR
#undef CONFIG_CMD_ENV
#undef CONFIG_CMD_FDT
#undef CONFIG_CMD_I2C
#undef CONFIG_CMD_BOOTM
#undef CONFIG_CMD_MEMORY
#undef CONFIG_DOS_PARTITION
#undef CONFIG_EFI_PARTITION
#undef CONFIG_PARTITION_UUIDS

/* Add NAND support */
#include "config_octeon_nand.h"

#undef CONFIG_ENV_IS_IN_FLASH
#undef CONFIG_CMD_OCTNAND

/* "tlv_eeprom" command */
#define CONFIG_CMD_OCTEON_TLVEEPROM

/* Enable MTD partitioning support */
#define CONFIG_CMD_MTDPARTS

/* Enable MTD partitioning support */
#define CONFIG_CMD_MTDPARTS

#undef CONFIG_HW_WATCHDOG

#define CONFIG_OCTEON_DISABLE_DDR2

#undef CONFIG_SYS_CBSIZE
#define CONFIG_SYS_CBSIZE		256

#undef CONFIG_OCTEON_QLM

/*
 * Miscellaneous configurable options
 */

/* Environment variables that will be set by default */
#define	CONFIG_EXTRA_ENV_SETTINGS					\
        "autoload=n\0"							\
        "bootcmd=bootstage3\0"						\
        "bootdelay=0\0"							\
        "\0"
#define CONFIG_ENV_SIZE			4096

/* Maximum NAND flash device */
#define CONFIG_SYS_MAX_NAND_DEVICE	1
/* Force width to 8-bits */
#define CONFIG_SYS_NAND_FORCE_WIDTH	8	/* Force to 8-bit width */
/* Not used for Octeon, but must be set */
#define CONFIG_SYS_NAND_BASE		0
/* Maximum number of NAND chips */
#define CONFIG_SYS_NAND_MAX_CHIPS CONFIG_SYS_MAX_NAND_DEVICE

/*-----------------------------------------------------------------------
 * Cache Configuration
 */
#define CONFIG_SYS_DCACHE_SIZE		(32 * 1024)
#define CONFIG_SYS_ICACHE_SIZE		(64 * 1024)


/* Include shared board configuration, consisting mainly of DRAM details. */
#include "octeon_generic_nand2_stage2_shared.h"
#include "octeon_evb7000_shared.h"
#include "octeon_sff7000_shared.h"

#endif	/* __CONFIG_H__ */
