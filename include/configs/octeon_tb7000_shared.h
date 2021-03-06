#ifndef __OCTEON_TB7000_SHARED_H__
#define __OCTEON_TB7000_SHARED_H__

/* Speed Grade -125, 1600 MT/s */
#define OCTEON_TB7000_MT41K1G8TRF125E_SPD_VALUES \
0x92,0x11,0x0b,0x02,0x04,0x21,0x02,0x09,0x0a,0x11,0x01,0x08,0x0a,0x00,0xfe,0x00,\
0x6e,0x78,0x6e,0x30,0x6e,0x11,0x18,0x86,0x20,0x08,0x3c,0x3c,0x00,0xf0,0x83,0x05,\
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xca

#define OCTEON_TB7000_SPD_VALUES OCTEON_TB7000_MT41K1G8TRF125E_SPD_VALUES

#define USE_COMPILED_IN_SPD 0
#if USE_COMPILED_IN_SPD
#define OCTEON_TB7000_DRAM_SOCKET_CONFIGURATION0 \
	{{0x0, 0x0}, {octeon_tb7000_spd_values, NULL}}
#else
#define OCTEON_TB7000_DRAM_SOCKET_CONFIGURATION0 \
    {{0x1050, 0x0}, {NULL, NULL}},{{0x00, 0x0}, {NULL, NULL}}
#endif

#define OCTEON_TB7000_BOARD_EEPROM_TWSI_ADDR	(0x56)

/*
 * Local copy of these parameters to allow for customization for this
 * board design.  The generic version resides in lib_octeon_shared.h.
 */

/* LMC0_MODEREG_PARAMS1 */
#define OCTEON_TB7000_MODEREG_PARAMS1_1RANK_1SLOT	\
{							\
	.cn70xx = {					\
		.pasr_00	= 0,			\
		.asr_00		= 0,			\
		.srt_00		= 0,			\
		.rtt_wr_00	= 0,			\
		.dic_00		= ddr4_dic_48ohm,	\
		.rtt_nom_00	= 0,			\
		.pasr_01	= 0,			\
		.asr_01		= 0,			\
		.srt_01		= 0,			\
		.rtt_wr_01	= 0,			\
		.dic_01		= ddr4_dic_48ohm,	\
		.rtt_nom_01	= 0,			\
		.pasr_10	= 0,			\
		.asr_10		= 0,			\
		.srt_10		= 0,			\
		.rtt_wr_10	= 0,			\
		.dic_10		= ddr4_dic_48ohm,	\
		.rtt_nom_10	= 0,			\
		.pasr_11	= 0,			\
		.asr_11		= 0,			\
		.srt_11		= 0,			\
		.rtt_wr_11	= 0,			\
		.dic_11		= ddr4_dic_48ohm,	\
		.rtt_nom_11	= 0			\
	}						\
}

#define OCTEON_TB7000_MODEREG_PARAMS1_2RANK_1SLOT	\
{							\
	.cn70xx = {					\
		.pasr_00	= 0,			\
		.asr_00		= 0,			\
		.srt_00		= 0,			\
		.rtt_wr_00	= ddr4_rttwr_120ohm,	\
		.dic_00		= ddr4_dic_48ohm,	\
		.rtt_nom_00	= 0,			\
		.pasr_01	= 0,			\
		.asr_01		= 0,			\
		.srt_01		= 0,			\
		.rtt_wr_01	= ddr4_rttwr_120ohm,	\
		.dic_01		= ddr4_dic_48ohm,	\
		.rtt_nom_01	= 0,			\
		.pasr_10	= 0,			\
		.asr_10		= 0,			\
		.srt_10		= 0,			\
		.rtt_wr_10	= 0,			\
		.dic_10		= ddr4_dic_48ohm,	\
		.rtt_nom_10	= 0,			\
		.pasr_11	= 0,			\
		.asr_11		= 0,			\
		.srt_11		= 0,			\
		.rtt_wr_11	= 0,			\
		.dic_11		= ddr4_dic_48ohm,	\
		.rtt_nom_11	= 0			\
	}						\
}

