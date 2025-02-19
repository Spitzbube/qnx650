/*
 * $QNXLicenseC: 
 * Copyright 2011, QNX Software Systems.  
 *  
 * Licensed under the Apache License, Version 2.0 (the "License"). You  
 * may not reproduce, modify or distribute this software except in  
 * compliance with the License. You may obtain a copy of the License  
 * at: http://www.apache.org/licenses/LICENSE-2.0  
 *  
 * Unless required by applicable law or agreed to in writing, software  
 * distributed under the License is distributed on an "AS IS" basis,  
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied. 
 * 
 * This file may contain contributions from others, either as  
 * contributors under the License or as licensors under other terms.   
 * Please review this entire file for other proprietary rights or license  
 * notices, as well as the QNX Development Suite License Guide at  
 * http://licensing.qnx.com/license-guide/ for other information. 
 * $
 */


#ifndef	__ARM_MX6X_IOMUX_H_INCLUDED
#define	__ARM_MX6X_IOMUX_H_INCLUDED

/*
 * offsets of IOMUXC registers from MX6DQ_IOMUX_SWMUX
 * where MX6DQ_IOMUX_SWMUX = MX6DQ_IOMUXC_BASE + 0x004C
 */

#define SWMUX_SD2_DAT1			0
#define SWMUX_SD2_DAT2			1
#define SWMUX_SD2_DAT0			2
#define SWMUX_RGMII_TXC			3
#define SWMUX_RGMII_TD0			4
#define SWMUX_RGMII_TD1			5
#define SWMUX_RGMII_TD2			6
#define SWMUX_RGMII_TD3			7
#define SWMUX_RGMII_RX_CTL		8
#define SWMUX_RGMII_RD0			9
#define SWMUX_RGMII_TX_CTL		10
#define SWMUX_RGMII_RD1			11
#define SWMUX_RGMII_RD2			12
#define SWMUX_RGMII_RD3			13
#define SWMUX_RGMII_RXC			14
#define SWMUX_EIM_A25			15
#define SWMUX_EIM_EB2			16
#define SWMUX_EIM_D16			17
#define SWMUX_EIM_D17			18
#define SWMUX_EIM_D18			19
#define SWMUX_EIM_D19			20
#define SWMUX_EIM_D20			21
#define SWMUX_EIM_D21			22
#define SWMUX_EIM_D22			23
#define SWMUX_EIM_D23			24
#define SWMUX_EIM_EB3			25
#define SWMUX_EIM_D24			26
#define SWMUX_EIM_D25			27
#define SWMUX_EIM_D26			28
#define SWMUX_EIM_D27			29
#define SWMUX_EIM_D28			30
#define SWMUX_EIM_D29			31
#define SWMUX_EIM_D30			32
#define SWMUX_EIM_D31			33
#define SWMUX_EIM_A24			34
#define SWMUX_EIM_A23			35
#define SWMUX_EIM_A22			36
#define SWMUX_EIM_A21			37
#define SWMUX_EIM_A20			38
#define SWMUX_EIM_A19			39
#define SWMUX_EIM_A18			40
#define SWMUX_EIM_A17			41
#define SWMUX_EIM_A16			42
#define SWMUX_EIM_CS0			43
#define SWMUX_EIM_CS1			44
#define SWMUX_EIM_OE			45
#define SWMUX_EIM_RW			46
#define SWMUX_EIM_LBA			47
#define SWMUX_EIM_EB0			48
#define SWMUX_EIM_EB1			49
#define SWMUX_EIM_DA0			50
#define SWMUX_EIM_DA1			51
#define SWMUX_EIM_DA2			52
#define SWMUX_EIM_DA3			53
#define SWMUX_EIM_DA4			54
#define SWMUX_EIM_DA5			55
#define SWMUX_EIM_DA6			56
#define SWMUX_EIM_DA7			57
#define SWMUX_EIM_DA8			58
#define SWMUX_EIM_DA9			59
#define SWMUX_EIM_DA10			60
#define SWMUX_EIM_DA11			61
#define SWMUX_EIM_DA12			62
#define SWMUX_EIM_DA13			63
#define SWMUX_EIM_DA14			64
#define SWMUX_EIM_DA15			65
#define SWMUX_EIM_WAIT			66
#define SWMUX_EIM_BCLK			67
#define SWMUX_DI0_DISP_CLK		68
#define SWMUX_DI0_PIN15			69
#define SWMUX_DI0_PIN2			70
#define SWMUX_DI0_PIN3			71
#define SWMUX_DI0_PIN4			72
#define SWMUX_DISP0_DAT0		73
#define SWMUX_DISP0_DAT1		74
#define SWMUX_DISP0_DAT2		75
#define SWMUX_DISP0_DAT3		76
#define SWMUX_DISP0_DAT4		77
#define SWMUX_DISP0_DAT5		78
#define SWMUX_DISP0_DAT6		79
#define SWMUX_DISP0_DAT7		80
#define SWMUX_DISP0_DAT8		81
#define SWMUX_DISP0_DAT9		82
#define SWMUX_DISP0_DAT10		83
#define SWMUX_DISP0_DAT11		84
#define SWMUX_DISP0_DAT12		85
#define SWMUX_DISP0_DAT13		86
#define SWMUX_DISP0_DAT14		87
#define SWMUX_DISP0_DAT15		88
#define SWMUX_DISP0_DAT16		89
#define SWMUX_DISP0_DAT17		90
#define SWMUX_DISP0_DAT18		91
#define SWMUX_DISP0_DAT19		92
#define SWMUX_DISP0_DAT20		93
#define SWMUX_DISP0_DAT21		94
#define SWMUX_DISP0_DAT22		95
#define SWMUX_DISP0_DAT23		96
#define SWMUX_ENET_MDIO			97
#define SWMUX_ENET_REF_CLK		98
#define SWMUX_ENET_RX_ER		99
#define SWMUX_ENET_CRS_DV		100
#define SWMUX_ENET_RXD1			101
#define SWMUX_ENET_RXD0			102
#define SWMUX_ENET_TX_EN		103
#define SWMUX_ENET_TXD1			104
#define SWMUX_ENET_TXD0			105
#define SWMUX_ENET_MDC			106
#define SWMUX_KEY_COL0			107
#define SWMUX_KEY_ROW0			108
#define SWMUX_KEY_COL1			109
#define SWMUX_KEY_ROW1			110
#define SWMUX_KEY_COL2			111
#define SWMUX_KEY_ROW2			112
#define SWMUX_KEY_COL3			113
#define SWMUX_KEY_ROW3			114
#define SWMUX_KEY_COL4			115
#define SWMUX_KEY_ROW4			116
#define SWMUX_GPIO_0			117
#define SWMUX_GPIO_1			118
#define SWMUX_GPIO_9			119
#define SWMUX_GPIO_3			120
#define SWMUX_GPIO_6			121
#define SWMUX_GPIO_2			122
#define SWMUX_GPIO_4			123
#define SWMUX_GPIO_5			124
#define SWMUX_GPIO_7			125
#define SWMUX_GPIO_8			126
#define SWMUX_GPIO_16			127
#define SWMUX_GPIO_17			128
#define SWMUX_GPIO_18			129
#define SWMUX_GPIO_19			130
#define SWMUX_CSI0_PIXCLK		131
#define SWMUX_CSI0_MCLK			132
#define SWMUX_CSI0_DATA_EN		133
#define SWMUX_CSI0_VSYNC		134
#define SWMUX_CSI0_DAT4			135
#define SWMUX_CSI0_DAT5			136
#define SWMUX_CSI0_DAT6			137
#define SWMUX_CSI0_DAT7			138
#define SWMUX_CSI0_DAT8			139
#define SWMUX_CSI0_DAT9			140
#define SWMUX_CSI0_DAT10		141
#define SWMUX_CSI0_DAT11		142
#define SWMUX_CSI0_DAT12		143
#define SWMUX_CSI0_DAT13		144
#define SWMUX_CSI0_DAT14		145
#define SWMUX_CSI0_DAT15		146
#define SWMUX_CSI0_DAT16		147
#define SWMUX_CSI0_DAT17		148
#define SWMUX_CSI0_DAT18		149
#define SWMUX_CSI0_DAT19		150
#define SWMUX_SD3_DAT7			151
#define SWMUX_SD3_DAT6			152
#define SWMUX_SD3_DAT5			153
#define SWMUX_SD3_DAT4			154
#define SWMUX_SD3_CMD			155
#define SWMUX_SD3_CLK			156
#define SWMUX_SD3_DAT0			157
#define SWMUX_SD3_DAT1			158
#define SWMUX_SD3_DAT2			159
#define SWMUX_SD3_DAT3			160
#define SWMUX_SD3_RST			161
#define SWMUX_NANDF_CLE			162
#define SWMUX_NANDF_ALE			163
#define SWMUX_NANDF_WP_B		164
#define SWMUX_NANDF_RB0			165
#define SWMUX_NANDF_CS0			166
#define SWMUX_NANDF_CS1			167
#define SWMUX_NANDF_CS2			168
#define SWMUX_NANDF_CS3			169
#define SWMUX_SD4_CMD			170
#define SWMUX_SD4_CLK			171
#define SWMUX_NANDF_D0			172
#define SWMUX_NANDF_D1			173
#define SWMUX_NANDF_D2			174
#define SWMUX_NANDF_D3			175
#define SWMUX_NANDF_D4			176
#define SWMUX_NANDF_D5			177
#define SWMUX_NANDF_D6			178
#define SWMUX_NANDF_D7			179
#define SWMUX_SD4_DAT0			180
#define SWMUX_SD4_DAT1			181
#define SWMUX_SD4_DAT2			182
#define SWMUX_SD4_DAT3			183
#define SWMUX_SD4_DAT4			184
#define SWMUX_SD4_DAT5			185
#define SWMUX_SD4_DAT6			186
#define SWMUX_SD4_DAT7			187
#define SWMUX_SD1_DAT1			188
#define SWMUX_SD1_DAT0			189
#define SWMUX_SD1_DAT3			190
#define SWMUX_SD1_CMD			191
#define SWMUX_SD1_DAT2			192
#define SWMUX_SD1_CLK			193
#define SWMUX_SD2_CLK			194
#define SWMUX_SD2_CMD			195
#define SWMUX_SD2_DAT3			196


