#ifndef __OCTEON_EVB7000_SFF_SHARED_H__
#define __OCTEON_EVB7000_SFF_SHARED_H__

#define OCTEON_EVB7000_SFF_SPD_VALUES \
0x92,0x11,0x0b,0x06,0x03,0x19,0x00,0x01,0x0b,0x11,0x01,0x08,0x0c,0x00,0x7e,0x00,\
0x69,0x78,0x69,0x30,0x69,0x11,0x20,0x89,0x00,0x05,0x3c,0x3c,0x00,0xf0,0x83,0x05,\
0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x11,0x1f,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x80,0x2c,0x08,0x13,0x09,0xdc,0x95,0xd6,0x2f,0xbb,0x60


#define OCTEON_EVB7000_SFF_DRAM_SOCKET_CONFIGURATION0 \
	{{0x0, 0x0}, {octeon_evb7000_sff_spd_values, NULL}}

#define OCTEON_EVB7000_SFF_BOARD_EEPROM_TWSI_ADDR	(0x54)

/*
 * Local copy of these parameters to allow for customization for this
 * board design.  The generic version resides in lib_octeon_shared.h.
 *
 */
#define OCTEON_EVB7000_SFF_MODEREG_PARAMS1_1RANK_1SLOT	\
{							\
	.cn63xx = {					\
		.pasr_00	= 0,			\
		.asr_00		= 0,			\
		.srt_00		= 0,			\
		.rtt_wr_00	= 0,			\
		.dic_00		= 0,			\
		.rtt_nom_00	= rttnom_40ohm,		\
		.pasr_01	= 0,			\
		.asr_01		= 0,			\
		.srt_01		= 0,			\
		.rtt_wr_01	= 0,			\
		.dic_01		= 0,			\
		.rtt_nom_01	= 0,			\
		.pasr_10	= 0,			\
		.asr_10		= 0,			\
		.srt_10		= 0,			\
		.rtt_wr_10	= 0,			\
		.dic_10		= 0,			\
		.rtt_nom_10	= 0,			\
		.pasr_11	= 0,			\
		.asr_11		= 0,			\
		.srt_11		= 0,			\
		.rtt_wr_11	= 0,			\
		.dic_11		= 0,			\
		.rtt_nom_11	= 0			\
	}						\
}

#define OCTEON_EVB7000_SFF_MODEREG_PARAMS1_2RANK_1SLOT	\
{							\
	.cn63xx = {					\
		.pasr_00	= 0,			\
		.asr_00		= 0,			\
		.srt_00		= 0,			\
		.rtt_wr_00	= 0,			\
		.dic_00		= 0,			\
		.rtt_nom_00	= rttnom_40ohm,		\
		.pasr_01	= 0,			\
		.asr_01		= 0,			\
		.srt_01		= 0,			\
		.rtt_wr_01	= 0,			\
		.dic_01		= 0,			\
		.rtt_nom_01	= 0,			\
		.pasr_10	= 0,			\
		.asr_10		= 0,			\
		.srt_10		= 0,			\
		.rtt_wr_10	= 0,			\
		.dic_10		= 0,			\
		.rtt_nom_10	= 0,			\
		.pasr_11	= 0,			\
		.asr_11		= 0,			\
		.srt_11		= 0,			\
		.rtt_wr_11	= 0,			\
		.dic_11		= 0,			\
		.rtt_nom_11	= 0			\
	}						\
}



#define OCTEON_EVB7000_SFF_DRAM_ODT_1RANK_CONFIGURATION \
	/* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1                 reserved       RODT_CTL    RODT_MASK    reserved */	\
	/* =====   ======== ============== ==========================================      ============== ========= ============== ======== */	\
	/*   1 */ {   0,    0x00000001ULL, OCTEON_EVB7000_SFF_MODEREG_PARAMS1_1RANK_1SLOT, {.u64=0x0000},     3,     0x00000000ULL,  0  }	\

#define OCTEON_EVB7000_SFF_DRAM_ODT_2RANK_CONFIGURATION \
	/* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1                 reserved       RODT_CTL    RODT_MASK    reserved */	\
	/* =====   ======== ============== ==========================================      ============== ========= ============== ======== */	\
	/*   1 */ {   0,    0x00000101ULL, OCTEON_EVB7000_SFF_MODEREG_PARAMS1_2RANK_1SLOT, {.u64=0x0000},     3,     0x00000000ULL,    0  }    \

/* Construct a static initializer for the ddr_configuration_t variable that holds
 * (almost) all of the information required for DDR initialization.
 */

/*
  The parameters below make up the custom_lmc_config data structure.
  This structure is used to customize the way that the LMC DRAM
  Controller is configured for a particular board design.

  Refer to the file lib_octeon_board_table_entry.h for a description
  of the custom board settings.  It is usually kept in the following
  location... arch/mips/include/asm/arch-octeon/

 */

#define OCTEON_EVB7000_SFF_DDR_CONFIGURATION {				\
	/* Interface 0 */						\
	.custom_lmc_config = {						\
		.min_rtt_nom_idx	= 1,				\
		.max_rtt_nom_idx	= 5,				\
		.min_rodt_ctl		= 1,				\
		.max_rodt_ctl		= 5,				\
		.dqx_ctl		= 4,				\
		.ck_ctl			= 4,				\
		.cmd_ctl		= 4,				\
		.ctl_ctl		= 4,				\
		.min_cas_latency	= 0,				\
		.offset_en 		= 1,				\
		.offset_udimm		= 2,				\
		.offset_rdimm		= 2,				\
                .ntune_offset		= -2,				\
                .ptune_offset		= 1,				\
		.ddr_rtt_nom_auto	= 0,				\
		.ddr_rodt_ctl_auto	= 0,				\
                .rlevel_comp_offset_udimm = 7,                          \
		.rlevel_compute 	= 0,				\
		.ddr2t_udimm 		= 1,				\
		.ddr2t_rdimm 		= 1,				\
                .maximum_adjacent_rlevel_delay_increment = 2,           \
		.fprch2			= 2,				\
		.parity			= 0,				\
		.mode32b		= 1,				\
                .dll_write_offset	= NULL,                         \
                .dll_read_offset 	= NULL,                         \
	},								\
        .dimm_config_table = {						\
		OCTEON_EVB7000_SFF_DRAM_SOCKET_CONFIGURATION0,		\
		DIMM_CONFIG_TERMINATOR,					\
	},								\
	.unbuffered = {							\
		.ddr_board_delay = 0,					\
		.lmc_delay_clk = 0,					\
		.lmc_delay_cmd = 0,					\
		.lmc_delay_dq = 0,					\
	},								\
	.registered = {							\
		.ddr_board_delay = 0,					\
		.lmc_delay_clk = 0,					\
		.lmc_delay_cmd = 0,					\
		.lmc_delay_dq = 0,					\
	},								\
	.odt_1rank_config = {                        			\
		OCTEON_EVB7000_SFF_DRAM_ODT_1RANK_CONFIGURATION,	\
	},								\
	.odt_2rank_config = {						\
		OCTEON_EVB7000_SFF_DRAM_ODT_2RANK_CONFIGURATION,	\
	},								\
}
#endif   /* __OCTEON_EVB7000_SFF_SHARED_H__ */
