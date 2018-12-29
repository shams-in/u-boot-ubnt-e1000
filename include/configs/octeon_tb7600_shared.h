#ifndef __OCTEON_TB7600_SHARED_H__
#define __OCTEON_TB7600_SHARED_H__

/*
 * Define this to use SPD data defined in header files instead of
 * using TWSI to access the SPDs in the DIMMs.  This is a workaround
 * for boards that lack working TWSI interfaces.
 */
#undef CONFIG_DISABLE_TB7600_DDR_TWSI

#ifdef CONFIG_DISABLE_TB7600_DDR_TWSI
/* 1-DIMM, 2-LMC */
#define OCTEON_DRAM_SOCKET_CONFIG_1DIMM_2LMC0(spd_pointer) \
	{{0x0, 0x0}, {spd_pointer, NULL}},\
	{{0x0, 0x0}, {NULL, NULL}}
#define OCTEON_DRAM_SOCKET_CONFIG_1DIMM_2LMC1(spd_pointer) \
	{{0x0, 0x0}, {spd_pointer, NULL}},\
	{{0x0, 0x0}, {NULL, NULL}}

/* 2-DIMM, 2-LMC */
#define OCTEON_DRAM_SOCKET_CONFIG_2DIMM_2LMC0(spd_pointer) \
	{{0x0, 0x0}, {spd_pointer, NULL}},\
	{{0x0, 0x0}, {spd_pointer, NULL}}
#define OCTEON_DRAM_SOCKET_CONFIG_2DIMM_2LMC1(spd_pointer) \
	{{0x0, 0x0}, {spd_pointer, NULL}},\
	{{0x0, 0x0}, {spd_pointer, NULL}}

#define TB7600_TS512MLK72V8N_VALUES \
0x92,0x10,0x0b,0x02,0x03,0x19,0x00,0x09,0x0b,0x11,0x01,0x08,0x09,0x00,0xfc,0x02,\
0x69,0x78,0x69,0x28,0x69,0x11,0x10,0x79,0x00,0x05,0x3c,0x3c,0x00,0xd8,0x83,0x01,\
0x80,0x00,0xca,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x11,0x64,0x01,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x01,0x4f,0x54,0x14,0x24,0x00,0x0a,0x43,0xa1,0x0c,0x22,\
0x54,0x53,0x35,0x31,0x32,0x4d,0x4c,0x4b,0x37,0x32,0x56,0x38,0x4e,0x20,0x20,0x20,\
0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x33,0x45,0x52,0x33,0x33,0x30,0x2d,0x53,0x58,0x39,0x53,0x52,0x48,0x00,0x00,0x00

#define TB7600_TS512MLK72V8N_VALUES \
0x92,0x10,0x0b,0x02,0x03,0x19,0x00,0x09,0x0b,0x11,0x01,0x08,0x09,0x00,0xfc,0x02,\
0x69,0x78,0x69,0x28,0x69,0x11,0x10,0x79,0x00,0x05,0x3c,0x3c,0x00,0xd8,0x83,0x01,\
0x80,0x00,0xca,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x11,0x64,0x01,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x01,0x4f,0x54,0x14,0x24,0x00,0x0a,0x43,0xa1,0x0c,0x22,\
0x54,0x53,0x35,0x31,0x32,0x4d,0x4c,0x4b,0x37,0x32,0x56,0x38,0x4e,0x20,0x20,0x20,\
0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x33,0x45,0x52,0x33,0x33,0x30,0x2d,0x53,0x58,0x39,0x53,0x52,0x48,0x00,0x00,0x00


/*-------------------------------------------------------------------*/
/* Configuration 0: gpio 1 = OFF */
/*-------------------------------------------------------------------*/
/* Select SPD from the list. */
#define OCTEON_TB7600_CFG0_SPD_VALUES	TB7600_WD3UN802G13LSD_SPD_VALUES

/* Select socket configuration.
 * _1DIMM_2LMC _2DIMM_2LMC
 */
#define OCTEON_TB7600_CFG0_DIMM_LMC_CONFIGURATION _2DIMM_2LMC
/*-------------------------------------------------------------------*/

/*-------------------------------------------------------------------*/
/* Configuration 1: gpio 1 = ON */
/*-------------------------------------------------------------------*/
/* Select SPD from the list. */
#define OCTEON_TB7600_CFG1_SPD_VALUES	TB7600_TS512MLK72V8N_VALUES

/* Select socket configuration.
 * _1DIMM_2LMC _2DIMM_2LMC
 */
