/*
* <:copyright-BRCM:2014:proprietary:standard
* 
*    Copyright (c) 2014 Broadcom 
*    All Rights Reserved
* 
*  This program is the proprietary software of Broadcom and/or its
*  licensors, and may only be used, duplicated, modified or distributed pursuant
*  to the terms and conditions of a separate, written license agreement executed
*  between you and Broadcom (an "Authorized License").  Except as set forth in
*  an Authorized License, Broadcom grants no license (express or implied), right
*  to use, or waiver of any kind with respect to the Software, and Broadcom
*  expressly reserves all rights in and to the Software and all intellectual
*  property rights therein.  IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE
*  NO RIGHT TO USE THIS SOFTWARE IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY
*  BROADCOM AND DISCONTINUE ALL USE OF THE SOFTWARE.
* 
*  Except as expressly set forth in the Authorized License,
* 
*  1. This program, including its structure, sequence and organization,
*     constitutes the valuable trade secrets of Broadcom, and you shall use
*     all reasonable efforts to protect the confidentiality thereof, and to
*     use this information only in connection with your use of Broadcom
*     integrated circuit products.
* 
*  2. TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
*     AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS OR
*     WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
*     RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND
*     ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, NONINFRINGEMENT,
*     FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR
*     COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE
*     TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE OR
*     PERFORMANCE OF THE SOFTWARE.
* 
*  3. TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR
*     ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL,
*     INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY
*     WAY RELATING TO YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN
*     IF BROADCOM HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES;
*     OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE
*     SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS
*     SHALL APPLY NOTWITHSTANDING ANY FAILURE OF ESSENTIAL PURPOSE OF ANY
*     LIMITED REMEDY.
* :>
*/


#ifndef _RDD_MULTICAST_WHITELIST_H
#define _RDD_MULTICAST_WHITELIST_H

#include "rdd.h"
#include "rdd_common.h"
#include "rdpa_types.h"

typedef struct multicast_whitelist_params
{
    uint32_t key_offset;
    uint32_t natc_tbl_idx;
} multicast_whitelist_params_t;

int rdd_multicast_whitelist_module_init(const rdd_module_t *module);
int rdd_multicast_whitelist_context_table_addr_set(uint32_t addr_high, uint32_t addr_low);
int rdd_multicast_whitelist_entry_add(RDD_MULTICAST_WHITELIST_LKP_ENTRY_DTS *mcast_wl_entry,
                                      RDD_MULTICAST_WHITELIST_CONTEXT_ENTRY_DTS *mcast_wl_ctxt,
                                      uint32_t *entry_idx);
int rdd_multicast_whitelist_entry_find(RDD_MULTICAST_WHITELIST_LKP_ENTRY_DTS *mcast_wl_entry,
                                       RDD_MULTICAST_WHITELIST_CONTEXT_ENTRY_DTS *mcast_wl_ctxt,
                                       uint32_t *entry_idx);
int rdd_multicast_whitelist_entry_get(uint32_t entry_idx,
                                      RDD_MULTICAST_WHITELIST_LKP_ENTRY_DTS *mcast_wl_entry,
                                      RDD_MULTICAST_WHITELIST_CONTEXT_ENTRY_DTS *mcast_wl_ctxt);
int rdd_multicast_whitelist_delete(uint32_t entry_idx);
int rdd_multicast_whitelist_enable_port_mask_set(uint32_t port_mask);
int rdd_multicast_whitelist_enable_port_mask_get(uint32_t *port_mask);
int rdd_multicast_whitelist_counter_get(uint32_t entry_idx, uint64_t *packets_cnt,
                                        uint64_t *bytes_cnt);

#endif /* _RDD_MULTICAST_WHITELIST_H */
