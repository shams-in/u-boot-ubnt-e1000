/***********************license start************************************
 * Copyright (c) 2015 Cavium Inc. (support@cavium.com).
 * All rights reserved.
 *
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *
 *     * Neither the name of Cavium Inc. nor the names of
 *       its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written
 *       permission.
 *
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
 * AND WITH ALL FAULTS AND CAVIUM INC. MAKES NO PROMISES, REPRESENTATIONS
 * OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
 * RESPECT TO THE SOFTWARE, INCLUDING ITS CONDITION, ITS CONFORMITY TO ANY
 * REPRESENTATION OR DESCRIPTION, OR THE EXISTENCE OF ANY LATENT OR PATENT
 * DEFECTS, AND CAVIUM SPECIFICALLY DISCLAIMS ALL IMPLIED (IF ANY) WARRANTIES
 * OF TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR
 * PURPOSE, LACK OF VIRUSES, ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET
 * POSSESSION OR CORRESPONDENCE TO DESCRIPTION.  THE ENTIRE RISK ARISING OUT
 * OF USE OR PERFORMANCE OF THE SOFTWARE LIES WITH YOU.
 *
 ***********************license end**************************************/
#ifndef __AQUANTIA_REGS_H__
#define __AQUANTIA_REGS_H__

/* PMA registers (dev 1) */
#define AQ_REG_PMA_STANDARD_CONTROL				0x0000
#define AQ_REG_PMA_STANDARD_STATUS				0x0001
#define AQ_REG_PMA_STANDARD_DEVICE_ID_1				0x0002
#define AQ_REG_PMA_STANDARD_DEVICE_ID_2				0x0003
#define AQ_REG_PMA_STANDARD_SPEED_ABILITY			0x0004
#define AQ_REG_PMA_STANDARD_DEVICES_1				0x0005
#define AQ_REG_PMA_STANDARD_DEVICES_2				0x0006
#define AQ_REG_PMA_STANDARD_CONTROL_2				0x0007
#define AQ_REG_PMA_STANDARD_STATUS_2				0x0008
#define AQ_REG_PMA_STANDARD_TX_DISABLE_CONTROL			0x0009
#define AQ_REG_PMA_STANDARD_SIGNAL_DETECT			0x000A
#define AQ_REG_PMA_STANDARD_10G_EXT_ABILITY			0x000B
#define AQ_REG_PMA_STANDARD_PACKAGE_ID_1			0x000E
#define AQ_REG_PMA_STANDARD_PACKAGE_ID_2			0x000F
#define AQ_REG_PMA_10GBASE_T_STATUS				0x0081
#define AQ_REG_PMA_10GBASE_T_PAIR_SWAP_POLARITY			0x0082
#define AQ_REG_PMA_10GBASE_T_TX_POWER_BACKOFF_SHORT_REACH	0x0083
#define AQ_REG_PMA_10GBASE_T_TEST_MODE				0x0084
#define AQ_REG_PMA_10GBASE_T_SNR_OPERATING_MARGIN_CHAN_A	0x0085
#define AQ_REG_PMA_10GBASE_T_SNR_OPERATING_MARGIN_CHAN_B	0x0086
#define AQ_REG_PMA_10GBASE_T_SNR_OPERATING_MARGIN_CHAN_C	0x0087
#define AQ_REG_PMA_10GBASE_T_SNR_OPERATING_MARGIN_CHAN_D	0x0088
#define AQ_REG_PMA_10GBASE_T_SNR_MIN_OPERATING_MARGIN_CHAN_A	0x0089
#define AQ_REG_PMA_10GBASE_T_SNR_MIN_OPERATING_MARGIN_CHAN_B	0x008a
#define AQ_REG_PMA_10GBASE_T_SNR_MIN_OPERATING_MARGIN_CHAN_C	0x008b
#define AQ_REG_PMA_10GBASE_T_SNR_MIN_OPERATING_MARGIN_CHAN_D	0x008c
#define AQ_REG_PMA_10GBASE_T_RX_SIGNAL_POWER_CHAN_A		0x008d
#define AQ_REG_PMA_10GBASE_T_RX_SIGNAL_POWER_CHAN_B		0x008e
#define AQ_REG_PMA_10GBASE_T_RX_SIGNAL_POWER_CHAN_C		0x008f
#define AQ_REG_PMA_10GBASE_T_RX_SIGNAL_POWER_CHAN_D		0x0090
#define AQ_REG_PMA_10GBASE_T_SKEW_DELAY_1			0x0091
#define AQ_REG_PMA_10GBASE_T_SKEW_DELAY_2			0x0092
#define AQ_REG_PMA_10GBASE_T_FAST_RETRAIN_STATUS_CONTROL	0x0093
#define AQ_REG_PMA_TIMESYNC_CAPABILITY				0x1800
#define AQ_REG_PMA_TIMESYNC_PMA_TX_PATH_DATA_DELAY_1		0x1801
#define AQ_REG_PMA_TIMESYNC_PMA_TX_PATH_DATA_DELAY_2		0x1802
#define AQ_REG_PMA_TIMESYNC_PMA_TX_PATH_DATA_DELAY_3		0x1803
#define AQ_REG_PMA_TIMESYNC_PMA_TX_PATH_DATA_DELAY_4		0x1804
#define AQ_REG_PMA_TIMESYNC_RX_PATH_DATA_DELAY_1		0x1805
#define AQ_REG_PMA_TIMESYNC_RX_PATH_DATA_DELAY_2		0x1806
#define AQ_REG_PMA_TIMESYNC_RX_PATH_DATA_DELAY_3		0x1807
#define AQ_REG_PMA_TIMESYNC_RX_PATH_DATA_DELAY_4		0x1808
#define AQ_REG_XENPAK_CONTROL					0x8000
#define AQ_REG_XENPACK_MSA_VERSION_SUPPORTED			0x8007
#define AQ_REG_XENPACK_NVR_SIZE_1				0x8008
#define AQ_REG_XENPACK_NVR_SIZE_2				0x8009
#define AQ_REG_XENPACK_MEMORY_USED_1				0x800a
#define AQ_REG_XENPACK_MEMORY_USED_2				0x800b
#define AQ_REG_XENPACK_BASIC_MEMORY_START_ADDRESS		0x800c
#define AQ_REG_XENPACK_CUSTOMER_MEMORY_OFFSET_ADDRESS		0x800d
#define AQ_REG_XENPACK_VENDOR_MEMORY_START_ADDRESS		0x800e
#define AQ_REG_XENPACK_EXTENDED_VENDOR_MEMORY_OFFSET_1		0x800f
#define AQ_REG_XENPACK_EXTENDED_VENDOR_MEMORY_OFFSET_2		0x8010
#define AQ_REG_XENPACK_BASIC_RESERVED_0X11			0x8011
#define AQ_REG_XENPACK_BASIC_TRANSCEIVER_TYPE			0x8012
#define AQ_REG_XENPACK_BASIC_CONNECTOR_TYPE			0x8013
#define AQ_REG_XENPACK_BASIC_ENCODING				0x8014
#define AQ_REG_XENPACK_BASIC_BIT_RATE_0				0x8015
#define AQ_REG_XENPACK_BASIC_BIT_RATE_1				0x8016
#define AQ_REG_XENPACK_BASIC_PROTOCOL				0x8017
#define AQ_REG_XENPACK_BASIC_STANDARDS_COMPLIANCE_CODES		0x8018
#define AQ_REG_XENPACK_BASIC_RESERVED_0X19_1			0x8019

