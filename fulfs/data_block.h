#ifndef __FULFS_DATA_BLOCK__H__
#define __FULFS_DATA_BLOCK__H__

#include "block.h"
#include "../device_io.h"

block_no_t data_blocks_init(device_handle_t device, int sectors_per_block, block_no_t data_block_start, block_no_t data_block_count);

/* 分配block */
bool data_block_alloc(device_handle_t device, int sectors_per_block, block_no_t data_blocks_stack, block_no_t* p_block);
/* 释放block */
bool data_block_free(device_handle_t device, int sectors_per_block, block_no_t data_blocks_stack, block_no_t block);


#endif /* __FULFS_DATA_BLOCK__H__ */