#define OCTEON_TB7000_MODEREG_PARAMS2_1RANK_1SLOT	\
{							\
	.cn70xx = {					\
		.rtt_park_00    = ddr4_rttpark_40ohm,	\
		.vref_value_00  = 0x19,			\
		.vref_range_00  = 0,			\
		.rtt_park_01    = 0,			\
		.vref_value_01  = 0,			\
		.vref_range_01  = 0,			\
		.rtt_park_10    = 0,			\
		.vref_value_10  = 0,			\
		.vref_range_10  = 0,			\
		.rtt_park_11    = 0,			\
		.vref_value_11  = 0,			\
		.vref_range_11  = 0			\
	}						\
}

#define OCTEON_TB7000_MODEREG_PARAMS2_2RANK_1SLOT	\
{							\
	.cn70xx = {					\
		.rtt_park_00    = ddr4_rttpark_80ohm,	\
		.vref_value_00  = 0x19,			\
		.vref_range_00  = 0,			\
		.rtt_park_01    = ddr4_rttpark_80ohm,	\
		.vref_value_01  = 0x19,			\
		.vref_range_01  = 0,			\
		.rtt_park_10    = 0,			\
		.vref_value_10  = 0,			\
		.vref_range_10  = 0,			\
		.rtt_park_11    = 0,			\
		.vref_value_11  = 0,			\
		.vref_range_11  = 0			\
	}						\
}


#define OCTEON_TB7000_DRAM_ODT_1RANK_CONFIGURATION \
	/* DIMMS   DQX_CTL  WODT_MASK                LMCX_MODEREG_PARAMS1                       LMCX_MODEREG_PARAMS2             RODT_CTL    RODT_MASK    reserved */	\
	/* =====   ======== ============== ========================================== ========================================== ========= ============== ======== */	\
	/*   1 */ {   5,    0x00000001ULL, OCTEON_TB7000_MODEREG_PARAMS1_1RANK_1SLOT, OCTEON_TB7000_MODEREG_PARAMS2_1RANK_1SLOT,    7,     0x00000000ULL,  0  }	\

#define OCTEON_TB7000_DRAM_ODT_2RANK_CONFIGURATION \
	/* DIMMS   DQX_CTL  WODT_MASK                LMCX_MODEREG_PARAMS1                       LMCX_MODEREG_PARAMS2             RODT_CTL    RODT_MASK    reserved */	\
	/* =====   ======== ============== ========================================== ========================================== ========= ============== ======== */	\
	/*   1 */ {   5,    0x00000201ULL, OCTEON_TB7000_MODEREG_PARAMS1_2RANK_1SLOT, OCTEON_TB7000_MODEREG_PARAMS2_2RANK_1SLOT,    7,     0x00000000ULL,    0  } \

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

#define OCTEON_TB7000_DDR_CONFIGURATION {				\
	/* Interface 0 */						\
	.custom_lmc_config = {						\
		.min_rtt_nom_idx	= 1,				\
		.max_rtt_nom_idx	= 7,				\
		.min_rodt_ctl		= 1,				\
		.max_rodt_ctl		= 7,				\
		.ck_ctl			= 5,				\
		.cmd_ctl		= 5,				\
		.ctl_ctl		= 5,				\
		.min_cas_latency	= 0,				\
		.offset_en 		= 1,				\
		.offset_udimm		= 2,				\
		.offset_rdimm		= 2,				\
                .ntune_offset		= 2,				\
                .ptune_offset		= 1,				\
		.ddr_rtt_nom_auto	= 0,				\
		.ddr_rodt_ctl_auto	= 0,				\
                .rlevel_comp_offset_udimm = 0,                          \
                .rlevel_comp_offset_rdimm = 0,                          \
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
		OCTEON_TB7000_DRAM_SOCKET_CONFIGURATION0,		\
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
		OCTEON_TB7000_DRAM_ODT_1RANK_CONFIGURATION,	\
	},								\
	.odt_2rank_config = {						\
		OCTEON_TB7000_DRAM_ODT_2RANK_CONFIGURATION,	\
	},								\
}
#endif   /* __OCTEON_TB7000_SHARED_H__ */
