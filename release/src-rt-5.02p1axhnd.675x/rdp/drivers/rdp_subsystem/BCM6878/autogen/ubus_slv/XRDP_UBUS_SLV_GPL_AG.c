/*
   Copyright (c) 2015 Broadcom
   All Rights Reserved

    <:label-BRCM:2015:DUAL/GPL:standard

    Unless you and Broadcom execute a separate written software license
    agreement governing use of this software, this software is licensed
    to you under the terms of the GNU General Public License version 2
    (the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php,
    with the following added to such license:

       As a special exception, the copyright holders of this software give
       you permission to link this software with independent modules, and
       to copy and distribute the resulting executable under terms of your
       choice, provided that you also meet, for each linked independent
       module, the terms and conditions of the license of that module.
       An independent module is a module which is not derived from this
       software.  The special exception does not apply to any modifications
       of the software.

    Not withstanding the above, under no circumstances may you combine
    this software in any way with any other Broadcom software provided
    under a license other than the GPL, without Broadcom's express prior
    written consent.

:>
*/

#include "ru.h"

/******************************************************************************
 * Register: UBUS_SLV_VPB_BASE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_VPB_BASE_REG = 
{
    "VPB_BASE",
#if RU_INCLUDE_DESC
    "VPB_BASE Register",
    "VPB Base address",
#endif
    UBUS_SLV_VPB_BASE_REG_OFFSET,
    0,
    0,
    626,
};

/******************************************************************************
 * Register: UBUS_SLV_VPB_MASK
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_VPB_MASK_REG = 
{
    "VPB_MASK",
#if RU_INCLUDE_DESC
    "VPB_MASK Register",
    "VPB mask address",
#endif
    UBUS_SLV_VPB_MASK_REG_OFFSET,
    0,
    0,
    627,
};

/******************************************************************************
 * Register: UBUS_SLV_APB_BASE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_APB_BASE_REG = 
{
    "APB_BASE",
#if RU_INCLUDE_DESC
    "APB_BASE Register",
    "APB Base address",
#endif
    UBUS_SLV_APB_BASE_REG_OFFSET,
    0,
    0,
    628,
};

/******************************************************************************
 * Register: UBUS_SLV_APB_MASK
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_APB_MASK_REG = 
{
    "APB_MASK",
#if RU_INCLUDE_DESC
    "APB_MASK Register",
    "APB mask address",
#endif
    UBUS_SLV_APB_MASK_REG_OFFSET,
    0,
    0,
    629,
};

/******************************************************************************
 * Register: UBUS_SLV_DEVICE_0_BASE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_DEVICE_0_BASE_REG = 
{
    "DEVICE_0_BASE",
#if RU_INCLUDE_DESC
    "DEVICE_0_BASE Register",
    "Extension of the device i/f. Remote blocks can remove the UBUBS slave port and connect to the device side i/f Extension from the ubus_slave_top module."
    ""
    "Base address",
#endif
    UBUS_SLV_DEVICE_0_BASE_REG_OFFSET,
    0,
    0,
    630,
};

/******************************************************************************
 * Register: UBUS_SLV_DEVICE_0_MASK
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_DEVICE_0_MASK_REG = 
{
    "DEVICE_0_MASK",
#if RU_INCLUDE_DESC
    "DEVICE_0_MASK Register",
    "Extension of the device i/f. Remote blocks can remove the UBUBS slave port and connect to the device side i/f Extension from the ubus_slave_top module."
    ""
    "mask address",
#endif
    UBUS_SLV_DEVICE_0_MASK_REG_OFFSET,
    0,
    0,
    631,
};

/******************************************************************************
 * Register: UBUS_SLV_DEVICE_1_BASE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_DEVICE_1_BASE_REG = 
{
    "DEVICE_1_BASE",
#if RU_INCLUDE_DESC
    "DEVICE_1_BASE Register",
    "Extension of the device i/f. Remote blocks can remove the UBUBS slave port and connect to the device side i/f Extension from the ubus_slave_top module."
    ""
    "Base address",
#endif
    UBUS_SLV_DEVICE_1_BASE_REG_OFFSET,
    0,
    0,
    632,
};

/******************************************************************************
 * Register: UBUS_SLV_DEVICE_1_MASK
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_DEVICE_1_MASK_REG = 
{
    "DEVICE_1_MASK",
#if RU_INCLUDE_DESC
    "DEVICE_1_MASK Register",
    "Extension of the device i/f. Remote blocks can remove the UBUBS slave port and connect to the device side i/f Extension from the ubus_slave_top module."
    ""
    "mask address",
#endif
    UBUS_SLV_DEVICE_1_MASK_REG_OFFSET,
    0,
    0,
    633,
};

/******************************************************************************
 * Register: UBUS_SLV_DEVICE_2_BASE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_DEVICE_2_BASE_REG = 
{
    "DEVICE_2_BASE",
#if RU_INCLUDE_DESC
    "DEVICE_2_BASE Register",
    "Extension of the device i/f. Remote blocks can remove the UBUBS slave port and connect to the device side i/f Extension from the ubus_slave_top module."
    ""
    "Base address",
#endif
    UBUS_SLV_DEVICE_2_BASE_REG_OFFSET,
    0,
    0,
    634,
};

/******************************************************************************
 * Register: UBUS_SLV_DEVICE_2_MASK
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_DEVICE_2_MASK_REG = 
{
    "DEVICE_2_MASK",
#if RU_INCLUDE_DESC
    "DEVICE_2_MASK Register",
    "Extension of the device i/f. Remote blocks can remove the UBUBS slave port and connect to the device side i/f Extension from the ubus_slave_top module."
    ""
    "mask address",
#endif
    UBUS_SLV_DEVICE_2_MASK_REG_OFFSET,
    0,
    0,
    635,
};

/******************************************************************************
 * Register: UBUS_SLV_RNR_INTR_CTRL_ISR
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_RNR_INTR_CTRL_ISR_REG = 
{
    "RNR_INTR_CTRL_ISR",
#if RU_INCLUDE_DESC
    "INTERRUPT_STATUS_REGISTER Register",
    "This register contains the current active QM interrupts. Each asserted bit represents an active interrupt source. The interrupt remains active until the software clears it by writing 1 to the corresponding bit.",
#endif
    UBUS_SLV_RNR_INTR_CTRL_ISR_REG_OFFSET,
    0,
    0,
    636,
};

/******************************************************************************
 * Register: UBUS_SLV_RNR_INTR_CTRL_ISM
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_RNR_INTR_CTRL_ISM_REG = 
{
    "RNR_INTR_CTRL_ISM",
#if RU_INCLUDE_DESC
    "INTERRUPT_STATUS_MASKED_REGISTER Register",
    "This register provides only the  enabled interrupts for each of the interrupt sources depicted in the ISR register.",
#endif
    UBUS_SLV_RNR_INTR_CTRL_ISM_REG_OFFSET,
    0,
    0,
    637,
};

/******************************************************************************
 * Register: UBUS_SLV_RNR_INTR_CTRL_IER
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_RNR_INTR_CTRL_IER_REG = 
{
    "RNR_INTR_CTRL_IER",
#if RU_INCLUDE_DESC
    "INTERRUPT_ENABLE_REGISTER Register",
    "This register provides an enable mask for each of the interrupt sources depicted in the ISR register.",
#endif
    UBUS_SLV_RNR_INTR_CTRL_IER_REG_OFFSET,
    0,
    0,
    638,
};

/******************************************************************************
 * Register: UBUS_SLV_RNR_INTR_CTRL_ITR
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_RNR_INTR_CTRL_ITR_REG = 
{
    "RNR_INTR_CTRL_ITR",
#if RU_INCLUDE_DESC
    "INTERRUPT_TEST_REGISTER Register",
    "This register enables testing by simulating interrupt sources. When the software sets a bit in the ITR, the corresponding bit in the ISR shows an active interrupt. The interrupt remains active until software clears the bit in the ITR",
#endif
    UBUS_SLV_RNR_INTR_CTRL_ITR_REG_OFFSET,
    0,
    0,
    639,
};

/******************************************************************************
 * Register: UBUS_SLV_PROFILING_CFG
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_PROFILING_CFG_REG = 
{
    "PROFILING_CFG",
#if RU_INCLUDE_DESC
    "PROFILING_CFG Register",
    "Profiling configuration settings",
#endif
    UBUS_SLV_PROFILING_CFG_REG_OFFSET,
    0,
    0,
    640,
};

/******************************************************************************
 * Register: UBUS_SLV_PROFILING_STATUS
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_PROFILING_STATUS_REG = 
{
    "PROFILING_STATUS",
#if RU_INCLUDE_DESC
    "PROFILING_STATUS Register",
    "Profiling status",
#endif
    UBUS_SLV_PROFILING_STATUS_REG_OFFSET,
    0,
    0,
    641,
};

/******************************************************************************
 * Register: UBUS_SLV_PROFILING_COUNTER
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_PROFILING_COUNTER_REG = 
{
    "PROFILING_COUNTER",
#if RU_INCLUDE_DESC
    "PROFILING_COUNTER Register",
    "Read PROFILING_COUNTER current value",
#endif
    UBUS_SLV_PROFILING_COUNTER_REG_OFFSET,
    0,
    0,
    642,
};

/******************************************************************************
 * Register: UBUS_SLV_PROFILING_START_VALUE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_PROFILING_START_VALUE_REG = 
{
    "PROFILING_START_VALUE",
#if RU_INCLUDE_DESC
    "PROFILING_START_VALUE Register",
    "Read PROFILING_START_VALUE value",
#endif
    UBUS_SLV_PROFILING_START_VALUE_REG_OFFSET,
    0,
    0,
    643,
};

/******************************************************************************
 * Register: UBUS_SLV_PROFILING_STOP_VALUE
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_PROFILING_STOP_VALUE_REG = 
{
    "PROFILING_STOP_VALUE",
#if RU_INCLUDE_DESC
    "PROFILING_STOP_VALUE Register",
    "Read PROFILING_STOP_VALUE value",
#endif
    UBUS_SLV_PROFILING_STOP_VALUE_REG_OFFSET,
    0,
    0,
    644,
};

/******************************************************************************
 * Register: UBUS_SLV_PROFILING_CYCLE_NUM
 ******************************************************************************/