#define OCTEON_TB7600_CFG1_DIMM_LMC_CONFIGURATION _2DIMM_2LMC
/*-------------------------------------------------------------------*/


#define MERGE_AGAIN(X, Y) X ## Y
#define MERGE(X, Y) MERGE_AGAIN(X, Y)
#define OCTEON_TB7600_DRAM_SOCKET_CONFIGURATION0	MERGE( MERGE( OCTEON_DRAM_SOCKET_CONFIG, OCTEON_TB7600_CFG0_DIMM_LMC_CONFIGURATION), 0)(octeon_tb7600_cfg0_spd_values)
#define OCTEON_TB7600_DRAM_SOCKET_CONFIGURATION1	MERGE( MERGE( OCTEON_DRAM_SOCKET_CONFIG, OCTEON_TB7600_CFG0_DIMM_LMC_CONFIGURATION), 1)(octeon_tb7600_cfg0_spd_values)

#define OCTEON_TB7600_CFG1_DRAM_SOCKET_CONFIGURATION0	MERGE( MERGE( OCTEON_DRAM_SOCKET_CONFIG, OCTEON_TB7600_CFG1_DIMM_LMC_CONFIGURATION), 0)(octeon_tb7600_cfg1_spd_values)
#define OCTEON_TB7600_CFG1_DRAM_SOCKET_CONFIGURATION1	MERGE( MERGE( OCTEON_DRAM_SOCKET_CONFIG, OCTEON_TB7600_CFG1_DIMM_LMC_CONFIGURATION), 1)(octeon_tb7600_cfg1_spd_values)

#else  /* CONFIG_DISABLE_TB7600_DDR_TWSI */

#define OCTEON_TB7600_DRAM_SOCKET_CONFIGURATION0 \
    {{0x1050, 0x0}, {NULL, NULL}},{{0x1051, 0x0}, {NULL, NULL}}
#define OCTEON_TB7600_DRAM_SOCKET_CONFIGURATION1 \
    {{0x1052, 0x0}, {NULL, NULL}},{{0x1053, 0x0}, {NULL, NULL}}
#define OCTEON_TB7600_DRAM_SOCKET_CONFIGURATION2 \
    {{0x1054, 0x0}, {NULL, NULL}},{{0x1055, 0x0}, {NULL, NULL}}
#define OCTEON_TB7600_DRAM_SOCKET_CONFIGURATION3 \
    {{0x1056, 0x0}, {NULL, NULL}},{{0x1057, 0x0}, {NULL, NULL}}

#define OCTEON_TB7600_CFG1_DRAM_SOCKET_CONFIGURATION0 \
    {{0x1050, 0x0}, {NULL, NULL}},{{0x1051, 0x0}, {NULL, NULL}}
#define OCTEON_TB7600_CFG1_DRAM_SOCKET_CONFIGURATION1 \
    {{0x1052, 0x0}, {NULL, NULL}},{{0x1053, 0x0}, {NULL, NULL}}
#define OCTEON_TB7600_CFG1_DRAM_SOCKET_CONFIGURATION2 \
    {{0x1054, 0x0}, {NULL, NULL}},{{0x1055, 0x0}, {NULL, NULL}}
#define OCTEON_TB7600_CFG1_DRAM_SOCKET_CONFIGURATION3 \
    {{0x1056, 0x0}, {NULL, NULL}},{{0x1057, 0x0}, {NULL, NULL}}

#endif  /* CONFIG_DISABLE_TB7600_DDR_TWSI */

#define OCTEON_TB7600_BOARD_EEPROM_TWSI_ADDR        (0x56)



/*
** Local copy of these parameters to allow for customization for this
** board design.  The generic version resides in lib_octeon_shared.h.
** */

/* LMC0_MODEREG_PARAMS1 */
#define OCTEON_TB7600_MODEREG_PARAMS1_1RANK_1SLOT      \
    { .cn78xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = 0,                    \
                  .dic_00       = 0,                    \
                  .rtt_nom_00   = rttnom_40ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = 0,                    \
                  .dic_01       = 0,                    \
                  .rtt_nom_01   = 0,                    \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = 0,                    \
                  .dic_10       = 0,                    \
                  .rtt_nom_10   = 0,                    \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = 0,                    \
                  .dic_11       = 0,                    \
                  .rtt_nom_11   = 0,                    \
        }                                               \
    }