#define AQ_REG_PMA_TX_VENDOR_ALARMS_1				0xcc00
#define AQ_REG_PMA_TX_VENDOR_ALARMS_2				0xcc01
#define AQ_REG_PMA_TX_VENDOR_ALARMS_3				0xcc02
#define AQ_REG_PMA_TX_STANDARD_INT_MASK_1			0xd000
#define AQ_REG_PMA_TX_STANDARD_INT_MASK_2			0xd001
#define AQ_REG_PMA_TX_VENDOR_DEBUG_1				0xd800
#define AQ_REG_PMA_RESERVED_VENDOR_PROVISIONING_1		0xe400
#define AQ_REG_PMA_RX_VENDOR_STATE_1				0xe800
#define AQ_REG_PMA_RX_RESERVED_VENDOR_STATE_1			0xe810
#define AQ_REG_PMA_RX_RESERVED_VENDOR_STATE_2			0xe811
#define AQ_REG_PMA_VENDOR_GLOBAL_INT_FLAGS			0xfc00

/* PCS registers (dev 3) */
#define AQ_REG_PCS_STANDARD_CONTROL				0x0000
#define AQ_REG_PCS_STANDARD_STATUS				0x0001
#define AQ_REG_PCS_STANDARD_DEVICE_ID_1				0x0002
#define AQ_REG_PCS_STANDARD_DEVICE_ID_2				0x0003
#define AQ_REG_PCS_STANDARD_SPEED_ABILITY			0x0004
#define AQ_REG_PCS_STANDARD_DEVICES_IN_PACKAGE_1		0x0005
#define AQ_REG_PCS_STANDARD_DEVICES_IN_PACKAGE_2		0x0006
#define AQ_REG_PCS_STANDARD_CONTROL_2				0x0007
#define AQ_REG_PCS_STANDARD_STATUS_2				0x0008
#define AQ_REG_PCS_STANDARD_PACKAGE_ID_1			0x000e
#define AQ_REG_PCS_STANDARD_PACKAGE_ID_2			0x000f
#define AQ_REG_PCS_10G_STATUS_1					0x0020
#define AQ_REG_PCS_10G_STATUS_2					0x0021
#define AQ_REG_PCS_SERDES_MUX_SWAP_TX_RX			0xc4f0
#define AQ_REG_PCS_TX_VENDOR_ALARM_1				0xcc00
#define AQ_REG_PCS_TX_VENDOR_ALARM_2				0xcc01
#define AQ_REG_PCS_TX_VENDOR_ALARM_3				0xcc02
#define AQ_REG_PCS_TX_VENDOR_ALARM_4				0xcc03
#define AQ_REG_PCS_STANDARD_INT_MASK_1				0xd000
#define AQ_REG_PCS_STANDARD_INT_MASK_2				0xd001
#define AQ_REG_PCS_STANDARD_INT_MASK_3				0xd002
#define AQ_REG_PCS_TX_VENDOR_INT_MASK_1				0xd400
#define AQ_REG_PCS_TX_VENDOR_INT_MASK_2				0xd401
#define AQ_REG_PCS_TX_VENDOR_INT_MASK_3				0xd402
#define AQ_REG_PCS_TX_VENDOR_INT_MASK_4				0xd403
#define AQ_REG_PCS_TX_VENDOR_DEBUG_1				0xd800
#define AQ_REG_PCS_RX_VENDOR_PROVISIONING_1			0xe400
#define AQ_REG_PCS_RX_VENDOR_FCS_NO_ERROR_FRAME_COUNT_1		0xe812
#define AQ_REG_PCS_RX_VENDOR_FCS_NO_ERROR_FRAME_COUNT_2		0xe813
#define AQ_REG_PCS_USX1_UNIDATA_SM_STATUS_REGISTER		0xe8e4
#define AQ_REG_PCS_RX_VENDOR_ALARMS_1				0xec00
#define AQ_REG_PCS_RX_VENDOR_ALARMS_2				0xec01
#define AQ_REG_PCS_RX_VENDOR_ALARMS_3				0xec02
#define AQ_REG_PCS_RX_VENDOR_ALARMS_4				0xec03
#define AQ_REG_PCS_RX_VENDOR_ALARMS_5				0xec04
#define AQ_REG_PCS_RX_VENDOR_ALARMS_6				0xec05
#define AQ_REG_PCS_RX_VENDOR_ALARMS_7				0xec06
#define AQ_REG_PCS_RX_VENDOR_ALARMS_14				0xec0d
#define AQ_REG_PCS_RX_VENDOR_ALARMS_15				0xec0e
#define AQ_REG_PCS_RX_VENDOR_ALARMS_16				0xec0f
#define AQ_REG_PCS_RX_VENDOR_ALARMS_17				0xec10
#define AQ_REG_PCS_RX_VENDOR_INTERNAL_ALARMS_1			0xed0d
#define AQ_REG_PCS_RX_VENDOR_INTERNAL_ALARMS_2			0xed0e
#define AQ_REG_PCS_RX_VENDOR_INTERNAL_ALARMS_3			0xed0f
#define AQ_REG_PCS_RX_VENDOR_INTERNAL_ALARMS_4			0xed10
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_1				0xf400
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_2				0xf401
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_3				0xf402
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_4				0xf403
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_5				0xf404
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_6				0xf405
#define AQ_REG_PCS_RX_VENDOR_INT_MASK_7				0xf406

