/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* mtb-pdl-cat1 2.3.1.11964
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

void CANFD_RxMsgCallback(bool rxFIFOMsg, uint8_t msgBufOrRxFIFONum, cy_stc_canfd_rx_buffer_t* basemsg);
const cy_stc_canfd_bitrate_t CAN_FD_nominalBitrateConfig = 
{
    .prescaler = 4U - 1U,
    .timeSegment1 = 16U - 1U,
    .timeSegment2 = 7U - 1U,
    .syncJumpWidth = 4U - 1U,
};
const cy_stc_canfd_bitrate_t CAN_FD_dataBitrateConfig = 
{
    .prescaler = 2U - 1U,
    .timeSegment1 = 15U - 1U,
    .timeSegment2 = 8U - 1U,
    .syncJumpWidth = 4U - 1U,
};
const cy_stc_canfd_transceiver_delay_compensation_t CAN_FD_tdcConfig = 
{
    .tdcEnabled = false,
    .tdcOffset = 0U,
    .tdcFilterWindow = 0U,
};
static const cy_stc_id_filter_t CAN_FD_stdIdFilters[] = 
{
};
static const cy_stc_canfd_sid_filter_config_t CAN_FD_sidFiltersConfig = 
{
    .numberOfSIDFilters = 0U,
    .sidFilter = CAN_FD_stdIdFilters,
};
const cy_stc_extid_filter_t CAN_FD_extIdFilters[] = 
{
};
const cy_stc_canfd_extid_filter_config_t CAN_FD_extIdFiltersConfig = 
{
    .numberOfEXTIDFilters = 0U,
    .extidFilter = (cy_stc_extid_filter_t*)&CAN_FD_extIdFilters,
    .extIDANDMask = 536870911UL,
};
const cy_stc_canfd_global_filter_config_t CAN_FD_globalFilterConfig = 
{
    .nonMatchingFramesStandard = CY_CANFD_ACCEPT_IN_RXFIFO_0,
    .nonMatchingFramesExtended = CY_CANFD_ACCEPT_IN_RXFIFO_0,
    .rejectRemoteFramesStandard = true,
    .rejectRemoteFramesExtended = true,
};
const cy_en_canfd_fifo_config_t CAN_FD_rxFifo0Config = 
{
    .mode = CY_CANFD_FIFO_MODE_BLOCKING,
    .watermark = 0U,
    .numberOfFIFOElements = 1U,
    .topPointerLogicEnabled = false,
};
const cy_en_canfd_fifo_config_t CAN_FD_rxFifo1Config = 
{
    .mode = CY_CANFD_FIFO_MODE_BLOCKING,
    .watermark = 0U,
    .numberOfFIFOElements = 1U,
    .topPointerLogicEnabled = false,
};
const cy_stc_canfd_config_t CAN_FD_config = 
{
    .txCallback = NULL,
    .rxCallback = CANFD_RxMsgCallback,
    .errorCallback = NULL,
    .canFDMode = true,
    .bitrate = &CAN_FD_nominalBitrateConfig,
    .fastBitrate = &CAN_FD_dataBitrateConfig,
    .tdcConfig = &CAN_FD_tdcConfig,
    .sidFilterConfig = &CAN_FD_sidFiltersConfig,
    .extidFilterConfig = &CAN_FD_extIdFiltersConfig,
    .globalFilterConfig = &CAN_FD_globalFilterConfig,
    .rxBufferDataSize = CY_CANFD_BUFFER_DATA_SIZE_64,
    .rxFIFO1DataSize = CY_CANFD_BUFFER_DATA_SIZE_64,
    .rxFIFO0DataSize = CY_CANFD_BUFFER_DATA_SIZE_64,
    .txBufferDataSize = CY_CANFD_BUFFER_DATA_SIZE_64,
    .rxFIFO0Config = &CAN_FD_rxFifo0Config,
    .rxFIFO1Config = &CAN_FD_rxFifo1Config,
    .noOfRxBuffers = 4U,
    .noOfTxBuffers = 2U,
    .messageRAMaddress = CY_CAN0MRAM_BASE + 0U,
    .messageRAMsize = 4096U,
};
cy_stc_canfd_t0_t CAN_FD_T0RegisterBuffer_0 = 
{
    .id = 512U,
    .rtr = CY_CANFD_RTR_DATA_FRAME,
    .xtd = CY_CANFD_XTD_STANDARD_ID,
    .esi = CY_CANFD_ESI_ERROR_ACTIVE,
};
cy_stc_canfd_t0_t CAN_FD_T0RegisterBuffer_1 = 
{
    .id = 0U,
    .rtr = CY_CANFD_RTR_DATA_FRAME,
    .xtd = CY_CANFD_XTD_STANDARD_ID,
    .esi = CY_CANFD_ESI_ERROR_ACTIVE,
};
cy_stc_canfd_t1_t CAN_FD_T1RegisterBuffer_0 = 
{
    .dlc = 15U,
    .brs = true,
    .fdf = CY_CANFD_FDF_CAN_FD_FRAME,
    .efc = false,
    .mm = 0U,
};
cy_stc_canfd_t1_t CAN_FD_T1RegisterBuffer_1 = 
{
    .dlc = 0U,
    .brs = false,
    .fdf = CY_CANFD_FDF_CAN_FD_FRAME,
    .efc = false,
    .mm = 0U,
};
uint32_t CAN_FD_dataBuffer_0[] = 
{
    [CAN_FD_DATA_0] = 0U,
    [CAN_FD_DATA_1] = 0U,
    [CAN_FD_DATA_2] = 0U,
    [CAN_FD_DATA_3] = 0U,
    [CAN_FD_DATA_4] = 0U,
    [CAN_FD_DATA_5] = 0U,
    [CAN_FD_DATA_6] = 0U,
    [CAN_FD_DATA_7] = 0U,
    [CAN_FD_DATA_8] = 0U,
    [CAN_FD_DATA_9] = 0U,
    [CAN_FD_DATA_10] = 0U,
    [CAN_FD_DATA_11] = 0U,
    [CAN_FD_DATA_12] = 0U,
    [CAN_FD_DATA_13] = 0U,
    [CAN_FD_DATA_14] = 0U,
    [CAN_FD_DATA_15] = 0U,
};
uint32_t CAN_FD_dataBuffer_1[] = 
{
    [CAN_FD_DATA_0] = 0U,
    [CAN_FD_DATA_1] = 0U,
    [CAN_FD_DATA_2] = 0U,
    [CAN_FD_DATA_3] = 0U,
    [CAN_FD_DATA_4] = 0U,
    [CAN_FD_DATA_5] = 0U,
    [CAN_FD_DATA_6] = 0U,
    [CAN_FD_DATA_7] = 0U,
    [CAN_FD_DATA_8] = 0U,
    [CAN_FD_DATA_9] = 0U,
    [CAN_FD_DATA_10] = 0U,
    [CAN_FD_DATA_11] = 0U,
    [CAN_FD_DATA_12] = 0U,
    [CAN_FD_DATA_13] = 0U,
    [CAN_FD_DATA_14] = 0U,
    [CAN_FD_DATA_15] = 0U,
};
cy_stc_canfd_tx_buffer_t CAN_FD_txBuffer_0 = 
{
    .t0_f = &CAN_FD_T0RegisterBuffer_0,
    .t1_f = &CAN_FD_T1RegisterBuffer_0,
    .data_area_f = CAN_FD_dataBuffer_0,
};
cy_stc_canfd_tx_buffer_t CAN_FD_txBuffer_1 = 
{
    .t0_f = &CAN_FD_T0RegisterBuffer_1,
    .t1_f = &CAN_FD_T1RegisterBuffer_1,
    .data_area_f = CAN_FD_dataBuffer_1,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CAN_FD_obj = 
    {
        .type = CYHAL_RSC_CAN,
        .block_num = 0U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_CANFD0_CLOCK_CAN0, CY_SYSCLK_DIV_8_BIT, 0U);
}

void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CAN_FD_obj);
#endif //defined (CY_USING_HAL)
}