#define OCTEON_TB7600_MODEREG_PARAMS1_1RANK_2SLOT      \
    { .cn78xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = rttwr_120ohm,         \
                  .dic_00       = 0,                    \
                  .rtt_nom_00   = rttnom_20ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = 0,                    \
                  .dic_01       = 0,                    \
                  .rtt_nom_01   = 0,                    \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = rttwr_120ohm,         \
                  .dic_10       = 0,                    \
                  .rtt_nom_10   = rttnom_20ohm,         \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = 0,                    \
                  .dic_11       = 0,                    \
                  .rtt_nom_11   = 0                     \
        }                                               \
    }

#define OCTEON_TB7600_MODEREG_PARAMS1_2RANK_1SLOT      \
    { .cn78xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = 0,                    \
                  .dic_00       = 0,                    \
                  .rtt_nom_00   = rttnom_40ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = 0,                    \
                  .dic_01       = 0,                    \
                  .rtt_nom_01   = 0,                    \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = 0,                    \
                  .dic_10       = 0,                    \
                  .rtt_nom_10   = 0,                    \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = 0,                    \
                  .dic_11       = 0,                    \
                  .rtt_nom_11   = 0,                    \
        }                                               \
    }

#define OCTEON_TB7600_MODEREG_PARAMS1_2RANK_2SLOT      \
    { .cn78xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = 0,                    \
                  .dic_00       = dic_34ohm,            \
                  .rtt_nom_00   = rttnom_20ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = 0,                    \
                  .dic_01       = dic_34ohm,            \
                  .rtt_nom_01   = rttnom_60ohm,         \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = 0,                    \
                  .dic_10       = dic_34ohm,            \
                  .rtt_nom_10   = rttnom_20ohm,         \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = 0,                    \
                  .dic_11       = dic_34ohm,            \
                  .rtt_nom_11   = rttnom_60ohm,         \
        }                                               \
    }

#define OCTEON_TB7600_MODEREG_PARAMS1_4RANK_1SLOT      \
    { .cn78xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = rttwr_60ohm,         \
                  .dic_00       = dic_34ohm,            \
                  .rtt_nom_00   = rttnom_20ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = rttwr_60ohm,         \
                  .dic_01       = dic_34ohm,            \
                  .rtt_nom_01   = rttnom_none,          \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = rttwr_60ohm,         \
                  .dic_10       = dic_34ohm,            \
                  .rtt_nom_10   = rttnom_20ohm,         \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = rttwr_60ohm,         \
                  .dic_11       = dic_34ohm,            \
                  .rtt_nom_11   = rttnom_none,          \
        }                                               \
    }


#define OCTEON_TB7600_CN78XX_DRAM_ODT_1RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1            reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ========================================== ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x00000001ULL, OCTEON_TB7600_MODEREG_PARAMS1_1RANK_1SLOT, {.u64=0x0000},    2,     0x00000000ULL,  0  },      \
    /*   2 */ {   0,    0x00050005ULL, OCTEON_TB7600_MODEREG_PARAMS1_1RANK_2SLOT, {.u64=0x0000},    3,     0x00010004ULL,  0  }

#define OCTEON_TB7600_CN78XX_DRAM_ODT_2RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1            reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ========================================== ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x00000101ULL, OCTEON_TB7600_MODEREG_PARAMS1_2RANK_1SLOT, {.u64=0x0000},    3,     0x00000000ULL,    0  },    \
    /*   2 */ {   0,    0x09090606ULL, OCTEON_TB7600_MODEREG_PARAMS1_2RANK_2SLOT, {.u64=0x0000},    3,     0x01010404ULL,    0  }

#define OCTEON_TB7600_CN78XX_DRAM_ODT_4RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1            reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ========================================== ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x01030203ULL, OCTEON_TB7600_MODEREG_PARAMS1_4RANK_1SLOT, {.u64=0x0000},    3,     0x01010202ULL,    0  }

/* Construct a static initializer for the ddr_configuration_t variable that holds
** (almost) all of the information required for DDR initialization.
*/

/*
  The parameters below make up the custom_lmc_config data structure.
  This structure is used to customize the way that the LMC DRAM
  Controller is configured for a particular board design.

  Refer to the file lib_octeon_board_table_entry.h for a description
  of the custom board settings.  It is usually kept in the following
  location... arch/mips/include/asm/arch-octeon/

*/