#define AQ_REG_PCS_RX_VENDOR_DEBUG_1				0xf800
#define AQ_REG_PCS_VENDOR_GLOBAL_INT_FLAGS			0xfc00
#define AQ_REG_PCS_VENDOR_GLOBAL_INT_FLAGS_3			0xfc02

/* PHY XS registers (dev 4) */
#define AQ_REG_XS_STANDARD_CONTROL				0x0000
#define AQ_REG_XS_STANDARD_STATUS				0x0001
#define AQ_REG_XS_STANDARD_DEVICE_ID_1				0x0002
#define AQ_REG_XS_STANDARD_DEVICE_ID_2				0x0003
#define AQ_REG_XS_STANDARD_SPEED_ABILITY			0x0004
#define AQ_REG_XS_STANDARD_DEVICES_IN_PACKAGE_1			0x0005
#define AQ_REG_XS_STANDARD_DEVICES_IN_PACKAGE_2			0x0006
#define AQ_REG_XS_STANDARD_STATUS_2				0x0008
#define AQ_REG_XS_STANDARD_PACKAGE_ID_1				0x000e
#define AQ_REG_XS_STANDARD_PACKAGE_ID_2				0x000f
#define AQ_REG_XS_EEE_CAPABILITY_REGISTER			0x0014
#define AQ_REG_XS_EEE_WAKE_ERROR_COUNTER			0x0016
#define AQ_REG_XS_STANDARD_XGXS_LANE_STATUS			0x0018
#define AQ_REG_XS_STANDARD_XGXS_TEST_CONTROL			0x0019
#define AQ_REG_XS_TIMESYNC_CAPABILITY				0x1800
#define AQ_REG_XS_TIMESYNC_TX_PATH_DATA_DELAY_1			0x1801
#define AQ_REG_XS_TIMESYNC_TX_PATH_DATA_DELAY_2			0x1802
#define AQ_REG_XS_TIMESYNC_TX_PATH_DATA_DELAY_3			0x1803
#define AQ_REG_XS_TIMESYNC_TX_PATH_DATA_DELAY_4			0x1804
#define AQ_REG_XS_TIMESYNC_RX_PATH_DATA_DELAY_1			0x1805
#define AQ_REG_XS_TIMESYNC_RX_PATH_DATA_DELAY_2			0x1806
#define AQ_REG_XS_TIMESYNC_RX_PATH_DATA_DELAY_3			0x1807
#define AQ_REG_XS_TIMESYNC_RX_PATH_DATA_DELAY_4			0x1808
#define AQ_REG_XS_SERDES_CONFIGURATION_1			0xc180
#define AQ_REG_XS_SERDES_LANE_0_CONFIGURATION_1			0xc1c0
#define AQ_REG_XS_SERDES_LANE_1_CONFIGURATION_1			0xc1d0
#define AQ_REG_XS_SERDES_LANE_2_CONFIGURATION_1			0xc1e0
#define AQ_REG_XS_SERDES_LANE_3_CONFIGURATION_1			0xc1f0
#define AQ_REG_XS_SERDES_LUT_256				0xc200
#define AQ_REG_XS_XAUI_RX_RESERVED_VENDOR_PROVISIONING_1	0xc440
#define AQ_REG_XS_XAUI_RX_OPERATING_MODE			0xc441
#define AQ_REG_XS_XAUI_RX_RESERVED_VENDOR_PROVISIONING_3	0xc442
#define AQ_REG_XS_XAUI_RX_RESERVED_VENDOR_PROVISIONING_4	0xc443
#define AQ_REG_XS_XAUI_RX_RESERVED_VENDOR_PROVISIONING_5	0xc444
#define AQ_REG_XS_XAUI_RX_RESERVED_VENDOR_PROVISIONING_6	0xc445
#define AQ_REG_XS_TX_XAUI_RX_PCS_STATUS_1			0xc802
#define AQ_REG_XS_TX_XAUI_RX_PCS_STATUS_2			0xc803
#define AQ_REG_XS_TX_XAUI_RX_PCS_STATUS_3			0xc804
#define AQ_REG_XS_TX_XAUI_RX_PCS_STATUS_4			0xc805
#define AQ_REG_XS_XAUI_RX_VENDOR_ALARMS_1			0xcc00
#define AQ_REG_XS_XAUI_RX_VENDOR_ALARMS_2			0xcc01
#define AQ_REG_XS_XAUI_RX_VENDOR_ALARMS_3			0xcc02
#define AQ_REG_XS_XAUI_RX_STANDARD_INT_MASK_1			0xd000
#define AQ_REG_XS_XAUI_RX_STANDARD_INT_MASK_2			0xd001
#define AQ_REG_XS_XAUI_RX_VENDOR_INT_MASK_1			0xd400
#define AQ_REG_XS_XAUI_RX_VENDOR_INT_MASK_2			0xd401
#define AQ_REG_XS_XAUI_RX_VENDOR_INT_MASK_3			0xd402
#define AQ_REG_XS_XAUI_RX_VENDOR_DEBUG_1			0xd800
#define AQ_REG_XS_XAUI_RX_VENDOR_DEBUG_2			0xd801
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_1	0xe410
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_2	0xe411
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_3	0xe412
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_4	0xe413
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_5	0xe414
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_6	0xe415
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_7	0xe416
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_8	0xe417
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_9	0xe418
#define AQ_REG_XS_XAUI_TX_RESERVED_VENDOR_PROVISIONING_10	0xe419
#define AQ_REG_XS_XAUI_TX_PCS_STATUS_1				0xe802
#define AQ_REG_XS_XAUI_TX_PCS_STATUS_2				0xe803
#define AQ_REG_XS_XAUI_TX_PCS_STATUS_3				0xe804
#define AQ_REG_XS_XAUI_TX_PCS_STATUS_4				0xe805
#define AQ_REG_XS_SYS_INTF_CONN_STATUS				0xe812
#define AQ_REG_XS_XAUI_TX_VENDOR_ALARMS_1			0xec00
#define AQ_REG_XS_XAUI_TX_VENDOR_ALARMS_2			0xec01
#define AQ_REG_XS_RX_XAUI_TX_VENDOR_INT_MASK_1			0xf400
#define AQ_REG_XS_RX_XAUI_TX_VENDOR_INT_MASK_2			0xf401
#define AQ_REG_XS_XAUI_TX_VENDOR_DEBUG_1			0xf800
#define AQ_REG_XS_XAUI_TX_VENDOR_DEBUG_2			0xf801
#define AQ_REG_XS_XAUI_TX_VENDOR_DEBUG_3			0xf802
#define AQ_REG_XS_VENDOR_GLOBAL_INT_FLAGS			0xfc00