/*
 * offsets of IOMUXC registers from MX6DQ_IOMUX_SWPAD
 * where MX6DQ_IOMUX_SWPAD = MX6DQ_IOMUXC_BASE + 0x0360
 */

#define SWPAD_SD2_DAT1			0
#define SWPAD_SD2_DAT2			1
#define SWPAD_SD2_DAT0			2
#define SWPAD_RGMII_TXC			3
#define SWPAD_RGMII_TD0			4
#define SWPAD_RGMII_TD1			5
#define SWPAD_RGMII_TD2			6
#define SWPAD_RGMII_TD3			7
#define SWPAD_RGMII_RX_CTL		8
#define SWPAD_RGMII_RD0			9
#define SWPAD_RGMII_TX_CTL		10
#define SWPAD_RGMII_RD1			11
#define SWPAD_RGMII_RD2			12
#define SWPAD_RGMII_RD3			13
#define SWPAD_RGMII_RXC			14
#define SWPAD_EIM_A25			15
#define SWPAD_EIM_EB2			16
#define SWPAD_EIM_D16			17
#define SWPAD_EIM_D17			18
#define SWPAD_EIM_D18			19
#define SWPAD_EIM_D19			20
#define SWPAD_EIM_D20			21
#define SWPAD_EIM_D21			22
#define SWPAD_EIM_D22			23
#define SWPAD_EIM_D23			24
#define SWPAD_EIM_EB3			25
#define SWPAD_EIM_D24			26
#define SWPAD_EIM_D25			27
#define SWPAD_EIM_D26			28
#define SWPAD_EIM_D27			29
#define SWPAD_EIM_D28			30
#define SWPAD_EIM_D29			31
#define SWPAD_EIM_D30			32
#define SWPAD_EIM_D31			33
#define SWPAD_EIM_A24			34
#define SWPAD_EIM_A23			35
#define SWPAD_EIM_A22			36
#define SWPAD_EIM_A21			37
#define SWPAD_EIM_A20			38
#define SWPAD_EIM_A19			39
#define SWPAD_EIM_A18			40
#define SWPAD_EIM_A17			41
#define SWPAD_EIM_A16			42
#define SWPAD_EIM_CS0			43
#define SWPAD_EIM_CS1			44
#define SWPAD_EIM_OE			45
#define SWPAD_EIM_RW			46
#define SWPAD_EIM_LBA			47
#define SWPAD_EIM_EB0			48
#define SWPAD_EIM_EB1			49
#define SWPAD_EIM_DA0			50
#define SWPAD_EIM_DA1			51
#define SWPAD_EIM_DA2			52
#define SWPAD_EIM_DA3			53
#define SWPAD_EIM_DA4			54
#define SWPAD_EIM_DA5			55
#define SWPAD_EIM_DA6			56
#define SWPAD_EIM_DA7			57
#define SWPAD_EIM_DA8			58
#define SWPAD_EIM_DA9			59
#define SWPAD_EIM_DA10			60
#define SWPAD_EIM_DA11			61
#define SWPAD_EIM_DA12			62
#define SWPAD_EIM_DA13			63
#define SWPAD_EIM_DA14			64
#define SWPAD_EIM_DA15			65
#define SWPAD_EIM_WAIT			66
#define SWPAD_EIM_BCLK			67
#define SWPAD_DI0_DISP_CLK		68
#define SWPAD_DI0_PIN15			69
#define SWPAD_DI0_PIN2			70
#define SWPAD_DI0_PIN3			71
#define SWPAD_DI0_PIN4			72
#define SWPAD_DISP0_DAT0		73
#define SWPAD_DISP0_DAT1		74
#define SWPAD_DISP0_DAT2		75
#define SWPAD_DISP0_DAT3		76
#define SWPAD_DISP0_DAT4		77
#define SWPAD_DISP0_DAT5		78
#define SWPAD_DISP0_DAT6		79
#define SWPAD_DISP0_DAT7		80
#define SWPAD_DISP0_DAT8		81
#define SWPAD_DISP0_DAT9		82
#define SWPAD_DISP0_DAT10		83
#define SWPAD_DISP0_DAT11		84
#define SWPAD_DISP0_DAT12		85
#define SWPAD_DISP0_DAT13		86
#define SWPAD_DISP0_DAT14		87
#define SWPAD_DISP0_DAT15		88
#define SWPAD_DISP0_DAT16		89
#define SWPAD_DISP0_DAT17		90
#define SWPAD_DISP0_DAT18		91
#define SWPAD_DISP0_DAT19		92
#define SWPAD_DISP0_DAT20		93
#define SWPAD_DISP0_DAT21		94
#define SWPAD_DISP0_DAT22		95
#define SWPAD_DISP0_DAT23		96
#define SWPAD_ENET_MDIO			97
#define SWPAD_ENET_REF_CLK		98
#define SWPAD_ENET_RX_ER		99
#define SWPAD_ENET_CRS_DV		100
#define SWPAD_ENET_RXD1			101
#define SWPAD_ENET_RXD0			102
#define SWPAD_ENET_TX_EN		103
#define SWPAD_ENET_TXD1			104
#define SWPAD_ENET_TXD0			105
#define SWPAD_ENET_MDC			106
#define SWPAD_DRAM_SDQS5		107
#define SWPAD_DRAM_DQM5			108
#define SWPAD_DRAM_DQM4			109
#define SWPAD_DRAM_SDQS4		110
#define SWPAD_DRAM_SDQS3		111
#define SWPAD_DRAM_DQM3			112
#define SWPAD_DRAM_SDQS2		113
#define SWPAD_DRAM_DQM2			114
#define SWPAD_DRAM_A0			115
#define SWPAD_DRAM_A1			116
#define SWPAD_DRAM_A2			117
#define SWPAD_DRAM_A3			118
#define SWPAD_DRAM_A4			119
#define SWPAD_DRAM_A5			120
#define SWPAD_DRAM_A6			121
#define SWPAD_DRAM_A7			122
#define SWPAD_DRAM_A8			123
#define SWPAD_DRAM_A9			124
#define SWPAD_DRAM_A10			125
#define SWPAD_DRAM_A11			126
#define SWPAD_DRAM_A12			127
#define SWPAD_DRAM_A13			128
#define SWPAD_DRAM_A14			129
#define SWPAD_DRAM_A15			130
#define SWPAD_DRAM_CAS			131
#define SWPAD_DRAM_CS0			132
#define SWPAD_DRAM_CS1			133
#define SWPAD_DRAM_RAS			134
#define SWPAD_DRAM_RESET		135
#define SWPAD_DRAM_SDBA0		136
#define SWPAD_DRAM_SDBA1		137
#define SWPAD_DRAM_SDCLK_0		138
#define SWPAD_DRAM_SDBA2		139
#define SWPAD_DRAM_SDCKE0		140
#define SWPAD_DRAM_SDCLK_1		141
#define SWPAD_DRAM_SDCKE1		142
#define SWPAD_DRAM_SDODT0		143
#define SWPAD_DRAM_SDODT1		144
#define SWPAD_DRAM_SDWE			145
#define SWPAD_DRAM_SDQS0		146
#define SWPAD_DRAM_DQM0			147
#define SWPAD_DRAM_SDQS1		148
#define SWPAD_DRAM_DQM1			149
#define SWPAD_DRAM_SDQS6		150
#define SWPAD_DRAM_DQM6			151
#define SWPAD_DRAM_SDQS7		152
#define SWPAD_DRAM_DQM7			153
#define SWPAD_KEY_COL0			154
#define SWPAD_KEY_ROW0			155
#define SWPAD_KEY_COL1			156
#define SWPAD_KEY_ROW1			157
#define SWPAD_KEY_COL2			158
#define SWPAD_KEY_ROW2			159
#define SWPAD_KEY_COL3			160
#define SWPAD_KEY_ROW3			161
#define SWPAD_KEY_COL4			162
#define SWPAD_KEY_ROW4			163
#define SWPAD_GPIO_0			164
#define SWPAD_GPIO_1			165
#define SWPAD_GPIO_9			166
#define SWPAD_GPIO_3			167
#define SWPAD_GPIO_6			168
#define SWPAD_GPIO_2			169
#define SWPAD_GPIO_4			170
#define SWPAD_GPIO_5			171
#define SWPAD_GPIO_7			172
#define SWPAD_GPIO_8			173
#define SWPAD_GPIO_16			174
#define SWPAD_GPIO_17			175
#define SWPAD_GPIO_18			176
#define SWPAD_GPIO_19			177
#define SWPAD_CSI0_PIXCLK		178
#define SWPAD_CSI0_MCLK			179
#define SWPAD_CSI0_DATA_EN		180
#define SWPAD_CSI0_VSYNC		181
#define SWPAD_CSI0_DAT4			182
#define SWPAD_CSI0_DAT5			183
#define SWPAD_CSI0_DAT6			184
#define SWPAD_CSI0_DAT7			185
#define SWPAD_CSI0_DAT8			186
#define SWPAD_CSI0_DAT9			187
#define SWPAD_CSI0_DAT10		188
#define SWPAD_CSI0_DAT11		189
#define SWPAD_CSI0_DAT12		190
#define SWPAD_CSI0_DAT13		191
#define SWPAD_CSI0_DAT14		192
#define SWPAD_CSI0_DAT15		193
#define SWPAD_CSI0_DAT16		194
#define SWPAD_CSI0_DAT17		195
#define SWPAD_CSI0_DAT18		196
#define SWPAD_CSI0_DAT19		197
#define SWPAD_JTAG_TMS			198
#define SWPAD_JTAG_MOD			199
#define SWPAD_JTAG_TRSTB		200
#define SWPAD_JTAG_TDI			201
#define SWPAD_JTAG_TCK			202
#define SWPAD_JTAG_TDO			203
#define SWPAD_SD3_DAT7			204
#define SWPAD_SD3_DAT6			205
#define SWPAD_SD3_DAT5			206
#define SWPAD_SD3_DAT4			207
#define SWPAD_SD3_CMD			208
#define SWPAD_SD3_CLK			209
#define SWPAD_SD3_DAT0			210
#define SWPAD_SD3_DAT1			211
#define SWPAD_SD3_DAT2			212
#define SWPAD_SD3_DAT3			213
#define SWPAD_SD3_RST			214
#define SWPAD_NANDF_CLE			215
#define SWPAD_NANDF_ALE			216
#define SWPAD_NANDF_WP_B		217
#define SWPAD_NANDF_RB0			218
#define SWPAD_NANDF_CS0			219
#define SWPAD_NANDF_CS1			220
#define SWPAD_NANDF_CS2			221
#define SWPAD_NANDF_CS3			222
#define SWPAD_SD4_CMD			223
#define SWPAD_SD4_CLK			224
#define SWPAD_NANDF_D0			225
#define SWPAD_NANDF_D1			226
#define SWPAD_NANDF_D2			227
#define SWPAD_NANDF_D3			228
#define SWPAD_NANDF_D4			229
#define SWPAD_NANDF_D5			230
#define SWPAD_NANDF_D6			231
#define SWPAD_NANDF_D7			232
#define SWPAD_SD4_DAT0			233
#define SWPAD_SD4_DAT1			234
#define SWPAD_SD4_DAT2			235
#define SWPAD_SD4_DAT3			236
#define SWPAD_SD4_DAT4			237
#define SWPAD_SD4_DAT5			238
#define SWPAD_SD4_DAT6			239
#define SWPAD_SD4_DAT7			240
#define SWPAD_SD1_DAT1			241
#define SWPAD_SD1_DAT0			242
#define SWPAD_SD1_DAT3			243
#define SWPAD_SD1_CMD			244
#define SWPAD_SD1_DAT2			245
#define SWPAD_SD1_CLK			246
#define SWPAD_SD2_CLK			247
#define SWPAD_SD2_CMD			248
#define SWPAD_SD2_DAT3			249
#define SWPAD_GRP_B7DS			250
#define SWPAD_GRP_ADDS			251
#define SWPAD_GRP_DDRMODE_CTL		252
#define SWPAD_GRP_TERM_CTL0		253
#define SWPAD_GRP_DDRPKE		254
#define SWPAD_GRP_TERM_CTL1		255
#define SWPAD_GRP_TERM_CTL2		256
#define SWPAD_GRP_TERM_CTL3		257
#define SWPAD_GRP_DDRPK			258
#define SWPAD_GRP_TERM_CTL4		259
#define SWPAD_GRP_DDRHYS		260
#define SWPAD_GRP_DDRMODE		261
#define SWPAD_GRP_TERM_CTL5		262
#define SWPAD_GRP_TERM_CTL6		263
#define SWPAD_GRP_TERM_CTL7		264
#define SWPAD_GRP_B0DS			265
#define SWPAD_GRP_B1DS			266
#define SWPAD_GRP_CTLDS			267
#define SWPAD_GRP_DDR_TYPE_RGMII	268
#define SWPAD_GRP_B2DS			269
#define SWPAD_GRP_DDR_TYPE		270
#define SWPAD_GRP_B3DS			271
#define SWPAD_GRP_B4DS			272
#define SWPAD_GRP_B5DS			273
#define SWPAD_GRP_B6DS			274
#define SWPAD_GRP_RGMII_TERM		275

