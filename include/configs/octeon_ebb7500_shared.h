#ifndef __OCTEON_EBB7500_SHARED_H__
#define __OCTEON_EBB7500_SHARED_H__

#define OCTEON_EBB7500_DRAM_SOCKET_CONFIGURATION0 \
    {{0x1050, 0x0}, {NULL, NULL}},{{0x1051, 0x0}, {NULL, NULL}}
#define OCTEON_EBB7500_DRAM_SOCKET_CONFIGURATION1 \
    {{0x1052, 0x0}, {NULL, NULL}},{{0x1053, 0x0}, {NULL, NULL}}
#define OCTEON_EBB7500_DRAM_SOCKET_CONFIGURATION2 \
    {{0x1054, 0x0}, {NULL, NULL}},{{0x1055, 0x0}, {NULL, NULL}}
#define OCTEON_EBB7500_DRAM_SOCKET_CONFIGURATION3 \
    {{0x1056, 0x0}, {NULL, NULL}},{{0x1057, 0x0}, {NULL, NULL}}


#define OCTEON_EBB7500_BOARD_EEPROM_TWSI_ADDR        (0x56)



/*
** Local copy of these parameters to allow for customization for this
** board design.  The generic version resides in lib_octeon_shared.h.
** */

/* LMC0_MODEREG_PARAMS1 */
#define OCTEON_EBB7500_MODEREG_PARAMS1_1RANK_1SLOT      \
    { .cnf75xx = {.pasr_00      = 0,                    \
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

#define OCTEON_EBB7500_MODEREG_PARAMS1_1RANK_2SLOT      \
    { .cnf75xx = {.pasr_00      = 0,                    \
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

#define OCTEON_EBB7500_MODEREG_PARAMS1_2RANK_1SLOT      \
    { .cnf75xx = {.pasr_00      = 0,                    \
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

#define OCTEON_EBB7500_MODEREG_PARAMS1_2RANK_2SLOT      \
    { .cnf75xx = {.pasr_00      = 0,                    \
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

#define OCTEON_EBB7500_MODEREG_PARAMS1_4RANK_1SLOT      \
    { .cnf75xx = {.pasr_00      = 0,                    \
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


#define OCTEON_EBB7500_CNF75XX_DRAM_ODT_1RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1            reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ========================================== ============== ========= ============== ======== */ \
    /*   1 */ {   4,    0x00000001ULL, OCTEON_EBB7500_MODEREG_PARAMS1_1RANK_1SLOT, {.u64=0x0000},    2,     0x00000000ULL,  0  },      \
    /*   2 */ {   4,    0x00050005ULL, OCTEON_EBB7500_MODEREG_PARAMS1_1RANK_2SLOT, {.u64=0x0000},    3,     0x00010004ULL,  0  }

#define OCTEON_EBB7500_CNF75XX_DRAM_ODT_2RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1            reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ========================================== ============== ========= ============== ======== */ \
    /*   1 */ {   4,    0x00000101ULL, OCTEON_EBB7500_MODEREG_PARAMS1_2RANK_1SLOT, {.u64=0x0000},    3,     0x00000000ULL,    0  },    \
    /*   2 */ {   4,    0x09090606ULL, OCTEON_EBB7500_MODEREG_PARAMS1_2RANK_2SLOT, {.u64=0x0000},    3,     0x01010404ULL,    0  }

#define OCTEON_EBB7500_CNF75XX_DRAM_ODT_4RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1            reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ========================================== ============== ========= ============== ======== */ \
    /*   1 */ {   4,    0x01030203ULL, OCTEON_EBB7500_MODEREG_PARAMS1_4RANK_1SLOT, {.u64=0x0000},    3,     0x01010202ULL,    0  }

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

#define OCTEON_EBB7500_DDR_CONFIGURATION                                \
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
            .ddr2t_udimm 	= 1,                                    \
            .ddr2t_rdimm 	= 1,                                    \
            .maximum_adjacent_rlevel_delay_increment = 2,               \
            .fprch2		= 2,                                    \
            .dll_write_offset   = NULL,                                 \
            .dll_read_offset    = NULL,                                 \
            .parity		= 0},                                   \
            .dimm_config_table = {                                      \
		OCTEON_EBB7500_DRAM_SOCKET_CONFIGURATION0,		\
                DIMM_CONFIG_TERMINATOR},                                \
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
            OCTEON_EBB7500_CNF75XX_DRAM_ODT_1RANK_CONFIGURATION},        \
                                .odt_2rank_config = {                   \
            OCTEON_EBB7500_CNF75XX_DRAM_ODT_2RANK_CONFIGURATION},        \
                                     .odt_4rank_config = {              \
            OCTEON_EBB7500_CNF75XX_DRAM_ODT_4RANK_CONFIGURATION}         \
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
            .ddr2t_udimm 	= 1,                                    \
            .ddr2t_rdimm 	= 1,                                    \
            .maximum_adjacent_rlevel_delay_increment = 2,               \
            .fprch2		= 2,                                    \
            .dll_write_offset   = NULL,                                 \
            .dll_read_offset    = NULL,                                 \
            .parity		= 0},                                   \
            .dimm_config_table = {                                      \
		OCTEON_EBB7500_DRAM_SOCKET_CONFIGURATION1,		\
                DIMM_CONFIG_TERMINATOR},                                \
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
            OCTEON_EBB7500_CNF75XX_DRAM_ODT_1RANK_CONFIGURATION},        \
                                .odt_2rank_config = {                   \
            OCTEON_EBB7500_CNF75XX_DRAM_ODT_2RANK_CONFIGURATION},        \
                                     .odt_4rank_config = {              \
            OCTEON_EBB7500_CNF75XX_DRAM_ODT_4RANK_CONFIGURATION}         \
    }

#endif   /* __OCTEON_EBB7500_SHARED_H__ */