/* Autonegotiation registers (dev 7) */
#define AQ_REG_AUTONEG_STANDARD_CONTROL_1			0x0000
#define AQ_REG_AUTONEG_STANDARD_STATUS_1			0x0001
#define AQ_REG_AUTONEG_STANDARD_DEVICE_ID_1			0x0002
#define AQ_REG_AUTONEG_STANDARD_DEVICE_ID_2			0x0003
#define AQ_REG_AUTONEG_STANDARD_DEVICES_IN_PACKAGE_1		0x0005
#define AQ_REG_AUTONEG_STANDARD_DEVICES_IN_PACKAGE_2		0x0006
#define AQ_REG_AUTONEG_STANDARD_STATUS_2			0x0008
#define AQ_REG_AUTONEG_STANDARD_PACKAGE_ID_1			0x000e
#define AQ_REG_AUTONEG_STANDARD_PACKAGE_ID_2			0x000f
#define AQ_REG_AUTONEG_ADVERTISEMENT_REG			0x0010
#define AQ_REG_AUTONEG_LINK_PARTNER_BASE_PAGE_ABILITY		0x0013
#define AQ_REG_AUTONEG_EXTENDED_NEXT_PAGE_TX			0x0016
#define AQ_REG_AUTONEG_EXTENDED_NEXT_PAGE_UNFORMATTED_CODE_1	0x0017
#define AQ_REG_AUTONEG_EXTENDED_NEXT_PAGE_UNFORMATTED_CODE_2	0x0018
#define AQ_REG_AUTONEG_LINK_PARTNER_EXTENDED_NEXT_PAGE_ABILITY	0x0019
#define AQ_REG_AUTONEG_LINK_PARTNER_EXTENDED_NEXT_PAGE_UNFORMATTED_CODE_1 0x001a
#define AQ_REG_AUTONEG_LINK_PARTNER_EXTENDED_NEXT_PAGE_UNFORMATTED_CODE_2 0x001b
#define AQ_REG_AUTONEG_10GBASE_T_CONTROL			0x0020
#define AQ_REG_AUTONEG_10GBASE_T_STATUS				0x0021
#define AQ_REG_AUTONEG_EEE_ADVERTISEMENT			0x003c
#define AQ_REG_AUTONEG_EEE_LINK_PARTNER_ABILITY			0x003d
#define AQ_REG_KR0_CONTROL					0xc200
#define AQ_REG_KR0_STATUS					0xc201
#define AQ_REG_KR0_ADVERTISEMENT_WORD_1				0xc210
#define AQ_REG_KR0_ADVERTISEMENT_WORD_2				0xc211
#define AQ_REG_KR0_ADVERTISEMENT_WORD_3				0xc212
#define AQ_REG_KR0_LINK_PARTNER_ADVERTISEMENT_WORD_1		0xc213
#define AQ_REG_KR0_LINK_PARTNER_ADVERTISEMENT_WORD_2		0xc214
#define AQ_REG_KR0_LINK_PARTNER_ADVERTISEMENT_WORD_3		0xc215
#define AQ_REG_KR0_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_1	0xc216
#define AQ_REG_KR0_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_2	0xc217
#define AQ_REG_KR0_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_3	0xc218
#define AQ_REG_KR0_LINK_PARTNER_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_1 0xc219
#define AQ_REG_KR0_LINK_PARTNER_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_2 0xc21a
#define AQ_REG_KR0_LINK_PARTNER_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_3 0xc21b
#define AQ_REG_KR1_CONTROL					0xc300
#define AQ_REG_KR1_STATUS					0xc301
#define AQ_REG_KR1_ADVERTISEMENT_WORD_1				0xc310
#define AQ_REG_KR1_ADVERTISEMENT_WORD_2				0xc311
#define AQ_REG_KR1_ADVERTISEMENT_WORD_3				0xc312
#define AQ_REG_KR1_LINK_PARTNER_ADVERTISEMENT_WORD_1		0xc313
#define AQ_REG_KR1_LINK_PARTNER_ADVERTISEMENT_WORD_2		0xc314
#define AQ_REG_KR1_LINK_PARTNER_ADVERTISEMENT_WORD_3		0xc315
#define AQ_REG_KR1_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_1	0xc316
#define AQ_REG_KR1_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_2	0xc317
#define AQ_REG_KR1_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_3	0xc318
#define AQ_REG_KR1_LINK_PARTNER_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_1 0xc319
#define AQ_REG_KR1_LINK_PARTNER_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_2 0xc31a
#define AQ_REG_KR1_LINK_PARTNER_AUTONEG_EXTENDED_NEXT_PAGE_ADVERT_WORD_3 0xc31b
#define AQ_REG_AUTONEG_VENDOR_PROVISIONING			0xc400
#define AQ_REG_AUTONEG_RESERVED_VENDOR_PRIVISIONING_1		0xc410
#define AQ_REG_AUTONEG_VENDOR_STATUS_1				0xc800
#define AQ_REG_AUTONEG_RESERVED_VENDOR_STATUS_1			0xc810
#define AQ_REG_AUTONEG_RESERVED_VENDOR_STATUS_2			0xc811
#define AQ_REG_AUTONEG_RESERVED_VENDOR_STATUS_3			0xc812
#define AQ_REG_AUTONEG_RESERVED_VENDOR_STATUS_4			0xc813
#define AQ_REG_AUTONEG_RESERVED_VENDOR_STATUS_5			0xc814
#define AQ_REG_AUTONEG_TX_VENDOR_ALARMS_1			0xcc00
#define AQ_REG_AUTONEG_TX_VENDOR_ALARMS_2			0xcc01
#define AQ_REG_AUTONEG_STANDARD_INT_MASK_1			0xd000
#define AQ_REG_AUTONEG_STANDARD_INT_MASK_2			0xd001
#define AQ_REG_AUTONEG_TX_VENDOR_INT_MASK_1			0xd400
#define AQ_REG_AUTONEG_TX_VENDOR_INT_MASK_2			0xd401
#define AQ_REG_AUTONEG_TX_VENDOR_INT_MASK_3			0xd402
#define AQ_REG_AUTONEG_RX_LINK_PARTNER_STATUS_1			0xe820
#define AQ_REG_AUTONEG_RX_LINK_PARTNER_STATUS_2			0xe821
#define AQ_REG_AUTONEG_RX_LINK_PARTNER_STATUS_3			0xe822
#define AQ_REG_AUTONEG_RX_LINK_PARTNER_STATUS_4			0xe823
#define AQ_REG_AUTONEG_RX_RESERVED_VENDOR_STATUS_1		0xe830
#define AQ_REG_AUTONEG_RX_RESERVED_VENDOR_STATUS_2		0xe831
#define AQ_REG_AUTONEG_RX_RESERVED_VENDOR_STATUS_3		0xe832
#define AQ_REG_AUTONEG_RX_VENDOR_ALARMS_1			0xec00
#define AQ_REG_AUTONEG_RX_VENDOR_ALARMS_2			0xec01
#define AQ_REG_AUTONEG_RX_VENDOR_ALARMS_3			0xec02
#define AQ_REG_AUTONEG_RX_VENDOR_ALARMS_4			0xec03
#define AQ_REG_AUTONEG_RX_VENDOR_INT_MASK_1			0xf400
#define AQ_REG_AUTONEG_RX_VENDOR_INT_MASK_2			0xf401
#define AQ_REG_AUTONEG_RX_VENDOR_INT_MASK_3			0xf402
#define AQ_REG_AUTONEG_RX_VENDOR_INT_MASK_4			0xf403
#define AQ_REG_AUTONEG_VENDOR_GLOBAL_INT_FLAGS			0xfc00