/*
 * offsets of IOMUXC registers from MX6DQ_IOMUX_INPUT
 * where MX6DQ_IOMUX_INPUT = MX6DQ_IOMUXC_BASE + 0x07B0
 */
#define SWINPUT_ASRC_ASRCK_CLOCK_6				0
#define SWINPUT_AUDMUX_P4_DA_AMX				1
#define SWINPUT_AUDMUX_P4_DB_AMX				2
#define SWINPUT_AUDMUX_P4_RXCLK_AMX				3
#define SWINPUT_AUDMUX_P4_RXFS_AMX				4
#define SWINPUT_AUDMUX_P4_TXCLK_AMX				5
#define SWINPUT_AUDMUX_P4_TXFS_AMX				6
#define SWINPUT_AUDMUX_P5_DA_AMX				7
#define SWINPUT_AUDMUX_P5_DB_AMX				8
#define SWINPUT_AUDMUX_P5_RXCLK_AMX				9
#define SWINPUT_AUDMUX_P5_RXFS_AMX				10
#define SWINPUT_AUDMUX_P5_TXCLK_AMX				11
#define SWINPUT_AUDMUX_P5_TXFS_AMX				12
#define SWINPUT_CAN1_IPP_IND_CANRX				13
#define SWINPUT_CAN2_IPP_IND_CANRX				14
#define SWINPUT_CCM_IPP_DI1_CLK					15
#define SWINPUT_CCM_PMIC_VFUNCTIONAL_READY			16
#define SWINPUT_ECSPI1_IPP_CSPI_CLK				17
#define SWINPUT_ECSPI1_IPP_IND_MISO				18
#define SWINPUT_ECSPI1_IPP_IND_MOSI				19
#define SWINPUT_ECSPI1_IPP_IND_SS_B_0				20
#define SWINPUT_ECSPI1_IPP_IND_SS_B_1				21
#define SWINPUT_ECSPI1_IPP_IND_SS_B_2				22
#define SWINPUT_ECSPI1_IPP_IND_SS_B_3				23
#define SWINPUT_ECSPI2_IPP_CSPI_CLK				24
#define SWINPUT_ECSPI2_IPP_IND_MISO				25
#define SWINPUT_ECSPI2_IPP_IND_MOSI				26
#define SWINPUT_ECSPI2_IPP_IND_SS_B_0				27
#define SWINPUT_ECSPI2_IPP_IND_SS_B_1				28
#define SWINPUT_ECSPI4_IPP_IND_SS_B_0				29
#define SWINPUT_ECSPI5_IPP_CSPI_CLK				30
#define SWINPUT_ECSPI5_IPP_IND_MISO				31
#define SWINPUT_ECSPI5_IPP_IND_MOSI				32
#define SWINPUT_ECSPI5_IPP_IND_SS_B_0				33
#define SWINPUT_ECSPI5_IPP_IND_SS_B_1				34 
#define SWINPUT_ENET_IPG_CLK_RMII				35
#define SWINPUT_ENET_IPP_IND_MAC0_MDIO				36
#define SWINPUT_ENET_IPP_IND_MAC0_RXCLK				37
#define SWINPUT_ENET_IPP_IND_MAC_RXDATA_0			38
#define SWINPUT_ENET_IPP_IND_MAC_RXDATA_1			39
#define SWINPUT_ENET_IPP_IND_MAC_RXDATA_2			40
#define SWINPUT_ENET_IPP_IND_MAC_RXDATA_3			41
#define SWINPUT_ENET_IPP_IND_MAC0_RXEN				42
#define SWINPUT_ESAI1_IPP_IND_FSR				43
#define SWINPUT_ESAI1_IPP_IND_FST				44
#define SWINPUT_ESAI1_IPP_IND_HCKR				45
#define SWINPUT_ESAI1_IPP_IND_HCKT				46
#define SWINPUT_ESAI1_IPP_IND_SCKR				47
#define SWINPUT_ESAI1_IPP_IND_SCKT				48
#define SWINPUT_ESAI1_IPP_IND_SDO0				49
#define SWINPUT_ESAI1_IPP_IND_SDO1				50
#define SWINPUT_ESAI1_IPP_IND_SDO2_SDI3				51
#define SWINPUT_ESAI1_IPP_IND_SDO3_SDI2				52
#define SWINPUT_ESAI1_IPP_IND_SDO4_SDI1				53
#define SWINPUT_ESAI1_IPP_IND_SDO5_SDI0				54
#define SWINPUT_HDMI_TX_ICECIN					55
#define SWINPUT_HDMI_TX_II2C_MSTH13TDDC_CLKIN			56
#define SWINPUT_HDMI_TX_II2C_MSTH14TDDC_SDAIN			57
#define SWINPUT_I2C1_IPP_SCL_IN					58
#define SWINPUT_I2C1_IPP_SDA_IN					59
#define SWINPUT_I2C2_IPP_SCL_IN					60
#define SWINPUT_I2C2_IPP_SDA_IN					61
#define SWINPUT_I2C3_IPP_SCL_IN					62
#define SWINPUT_I2C3_IPP_SDA_IN					63
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_10			64
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_11			65
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_12			66
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_13			67
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_14			68
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_15			69
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_16			70
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_17			71
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_18			72
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_19			73
#define SWINPUT_IPU2_IPP_IND_SENS1_DATA_EN			74
#define SWINPUT_IPU2_IPP_IND_SENS1_HSYNC			75
#define SWINPUT_IPU2_IPP_IND_SENS1_PIX_CLK			76
#define SWINPUT_IPU2_IPP_IND_SENS1_VSYNC			77
#define SWINPUT_KPP_IPP_IND_COL_5				78
#define SWINPUT_KPP_IPP_IND_COL_6				79
#define SWINPUT_KPP_IPP_IND_COL_7				80
#define SWINPUT_KPP_IPP_IND_ROW_5				81
#define SWINPUT_KPP_IPP_IND_ROW_6				82
#define SWINPUT_KPP_IPP_IND_ROW_7				83
#define SWINPUT_MLB_MLB_CLK_IN					84
#define SWINPUT_MLB_MLB_DATA_IN					85
#define SWINPUT_MLB_MLB_SIG_IN					86
#define SWINPUT_SDMA_EVENTS_14					87
#define SWINPUT_SDMA_EVENTS_15					88
#define SWINPUT_SPDIF_SPDIF_IN1					89
#define SWINPUT_SPDIF_TX_CLK2					90
#define SWINPUT_UART1_IPP_UART_RTS_B				91
#define SWINPUT_UART1_IPP_UART_RXD_MUX				92
#define SWINPUT_UART2_IPP_UART_RTS_B				93
#define SWINPUT_UART2_IPP_UART_RXD_MUX				94
#define SWINPUT_UART3_IPP_UART_RTS_B				95
#define SWINPUT_UART3_IPP_UART_RXD_MUX				96
#define SWINPUT_UART4_IPP_UART_RTS_B				97
#define SWINPUT_UART4_IPP_UART_RXD_MUX				98
#define SWINPUT_UART5_IPP_UART_RTS_B				99
#define SWINPUT_UART5_IPP_UART_RXD_MUX				100
#define SWINPUT_USB0H3_IPP_IND_OTG_OC				101
#define SWINPUT_USB0H3_IPP_IND_UH1_OC				102
#define SWINPUT_USDHC1_IPP_WP_ON					103