#define OCTEON_TB7600_DDR_CONFIGURATION(SPD_CONFIGURATION)             \
    /* Interface 0 */                                                   \
    {                                                                   \
        .custom_lmc_config = {                                          \
            .min_rtt_nom_idx	= 1,                                    \
            .max_rtt_nom_idx	= 5,                                    \
            .min_rodt_ctl	= 1,                                    \
            .max_rodt_ctl	= 5,                                    \
            .dqx_ctl		= 4,                                    \
            .ck_ctl		= 4,                                    \
            .cmd_ctl		= 4,                                    \
            .ctl_ctl		= 4,                                    \
            .min_cas_latency	= 0,                                    \
            .offset_en 		= 1,                                    \
            .offset_udimm	= 2,                                    \
            .offset_rdimm	= 2,                                    \
            .ddr_rtt_nom_auto	= 0,                                    \
            .ddr_rodt_ctl_auto	= 0,                                    \
            .rlevel_comp_offset_udimm	= 7,                            \
            .rlevel_comp_offset_rdimm	= 7,                            \
            .rlevel_compute 	= 0,                                    \
            .ddr2t_udimm 	= 0,                                    \
            .ddr2t_rdimm 	= 1,                                    \
            .maximum_adjacent_rlevel_delay_increment = 2,               \
            .fprch2		= 2,                                    \
            .dll_write_offset   = NULL,                                 \
            .dll_read_offset    = NULL,                                 \
            .parity		= 0},                                   \
            .dimm_config_table = {                                      \
             SPD_CONFIGURATION##0,                                      \
             DIMM_CONFIG_TERMINATOR},                                   \
                 .unbuffered = {                                        \
            .ddr_board_delay = 0,                                       \
            .lmc_delay_clk = 0,                                         \
            .lmc_delay_cmd = 0,                                         \
            .lmc_delay_dq = 0},                                         \
                      .registered = {                                   \
            .ddr_board_delay = 0,                                       \
            .lmc_delay_clk = 0,                                         \
            .lmc_delay_cmd = 0,                                         \
            .lmc_delay_dq = 0},                                         \
                           .odt_1rank_config = {                        \
            OCTEON_TB7600_CN78XX_DRAM_ODT_1RANK_CONFIGURATION},        \
                                .odt_2rank_config = {                   \
            OCTEON_TB7600_CN78XX_DRAM_ODT_2RANK_CONFIGURATION},        \
                                     .odt_4rank_config = {              \
            OCTEON_TB7600_CN78XX_DRAM_ODT_4RANK_CONFIGURATION}         \
    },                                                                  \
    /* Interface 1 */                                                   \
    {                                                                   \
        .custom_lmc_config = {                                          \
            .min_rtt_nom_idx	= 1,                                    \
            .max_rtt_nom_idx	= 5,                                    \
            .min_rodt_ctl	= 1,                                    \
            .max_rodt_ctl	= 5,                                    \
            .dqx_ctl		= 4,                                    \
            .ck_ctl		= 4,                                    \
            .cmd_ctl		= 4,                                    \
            .ctl_ctl		= 4,                                    \
            .min_cas_latency	= 0,                                    \
            .offset_en 		= 1,                                    \
            .offset_udimm	= 2,                                    \
            .offset_rdimm	= 2,                                    \
            .ddr_rtt_nom_auto	= 0,                                    \
            .ddr_rodt_ctl_auto	= 0,                                    \
            .rlevel_comp_offset_udimm	= 7,                            \
            .rlevel_comp_offset_rdimm	= 7,                            \
            .rlevel_compute 	= 0,                                    \
            .ddr2t_udimm 	= 0,                                    \
            .ddr2t_rdimm 	= 1,                                    \
            .maximum_adjacent_rlevel_delay_increment = 2,               \
            .fprch2		= 2,                                    \
            .dll_write_offset   = NULL,                                 \
            .dll_read_offset    = NULL,                                 \
            .parity		= 0},                                   \
            .dimm_config_table = {                                      \
             SPD_CONFIGURATION##1,                                      \
             DIMM_CONFIG_TERMINATOR},                                   \
                 .unbuffered = {                                        \
            .ddr_board_delay = 0,                                       \
            .lmc_delay_clk = 0,                                         \
            .lmc_delay_cmd = 0,                                         \
            .lmc_delay_dq = 0},                                         \
                      .registered = {                                   \
            .ddr_board_delay = 0,                                       \
            .lmc_delay_clk = 0,                                         \
            .lmc_delay_cmd = 0,                                         \
            .lmc_delay_dq = 0},                                         \
                           .odt_1rank_config = {                        \
            OCTEON_TB7600_CN78XX_DRAM_ODT_1RANK_CONFIGURATION},        \
                                .odt_2rank_config = {                   \
            OCTEON_TB7600_CN78XX_DRAM_ODT_2RANK_CONFIGURATION},        \
                                     .odt_4rank_config = {              \
            OCTEON_TB7600_CN78XX_DRAM_ODT_4RANK_CONFIGURATION}         \
    }

#endif   /* __OCTEON_TB7600_SHARED_H__ */