const ru_reg_rec UBUS_SLV_PROFILING_CYCLE_NUM_REG = 
{
    "PROFILING_CYCLE_NUM",
#if RU_INCLUDE_DESC
    "PROFILING_CYCLE_NUM Register",
    "Set length of profiling window",
#endif
    UBUS_SLV_PROFILING_CYCLE_NUM_REG_OFFSET,
    0,
    0,
    645,
};

/******************************************************************************
 * Register: UBUS_SLV__LED_CNTRL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__LED_CNTRL_REG = 
{
    "_LED_CNTRL",
#if RU_INCLUDE_DESC
    "LED_CNTRL Register",
    "No Description",
#endif
    UBUS_SLV__LED_CNTRL_REG_OFFSET,
    0,
    0,
    646,
};

/******************************************************************************
 * Register: UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_SEL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_SEL_REG = 
{
    "_LED_LINK_AND_SPEED_ENCODING_SEL",
#if RU_INCLUDE_DESC
    "LED_LINK_AND_SPEED_ENCODING_SEL Register",
    "No Description",
#endif
    UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_SEL_REG_OFFSET,
    0,
    0,
    647,
};

/******************************************************************************
 * Register: UBUS_SLV__LED_LINK_AND_SPEED_ENCODING
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_REG = 
{
    "_LED_LINK_AND_SPEED_ENCODING",
#if RU_INCLUDE_DESC
    "LED_LINK_AND_SPEED_ENCODING Register",
    "No Description",
#endif
    UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_REG_OFFSET,
    0,
    0,
    648,
};

/******************************************************************************
 * Register: UBUS_SLV__LED_BLINK_RATE_CNTRL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__LED_BLINK_RATE_CNTRL_REG = 
{
    "_LED_BLINK_RATE_CNTRL",
#if RU_INCLUDE_DESC
    "LED_BLINK_RATE_CNTRL Register",
    "No Description",
#endif
    UBUS_SLV__LED_BLINK_RATE_CNTRL_REG_OFFSET,
    0,
    0,
    649,
};

/******************************************************************************
 * Register: UBUS_SLV__CNTRL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__CNTRL_REG = 
{
    "_CNTRL",
#if RU_INCLUDE_DESC
    "RGMII_CNTRL Register",
    "RGMII Control Register",
#endif
    UBUS_SLV__CNTRL_REG_OFFSET,
    0,
    0,
    650,
};

/******************************************************************************
 * Register: UBUS_SLV__IB_STATUS
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__IB_STATUS_REG = 
{
    "_IB_STATUS",
#if RU_INCLUDE_DESC
    "RGMII_IB_STATUS Register",
    "RGMII IB Status Register",
#endif
    UBUS_SLV__IB_STATUS_REG_OFFSET,
    0,
    0,
    651,
};

/******************************************************************************
 * Register: UBUS_SLV__RX_CLOCK_DELAY_CNTRL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__RX_CLOCK_DELAY_CNTRL_REG = 
{
    "_RX_CLOCK_DELAY_CNTRL",
#if RU_INCLUDE_DESC
    "RGMII_RX_CLOCK_DELAY_CNTRL Register",
    "RGMII RX Clock Delay Control Register",
#endif
    UBUS_SLV__RX_CLOCK_DELAY_CNTRL_REG_OFFSET,
    0,
    0,
    652,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_RX_CNTRL_EXP_DATA
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_RX_CNTRL_EXP_DATA_REG = 
{
    "_ATE_RX_CNTRL_EXP_DATA",
#if RU_INCLUDE_DESC
    "RGMII_ATE_RX_CNTRL_EXP_DATA Register",
    "RGMII port ATE RX Control and Expected Data Register",
#endif
    UBUS_SLV__ATE_RX_CNTRL_EXP_DATA_REG_OFFSET,
    0,
    0,
    653,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_RX_EXP_DATA_1
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_RX_EXP_DATA_1_REG = 
{
    "_ATE_RX_EXP_DATA_1",
#if RU_INCLUDE_DESC
    "RGMII_ATE_RX_EXP_DATA_1 Register",
    "RGMII port ATE RX Expected Data 1 Register",
#endif
    UBUS_SLV__ATE_RX_EXP_DATA_1_REG_OFFSET,
    0,
    0,
    654,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_RX_STATUS_0
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_RX_STATUS_0_REG = 
{
    "_ATE_RX_STATUS_0",
#if RU_INCLUDE_DESC
    "RGMII_ATE_RX_STATUS_0 Register",
    "RGMII port ATE RX Status 0 Register",
#endif
    UBUS_SLV__ATE_RX_STATUS_0_REG_OFFSET,
    0,
    0,
    655,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_RX_STATUS_1
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_RX_STATUS_1_REG = 
{
    "_ATE_RX_STATUS_1",
#if RU_INCLUDE_DESC
    "RGMII_ATE_RX_STATUS_1 Register",
    "RGMII port ATE RX Status 1 Register",
#endif
    UBUS_SLV__ATE_RX_STATUS_1_REG_OFFSET,
    0,
    0,
    656,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_TX_CNTRL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_TX_CNTRL_REG = 
{
    "_ATE_TX_CNTRL",
#if RU_INCLUDE_DESC
    "RGMII_ATE_TX_CNTRL Register",
    "RGMII port ATE TX Control Register",
#endif
    UBUS_SLV__ATE_TX_CNTRL_REG_OFFSET,
    0,
    0,
    657,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_TX_DATA_0
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_TX_DATA_0_REG = 
{
    "_ATE_TX_DATA_0",
#if RU_INCLUDE_DESC
    "RGMII_ATE_TX_DATA_0 Register",
    "RGMII port ATE TX Data 0 Register",
#endif
    UBUS_SLV__ATE_TX_DATA_0_REG_OFFSET,
    0,
    0,
    658,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_TX_DATA_1
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_TX_DATA_1_REG = 
{
    "_ATE_TX_DATA_1",
#if RU_INCLUDE_DESC
    "RGMII_ATE_TX_DATA_1 Register",
    "RGMII port ATE TX Data 1 Register",
#endif
    UBUS_SLV__ATE_TX_DATA_1_REG_OFFSET,
    0,
    0,
    659,
};

/******************************************************************************
 * Register: UBUS_SLV__ATE_TX_DATA_2
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__ATE_TX_DATA_2_REG = 
{
    "_ATE_TX_DATA_2",
#if RU_INCLUDE_DESC
    "RGMII_ATE_TX_DATA_2 Register",
    "RGMII port ATE TX Data 2 Register",
#endif
    UBUS_SLV__ATE_TX_DATA_2_REG_OFFSET,
    0,
    0,
    660,
};

/******************************************************************************
 * Register: UBUS_SLV__TX_DELAY_CNTRL_0
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__TX_DELAY_CNTRL_0_REG = 
{
    "_TX_DELAY_CNTRL_0",
#if RU_INCLUDE_DESC
    "RGMII_TX_DELAY_CNTRL_0 Register",
    "RGMII TX Delay Control 0 Register",
#endif
    UBUS_SLV__TX_DELAY_CNTRL_0_REG_OFFSET,
    0,
    0,
    661,
};

/******************************************************************************
 * Register: UBUS_SLV__TX_DELAY_CNTRL_1
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__TX_DELAY_CNTRL_1_REG = 
{
    "_TX_DELAY_CNTRL_1",
#if RU_INCLUDE_DESC
    "RGMII_TX_DELAY_CNTRL_1 Register",
    "RGMII TX Delay Control 1 Register",
#endif
    UBUS_SLV__TX_DELAY_CNTRL_1_REG_OFFSET,
    0,
    0,
    662,
};

/******************************************************************************
 * Register: UBUS_SLV__RX_DELAY_CNTRL_0
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__RX_DELAY_CNTRL_0_REG = 
{
    "_RX_DELAY_CNTRL_0",
#if RU_INCLUDE_DESC
    "RGMII_RX_DELAY_CNTRL_0 Register",
    "RGMII RX Delay Control 0 Register",
#endif
    UBUS_SLV__RX_DELAY_CNTRL_0_REG_OFFSET,
    0,
    0,
    663,
};

/******************************************************************************
 * Register: UBUS_SLV__RX_DELAY_CNTRL_1
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__RX_DELAY_CNTRL_1_REG = 
{
    "_RX_DELAY_CNTRL_1",
#if RU_INCLUDE_DESC
    "RGMII_RX_DELAY_CNTRL_1 Register",
    "RGMII RX Delay Control 1 Register",
#endif
    UBUS_SLV__RX_DELAY_CNTRL_1_REG_OFFSET,
    0,
    0,
    664,
};

/******************************************************************************
 * Register: UBUS_SLV__RX_DELAY_CNTRL_2
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__RX_DELAY_CNTRL_2_REG = 
{
    "_RX_DELAY_CNTRL_2",
#if RU_INCLUDE_DESC
    "RGMII_RX_DELAY_CNTRL_2 Register",
    "RGMII RX Delay Control 2 Register",
#endif
    UBUS_SLV__RX_DELAY_CNTRL_2_REG_OFFSET,
    0,
    0,
    665,
};

/******************************************************************************
 * Register: UBUS_SLV__CLK_RST_CTRL
 ******************************************************************************/