/* 100Base-TX and 1000Base-T registers (dev 29 (0x1d)) */
#define AQ_REG_GBE_STANDARD_DEVICE_ID_1				0x0002
#define AQ_REG_GBE_STANDARD_DEVICE_ID_2				0x0003
#define AQ_REG_GBE_STANDARD_DEVICES_IN_PACKAGE_1		0x0005
#define AQ_REG_GBE_STANDARD_VENDOR_DEVICES_IN_PACKAGE_2		0x0006
#define AQ_REG_GBE_STANDARD_STATUS_2				0x0008
#define AQ_REG_GBE_STANDARD_PACKAGE_ID_1			0x000e
#define AQ_REG_GBE_STANDARD_PACKAGE_ID_2			0x000f
#define AQ_REG_GBE_SGMII_TEST_CONTROL				0xc282
#define AQ_REG_GBE_PHY_WOL_CONTROL_1				0xc300
#define AQ_REG_GBE_PHY_WOL_CONTROL_2				0xc301
#define AQ_REG_GBE_PHY_WOL_CONTROL_3				0xc302
#define AQ_REG_GBE_PHY_WOL_CONTROL_4				0xc303
#define AQ_REG_GBE_PHY_WOL_CONTROL_5				0xc304
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_DETECT_ENABLE		0xc305
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_15_0		0xc306
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_31_16		0xc307
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_47_32		0xc308
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_63_48		0xc309
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_79_64		0xc30a
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_95_80		0xc30b
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_111_96		0xc30c
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_0_127_112		0xc30d
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_0_15_0		0xc30e
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_0_31_16		0xc30f
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_15_0		0xc310
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_31_16		0xc311
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_47_32		0xc312
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_63_48		0xc313
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_79_64		0xc314
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_95_80		0xc315
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_111_96		0xc316
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_1_127_112		0xc317
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_1_15_0		0xc318				0xc318
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_1_31_16		0xc319
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_15_0		0xc31a
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_31_16		0xc31b
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_47_32		0xc31c
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_63_48		0xc31d
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_79_64		0xc31e
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_95_80		0xc31f
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_111_96		0xc320
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_2_127_112		0xc321
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_2_15_0		0xc322
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_2_31_16		0xc323
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_15_0		0xc324
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_31_16		0xc325
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_47_32		0xc326
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_63_48		0xc327
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_79_64		0xc328
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_95_80		0xc329
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_111_96		0xc32a
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_3_127_112		0xc32b
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_3_15_0		0xc32c
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_3_31_16		0xc32d
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_15_0		0xc32e
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_31_16		0xc32f
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_47_32		0xc330
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_63_48		0xc331
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_79_64		0xc332
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_95_80		0xc333
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_111_96		0xc334
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_MASK_4_127_112		0xc335
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_4_15_0		0xc336
#define AQ_REG_GBE_PHY_WOL_CONTROL_FRAME_CRC_4_31_16		0xc337
#define AQ_REG_GBE_PHY_WOL_MAGIC_FRAME_DETECT_ENABLE		0xc338
#define AQ_REG_GBE_PHY_WOL_MAGIC_PACKET_15_0			0xc339
#define AQ_REG_GBE_PHY_WOL_MAGIC_PACKET_31_16			0xc33a
#define AQ_REG_GBE_PHY_WOL_MAGIC_PACKET_47_32			0xc33b
#define AQ_REG_GBE_PHY_RESERVED_PROVISIONING_1			0xc500
#define AQ_REG_GBE_PHY_RESERVED_PROVISIONING_2			0xc501
#define AQ_REG_GBE_SGMII1_RX_STATUS_1				0xd280
#define AQ_REG_GBE_SGMII1_RX_STATUS_2				0xd281
#define AQ_REG_GBE_SGMII1_RX_STATUS_3				0xd282
#define AQ_REG_GBE_SGMII1_RX_STATUS_4				0xd283
#define AQ_REG_GBE_SGMII1_RX_STATUS_5				0xd284
#define AQ_REG_GBE_SGMII1_RX_STATUS_6				0xd285
#define AQ_REG_GBE_SGMII1_RX_STATUS_7				0xd286
#define AQ_REG_GBE_SGMII1_RX_STATUS_8				0xd287
#define AQ_REG_GBE_SGMII1_RX_STATUS_9				0xd288
#define AQ_REG_GBE_SGMII0_RX_STATUS_1				0xd290
#define AQ_REG_GBE_SGMII0_RX_STATUS_2				0xd291
#define AQ_REG_GBE_SGMII0_RX_STATUS_3				0xd292
#define AQ_REG_GBE_SGMII0_RX_STATUS_4				0xd293
#define AQ_REG_GBE_SGMII0_RX_STATUS_5				0xd294
#define AQ_REG_GBE_SGMII0_RX_STATUS_6				0xd295
#define AQ_REG_GBE_SGMII0_RX_STATUS_7				0xd296
#define AQ_REG_GBE_SGMII0_RX_STATUS_8				0xd297
#define AQ_REG_GBE_SGMII0_RX_STATUS_9				0xd298
#define AQ_REG_GBE_SGMII1_WOL_STATUS				0xd302
#define AQ_REG_GBE_SGMII1_TX_STATUS_1				0xd303
#define AQ_REG_GBE_SGMII1_TX_STATUS_2				0xd304
#define AQ_REG_GBE_SGMII1_TX_STATUS_3				0xd305
#define AQ_REG_GBE_SGMII1_TX_STATUS_4				0xd306
#define AQ_REG_GBE_SGMII1_TX_STATUS_5				0xd307
#define AQ_REG_GBE_SGMII1_TX_STATUS_6				0xd308
#define AQ_REG_GBE_SGMII1_TX_STATUS_7				0xd309
#define AQ_REG_GBE_SGMII1_TX_STATUS_8				0xd30a
#define AQ_REG_GBE_SGMII1_TX_STATUS_9				0xd30b
#define AQ_REG_GBE_SGMII1_TX_STATUS_10				0xd30c
#define AQ_REG_GBE_SGMII0_WOL_STATUS				0xd312
#define AQ_REG_GBE_SGMII0_TX_STATUS_1				0xd313
#define AQ_REG_GBE_SGMII0_TX_STATUS_2				0xd314
#define AQ_REG_GBE_SGMII0_TX_STATUS_3				0xd315
#define AQ_REG_GBE_SGMII0_TX_STATUS_4				0xd316
#define AQ_REG_GBE_SGMII0_TX_STATUS_5				0xd317
#define AQ_REG_GBE_SGMII0_TX_STATUS_6				0xd318
#define AQ_REG_GBE_SGMII0_TX_STATUS_7				0xd319
#define AQ_REG_GBE_SGMII0_TX_STATUS_8				0xd31a
#define AQ_REG_GBE_SGMII0_TX_STATUS_9				0xd31b
#define AQ_REG_GBE_SGMII0_TX_STATUS_10				0xd31c
#define AQ_REG_GBE_PHY_SGMII_RX_ALARMS				0xec10
#define AQ_REG_GBE_PHY_SGMII_TX_ALARMS				0xec20
#define AQ_REG_GBE_PHY_SGMII_RX_INTERRUPT_MASK			0xf410
#define AQ_REG_GBE_PHY_SGMII_TX_INTERRUPT_MASK			0xf420
#define AQ_REG_GBE_VENDOR_GLOBAL_INT_FLAGS			0xfc00

