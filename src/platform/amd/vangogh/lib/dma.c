// SPDX-License-Identifier: BSD-3-Clause
//
//Copyright(c) 2022 AMD. All rights reserved.
//
//Author:       Basavaraj Hiregoudar <basavaraj.hiregoudar@amd.com>
//              Bala Kishore <balakishore.pati@amd.com>

#include <sof/common.h>
#include <platform/fw_scratch_mem.h>
#include <sof/drivers/acp_dai_dma.h>
#include <rtos/interrupt.h>
#include <sof/lib/dma.h>
#include <sof/lib/memory.h>
#include <sof/sof.h>
#include <rtos/spinlock.h>

extern struct dma_ops acp_dma_ops;
#ifdef ACP_BT_ENABLE
extern struct dma_ops acp_dai_bt_dma_ops;
#endif
extern struct dma_ops acp_dai_sp_dma_ops;
extern struct dma_ops acp_dai_hs_dma_ops;

SHARED_DATA struct dma dma[PLATFORM_NUM_DMACS] = {
{
	.plat_data = {
		.id		= DMA_ID_DMA0,
		.dir		= DMA_DIR_LMEM_TO_HMEM | DMA_DIR_HMEM_TO_LMEM,
		.devs		= DMA_DEV_HOST,
		.base		= DMA0_BASE,
		.chan_size	= DMA0_SIZE,
		.channels	= 8,
		.irq		= IRQ_NUM_EXT_LEVEL5,
	},
	.ops	= &acp_dma_ops,
},
{
	.plat_data = {
		.id		= DMA_ID_DAI_HS,
		.dir		= DMA_DIR_DEV_TO_MEM | DMA_DIR_MEM_TO_DEV,
		.devs		= DMA_DEV_HS,
		.caps		= DMA_CAP_HS,
		.base		= DMA0_BASE,
		.chan_size	= DMA0_SIZE,
		.channels	= 8,
		.irq		= IRQ_NUM_EXT_LEVEL5,
	},
	.ops = &acp_dai_hs_dma_ops,
},
{
	.plat_data = {
		.id		= DMA_ID_DAI_SP,
		.dir		= DMA_DIR_DEV_TO_MEM | DMA_DIR_MEM_TO_DEV,
		.devs		= DMA_DEV_SP,
		.caps		= DMA_CAP_SP,
		.base		= DMA0_BASE,
		.chan_size	= DMA0_SIZE,
		.channels	= 8,
		.irq		= IRQ_NUM_EXT_LEVEL5,
	},
	.ops	= &acp_dai_sp_dma_ops,
},

#ifdef ACP_BT_ENABLE
{
	.plat_data = {
		.id             = DMA_ID_DAI,
		.dir            = DMA_DIR_DEV_TO_MEM | DMA_DIR_MEM_TO_DEV,
		.devs           = DMA_DEV_BT,
		.caps           = DMA_CAP_BT,
		.base           = DMA0_BASE,
		.chan_size      = DMA0_SIZE,
		.channels       = 8,
		.irq            = IRQ_NUM_EXT_LEVEL5,
	},
	.ops    = &acp_dai_bt_dma_ops,
},
#endif
};

const struct dma_info lib_dma = {
	.dma_array = dma,
	.num_dmas = ARRAY_SIZE(dma)
};

int acp_dma_init(struct sof *sof)
{
	int i;
	
	/* early lock initialization for ref counting */
	for (i = 0; i < ARRAY_SIZE(dma); i++)
		k_spinlock_init(&dma[i].lock);
	sof->dma_info = &lib_dma;
	return 0;
}