const ru_reg_rec UBUS_SLV__CLK_RST_CTRL_REG = 
{
    "_CLK_RST_CTRL",
#if RU_INCLUDE_DESC
    "RGMII_CLK_RST_CTRL Register",
    "Controls the following:"
    "i_sw_init"
    "i_clk_250_en",
#endif
    UBUS_SLV__CLK_RST_CTRL_REG_OFFSET,
    0,
    0,
    666,
};

/******************************************************************************
 * Block: UBUS_SLV
 ******************************************************************************/
static const ru_reg_rec *UBUS_SLV_REGS[] =
{
    &UBUS_SLV_VPB_BASE_REG,
    &UBUS_SLV_VPB_MASK_REG,
    &UBUS_SLV_APB_BASE_REG,
    &UBUS_SLV_APB_MASK_REG,
    &UBUS_SLV_DEVICE_0_BASE_REG,
    &UBUS_SLV_DEVICE_0_MASK_REG,
    &UBUS_SLV_DEVICE_1_BASE_REG,
    &UBUS_SLV_DEVICE_1_MASK_REG,
    &UBUS_SLV_DEVICE_2_BASE_REG,
    &UBUS_SLV_DEVICE_2_MASK_REG,
    &UBUS_SLV_RNR_INTR_CTRL_ISR_REG,
    &UBUS_SLV_RNR_INTR_CTRL_ISM_REG,
    &UBUS_SLV_RNR_INTR_CTRL_IER_REG,
    &UBUS_SLV_RNR_INTR_CTRL_ITR_REG,
    &UBUS_SLV_PROFILING_CFG_REG,
    &UBUS_SLV_PROFILING_STATUS_REG,
    &UBUS_SLV_PROFILING_COUNTER_REG,
    &UBUS_SLV_PROFILING_START_VALUE_REG,
    &UBUS_SLV_PROFILING_STOP_VALUE_REG,
    &UBUS_SLV_PROFILING_CYCLE_NUM_REG,
    &UBUS_SLV__LED_CNTRL_REG,
    &UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_SEL_REG,
    &UBUS_SLV__LED_LINK_AND_SPEED_ENCODING_REG,
    &UBUS_SLV__LED_BLINK_RATE_CNTRL_REG,
    &UBUS_SLV__CNTRL_REG,
    &UBUS_SLV__IB_STATUS_REG,
    &UBUS_SLV__RX_CLOCK_DELAY_CNTRL_REG,
    &UBUS_SLV__ATE_RX_CNTRL_EXP_DATA_REG,
    &UBUS_SLV__ATE_RX_EXP_DATA_1_REG,
    &UBUS_SLV__ATE_RX_STATUS_0_REG,
    &UBUS_SLV__ATE_RX_STATUS_1_REG,
    &UBUS_SLV__ATE_TX_CNTRL_REG,
    &UBUS_SLV__ATE_TX_DATA_0_REG,
    &UBUS_SLV__ATE_TX_DATA_1_REG,
    &UBUS_SLV__ATE_TX_DATA_2_REG,
    &UBUS_SLV__TX_DELAY_CNTRL_0_REG,
    &UBUS_SLV__TX_DELAY_CNTRL_1_REG,
    &UBUS_SLV__RX_DELAY_CNTRL_0_REG,
    &UBUS_SLV__RX_DELAY_CNTRL_1_REG,
    &UBUS_SLV__RX_DELAY_CNTRL_2_REG,
    &UBUS_SLV__CLK_RST_CTRL_REG,
};

unsigned long UBUS_SLV_ADDRS[] =
{
    0x82d98000,
};

const ru_block_rec UBUS_SLV_BLOCK = 
{
    "UBUS_SLV",
    UBUS_SLV_ADDRS,
    1,
    41,
    UBUS_SLV_REGS
};

/* End of file XRDP_UBUS_SLV.c */