/*
 * Bit definitions for SW_MUX_CTL registers
 */
#define MUX_CTL_SION						(0x1 << 4)
#define MUX_CTL_MUX_MODE_ALT0					0
#define MUX_CTL_MUX_MODE_ALT1					1
#define MUX_CTL_MUX_MODE_ALT2					2
#define MUX_CTL_MUX_MODE_ALT3					3
#define MUX_CTL_MUX_MODE_ALT4					4
#define MUX_CTL_MUX_MODE_ALT5					5
#define MUX_CTL_MUX_MODE_ALT6					6
#define MUX_CTL_MUX_MODE_ALT7					7


/*
 * Bit definitions for SW_PAD_CTL registers
 */

#define PAD_CTL_HYS_DISABLE				(0x0 << 16)
#define PAD_CTL_HYS_ENABLE				(0x1 << 16)

#define PAD_CTL_PUS_100K_PD				(0x0 << 14)
#define PAD_CTL_PUS_47K_PU				(0x1 << 14)
#define PAD_CTL_PUS_100K_PU				(0x2 << 14)
#define PAD_CTL_PUS_22K_PU				(0x3 << 14)

#define PAD_CTL_PUE_PULL				(0x1 << 13)
#define PAD_CTL_PUE_KEEP				(0x0 << 13)