/* Global Registers (dev 30) */
#define AQ_REG_GBL_STANDARD_CONTROL_1				0x0000
#define AQ_REG_GBL_FIRMWARE_ID					0x0020
#define AQ_REG_GBL_CHIP_ID					0x0021
#define AQ_REG_GBL_CHIP_REV					0x0022
#define AQ_REG_GBL_FIRMWARE_IMAGE_ID_1				0x0028
#define AQ_REG_GBL_FIRMWARE_IMAGE_ID_2				0x0029
#define AQ_REG_GBL_NVR_INTERFACE_1				0x0100
#define AQ_REG_GBL_NVR_INTERFACE_2				0x0101
#define AQ_REG_GBL_NVR_INTERFACE_3				0x0102
#define AQ_REG_GBL_NVR_INTERFACE_4				0x0103
#define AQ_REG_GBL_NVR_INTERFACE_5				0x0104
#define AQ_REG_GBL_NVR_INTERFACE_6				0x0105
#define AQ_REG_GBL_MAILBOX_INTERFACE_1				0x0200
#define AQ_REG_GBL_MAILBOX_INTERFACE_2				0x0201
#define AQ_REG_GBL_MAILBOX_INTERFACE_3				0x0202
#define AQ_REG_GBL_MAILBOX_INTERFACE_4				0x0203
#define AQ_REG_GBL_MAILBOX_INTERFACE_5				0x0204
#define AQ_REG_GBL_MAILBOX_INTERFACE_6				0x0205
#define AQ_REG_GBL_MAILBOX_INTERFACE_7				0x0206
#define AQ_REG_GBL_MAILBOX_INTERFACE_8				0x0207
#define AQ_REG_GBL_MICROPROCESSOR_SCRATCH_PAD_1			0x0300
#define AQ_REG_GBL_MICROPROCESSOR_SCRATCH_PAD_2			0x0301
#define AQ_REG_GBL_CONTROL_1					0xc000
#define AQ_REG_GBL_CONTROL_2					0xc001
#define AQ_REG_GBL_RESET_CONTROL				0xc006
#define AQ_REG_GBL_THERM_HI_TEMP_FAILURE_THRESHOLD		0xc421
#define AQ_REG_GBL_THERM_LOW_TEMP_FAILURE_THRESHOLD		0xc422
#define AQ_REG_GBL_THERM_HI_TEMP_WARNING_THRESHOLD		0xc423
#define AQ_REG_GBL_THERM_LOW_TEMP_WARNING_THRESHOLD		0xc424
#define AQ_REG_GBL_LED_PROVISIONING_1				0xc430
#define AQ_REG_GBL_LED_PROVISIONING_2				0xc431
#define AQ_REG_GBL_LED_PROVISIONING_3				0xc432
#define AQ_REG_GBL_LED_PROVISIONING_4				0xc433
#define AQ_REG_GBL_LED_PROVISIONING_5				0xc434
#define AQ_REG_GBL_LED_PROVISIONING_6				0xc435
#define AQ_REG_GBL_LED_PROVISIONING_7				0xc436
#define AQ_REG_GBL_LED_PROVISIONING_8				0xc437
#define AQ_REG_GBL_LED_PROVISIONING_15				0xc43e
#define AQ_REG_GBL_GENERAL_PROVISIONING_1			0xc440
#define AQ_REG_GBL_GENERAL_PROVISIONING_2			0xc441
#define AQ_REG_GBL_GENERAL_PROVISIONING_3			0xc442
#define AQ_REG_GBL_GENERAL_PROVISIONING_4			0xc443
#define AQ_REG_GBL_GENERAL_PROVISIONING_5			0xc444
#define AQ_REG_GBL_GENERAL_PROVISIONING_6			0xc445
#define AQ_REG_GBL_GENERAL_PROVISIONING_7			0xc446
#define AQ_REG_GBL_GENERAL_PROVISIONING_8			0xc447
#define AQ_REG_GBL_GENERAL_PROVISIONING_9			0xc448
#define AQ_REG_GBL_GENERAL_PROVISIONING_10			0xc449
#define AQ_REG_GBL_NVR_PROVISIONING_1				0xc450
#define AQ_REG_GBL_NVR_PROVISIONING_2				0xc451
#define AQ_REG_GBL_NVR_PROVISIONING_3				0xc452
#define AQ_REG_GBL_NVR_PROVISIONING_4				0xc453
#define AQ_REG_GBL_RESERVED_PROVISIONING_1			0xc470
#define AQ_REG_GBL_RESERVED_PROVISIONING_2			0xc471
#define AQ_REG_GBL_RESERVED_PROVISIONING_3			0xc472
#define AQ_REG_GBL_RESERVED_PROVISIONING_4			0xc473
#define AQ_REG_GBL_RESERVED_PROVISIONING_5			0xc474
#define AQ_REG_GBL_RESERVED_PROVISIONING_6			0xc475
#define AQ_REG_GBL_RESERVED_PROVISIONING_9			0xc478
/** 16-bit mailbox address */
#define AQ_REG_GBL_PIF_MAILBOX_ADDRESS				0xc47c
/** 16-bit mailbox data */
#define AQ_REG_GBL_PIF_MAILBOX_DATA				0xc47d
/**
 * 15:8		Mailbox MMD - upper 8-bits of the PID address to read/write
 * 7:4		command type where:
 *		0: No Action
 *		1: Read
 *		2: Write
 * 3:0	Reserved
 */
