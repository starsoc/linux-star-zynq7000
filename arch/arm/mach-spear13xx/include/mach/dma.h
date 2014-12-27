/*
 * arch/arm/mach-spear13xx/include/mach/dma.h
 *
 * DMA information for SPEAr13xx machine family
 *
 * Copyright (C) 2012 ST Microelectronics
 * Viresh Kumar <viresh.linux@gmail.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_DMA_H
#define __MACH_DMA_H

/* request id of all the peripherals */
enum dma_master_info {
	/* Accessible from only one master */
	DMA_MASTER_MCIF = 0,
	DMA_MASTER_FSMC = 1,
	/* Accessible from both 0 & 1 */
	DMA_MASTER_MEMORY = 0,
	DMA_MASTER_ADC = 0,
	DMA_MASTER_UART0 = 0,
	DMA_MASTER_SSP0 = 0,
	DMA_MASTER_I2C0 = 0,

#ifdef CONFIG_MACH_SPEAR1310
	/* Accessible from only one master */
	SPEAR1310_DMA_MASTER_JPEG = 1,

	/* Accessible from both 0 & 1 */
	SPEAR1310_DMA_MASTER_I2S = 0,
	SPEAR1310_DMA_MASTER_UART1 = 0,
	SPEAR1310_DMA_MASTER_UART2 = 0,
	SPEAR1310_DMA_MASTER_UART3 = 0,
	SPEAR1310_DMA_MASTER_UART4 = 0,
	SPEAR1310_DMA_MASTER_UART5 = 0,
	SPEAR1310_DMA_MASTER_I2C1 = 0,
	SPEAR1310_DMA_MASTER_I2C2 = 0,
	SPEAR1310_DMA_MASTER_I2C3 = 0,
	SPEAR1310_DMA_MASTER_I2C4 = 0,
	SPEAR1310_DMA_MASTER_I2C5 = 0,
	SPEAR1310_DMA_MASTER_I2C6 = 0,
	SPEAR1310_DMA_MASTER_I2C7 = 0,
	SPEAR1310_DMA_MASTER_SSP1 = 0,
#endif

#ifdef CONFIG_MACH_SPEAR1340
	/* Accessible from only one master */
	SPEAR1340_DMA_MASTER_I2S_PLAY = 1,
	SPEAR1340_DMA_MASTER_I2S_REC = 1,
	SPEAR1340_DMA_MASTER_I2C1 = 1,
	SPEAR1340_DMA_MASTER_UART1 = 1,

	/* following are accessible from both master 0 & 1 */
	SPEAR1340_DMA_MASTER_SPDIF = 0,
	SPEAR1340_DMA_MASTER_CAM = 1,
	SPEAR1340_DMA_MASTER_VIDEO_IN = 0,
	SPEAR1340_DMA_MASTER_MALI = 0,
#endif
};

enum request_id {
	DMA_REQ_ADC = 0,
	DMA_REQ_SSP0_TX = 4,
	DMA_REQ_SSP0_RX = 5,
	DMA_REQ_UART0_TX = 6,
	DMA_REQ_UART0_RX = 7,
	DMA_REQ_I2C0_TX = 8,
	DMA_REQ_I2C0_RX = 9,

#ifdef CONFIG_MACH_SPEAR1310
	SPEAR1310_DMA_REQ_FROM_JPEG = 2,
	SPEAR1310_DMA_REQ_TO_JPEG = 3,
	SPEAR1310_DMA_REQ_I2S_TX = 10,
	SPEAR1310_DMA_REQ_I2S_RX = 11,

	SPEAR1310_DMA_REQ_I2C1_RX = 0,
	SPEAR1310_DMA_REQ_I2C1_TX = 1,
	SPEAR1310_DMA_REQ_I2C2_RX = 2,
	SPEAR1310_DMA_REQ_I2C2_TX = 3,
	SPEAR1310_DMA_REQ_I2C3_RX = 4,
	SPEAR1310_DMA_REQ_I2C3_TX = 5,
	SPEAR1310_DMA_REQ_I2C4_RX = 6,
	SPEAR1310_DMA_REQ_I2C4_TX = 7,
	SPEAR1310_DMA_REQ_I2C5_RX = 8,
	SPEAR1310_DMA_REQ_I2C5_TX = 9,
	SPEAR1310_DMA_REQ_I2C6_RX = 10,
	SPEAR1310_DMA_REQ_I2C6_TX = 11,
	SPEAR1310_DMA_REQ_UART1_RX = 12,
	SPEAR1310_DMA_REQ_UART1_TX = 13,
	SPEAR1310_DMA_REQ_UART2_RX = 14,
	SPEAR1310_DMA_REQ_UART2_TX = 15,
	SPEAR1310_DMA_REQ_UART5_RX = 16,
	SPEAR1310_DMA_REQ_UART5_TX = 17,
	SPEAR1310_DMA_REQ_SSP1_RX = 18,
	SPEAR1310_DMA_REQ_SSP1_TX = 19,
	SPEAR1310_DMA_REQ_I2C7_RX = 20,
	SPEAR1310_DMA_REQ_I2C7_TX = 21,
	SPEAR1310_DMA_REQ_UART3_RX = 28,
	SPEAR1310_DMA_REQ_UART3_TX = 29,
	SPEAR1310_DMA_REQ_UART4_RX = 30,
	SPEAR1310_DMA_REQ_UART4_TX = 31,
#endif

#ifdef CONFIG_MACH_SPEAR1340
	SPEAR1340_DMA_REQ_SPDIF_TX = 2,
	SPEAR1340_DMA_REQ_SPDIF_RX = 3,
	SPEAR1340_DMA_REQ_I2S_TX = 10,
	SPEAR1340_DMA_REQ_I2S_RX = 11,
	SPEAR1340_DMA_REQ_UART1_TX = 12,
	SPEAR1340_DMA_REQ_UART1_RX = 13,
	SPEAR1340_DMA_REQ_I2C1_TX = 14,
	SPEAR1340_DMA_REQ_I2C1_RX = 15,
	SPEAR1340_DMA_REQ_CAM0_EVEN = 0,
	SPEAR1340_DMA_REQ_CAM0_ODD = 1,
	SPEAR1340_DMA_REQ_CAM1_EVEN = 2,
	SPEAR1340_DMA_REQ_CAM1_ODD = 3,
	SPEAR1340_DMA_REQ_CAM2_EVEN = 4,
	SPEAR1340_DMA_REQ_CAM2_ODD = 5,
	SPEAR1340_DMA_REQ_CAM3_EVEN = 6,
	SPEAR1340_DMA_REQ_CAM3_ODD = 7,
#endif
};

#endif /* __MACH_DMA_H */