#define PAD_CTL_PKE_DISABLE				(0x0 << 12)
#define PAD_CTL_PKE_ENABLE				(0x1 << 12)

#define PAD_CTL_ODE_DISABLE				(0x0 << 11)
#define PAD_CTL_ODE_ENABLE				(0x1 << 11)

#define PAD_CTL_ODT
#define PAD_CTL_SPEED_TBD				(0x0 << 6)
#define PAD_CTL_SPEED_LOW				(0x1 << 6)
#define PAD_CTL_SPEED_MEDIUM				(0x2 << 6)
#define PAD_CTL_SPEED_MAX				(0x3 << 6)

#define PAD_CTL_DSE_DISABLE				(0x0 << 3)
#define PAD_CTL_DSE_240_OHM				(0x1 << 3)
#define PAD_CTL_DSE_120_OHM				(0x2 << 3)
#define PAD_CTL_DSE_80_OHM				(0x3 << 3)
#define PAD_CTL_DSE_60_OHM				(0x4 << 3)
#define PAD_CTL_DSE_48_OHM				(0x5 << 3)
#define PAD_CTL_DSE_40_OHM				(0x6 << 3)
#define PAD_CTL_DSE_34_OHM				(0x7 << 3)

#define PAD_CTL_SRE_SLOW				(0x0 << 0)
#define PAD_CTL_SRE_FAST				(0x1 << 0)

/*
 * Function prototypes
 */
void pinmux_set_swmux(int pin, int mux_config);
void pinmux_set_padcfg(int pin, int pad_config);
void pinmux_set_input(int pin, int input_config);


#endif	/* __ARM_MX6X_IOMUX_H_INCLUDED */

__SRCVERSION("$URL: http://svn/product/branches/6.5.0/SP1/hardware/startup/lib/public/arm/mx6x_iomux.h $ $Rev: 648509 $");