#define AQ_REG_GBL_PIF_MAILBOX_ADDR_CMD				0xc47e
/**
 * 15:12	Command Status where:
 *		0: Idle
 *		1: Command completed
 *		2: Command did not complete
 * 11:0		Reserved
 */
#define AQ_REG_GBL_PIF_MAILBOX_CMD_STATUS			0xc47f
#define AQ_REG_GBL_SMBUS_0_PROVISIONING_6			0xc485
#define AQ_REG_GBL_SMBUS_1_PROVISIONING_6			0xc495
#define AQ_REG_GBL_EEE_PROVISIONING_1				0xc4a0
#define AQ_REG_GBL_CABLE_DIAG_STATUS_1				0xc800
#define AQ_REG_GBL_CABLE_DIAG_STATUS_2				0xc801
#define AQ_REG_GBL_CABLE_DIAG_STATUS_3				0xc802
#define AQ_REG_GBL_CABLE_DIAG_STATUS_4				0xc803
#define AQ_REG_GBL_CABLE_DIAG_STATUS_5				0xc804
#define AQ_REG_GBL_CABLE_DIAG_STATUS_6				0xc805
#define AQ_REG_GBL_CABLE_DIAG_STATUS_7				0xc806
#define AQ_REG_GBL_CABLE_DIAG_STATUS_8				0xc807
#define AQ_REG_GBL_THERMAL_STATUS_1				0xc820
#define AQ_REG_GBL_THERMAL_STATUS_2				0xc821
#define AQ_REG_GBL_GENERAL_STATUS_1				0xc830
#define AQ_REG_GBL_GENERAL_STATUS_2				0xc831
#define AQ_REG_GBL_PIN_STATUS					0xc840
#define AQ_REG_GBL_DAISY_CHAIN_STATUS_2				0xc842
#define AQ_REG_GBL_FAULT_MESSAGE				0xc850
#define AQ_REG_GBL_CABLE_DIAG_IMPEDANCE_1			0xc880
#define AQ_REG_GBL_CABLE_DIAG_IMPEDANCE_2			0xc881
#define AQ_REG_GBL_CABLE_DIAG_IMPEDANCE_3			0xc882
#define AQ_REG_GBL_CABLE_DIAG_IMPEDANCE_4			0xc883
#define AQ_REG_GBL_STATUS					0xc884
#define AQ_REG_GBL_RESERVED_STATUS_1				0xc885
#define AQ_REG_GBL_RESERVED_STATUS_2				0xc886
#define AQ_REG_GBL_RESERVED_STATUS_3				0xc887
#define AQ_REG_GBL_ALARM_1					0xcc00
#define AQ_REG_GBL_ALARM_2					0xcc01
#define AQ_REG_GBL_ALARM_3					0xcc02
#define AQ_REG_GBL_INT_MASK_1					0xd400
#define AQ_REG_GBL_INT_MASK_2					0xd401
#define AQ_REG_GBL_INT_MASK_3					0xd402
#define AQ_REG_GBL_CHIPWIDE_STANDARD_INT_FLAGS			0xfc00
#define AQ_REG_GBL_CHIPWIDE_VENDOR_INT_FLAGS			0xfc01
#define AQ_REG_GBL_CHIPWIDE_STANDARD_INT_MASK			0xff00
#define AQ_REG_GBL_CHIPWIDE_VENDOR_INT_MASK			0xff01

#endif /* __AQUANTIA_REGS_H__ */
