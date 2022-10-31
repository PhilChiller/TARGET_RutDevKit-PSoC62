/*******************************************************************************
* File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_canfd.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define CAN_FD_ENABLED 1U
#define CAN_FD_HW CANFD0
#define CAN_FD_CHANNEL CANFD0_CH0
#define CAN_FD_DATA_0 0
#define CAN_FD_DATA_1 1
#define CAN_FD_DATA_2 2
#define CAN_FD_DATA_3 3
#define CAN_FD_DATA_4 4
#define CAN_FD_DATA_5 5
#define CAN_FD_DATA_6 6
#define CAN_FD_DATA_7 7
#define CAN_FD_DATA_8 8
#define CAN_FD_DATA_9 9
#define CAN_FD_DATA_10 10
#define CAN_FD_DATA_11 11
#define CAN_FD_DATA_12 12
#define CAN_FD_DATA_13 13
#define CAN_FD_DATA_14 14
#define CAN_FD_DATA_15 15
#define CAN_FD_IRQ_0 canfd_0_interrupts0_0_IRQn
#define CAN_FD_IRQ_1 canfd_0_interrupts1_0_IRQn

extern void CANFD_RxMsgCallback(bool rxFIFOMsg, uint8_t msgBufOrRxFIFONum, cy_stc_canfd_rx_buffer_t* basemsg);
extern const cy_stc_canfd_bitrate_t CAN_FD_nominalBitrateConfig;
extern const cy_stc_canfd_bitrate_t CAN_FD_dataBitrateConfig;
extern const cy_stc_canfd_transceiver_delay_compensation_t CAN_FD_tdcConfig;
extern const cy_stc_extid_filter_t CAN_FD_extIdFilters[];
extern const cy_stc_canfd_extid_filter_config_t CAN_FD_extIdFiltersConfig;
extern const cy_stc_canfd_global_filter_config_t CAN_FD_globalFilterConfig;
extern const cy_en_canfd_fifo_config_t CAN_FD_rxFifo0Config;
extern const cy_en_canfd_fifo_config_t CAN_FD_rxFifo1Config;
extern const cy_stc_canfd_config_t CAN_FD_config;
extern cy_stc_canfd_t0_t CAN_FD_T0RegisterBuffer_0;
extern cy_stc_canfd_t0_t CAN_FD_T0RegisterBuffer_1;
extern cy_stc_canfd_t1_t CAN_FD_T1RegisterBuffer_0;
extern cy_stc_canfd_t1_t CAN_FD_T1RegisterBuffer_1;
extern uint32_t CAN_FD_dataBuffer_0[];
extern uint32_t CAN_FD_dataBuffer_1[];
extern cy_stc_canfd_tx_buffer_t CAN_FD_txBuffer_0;
extern cy_stc_canfd_tx_buffer_t CAN_FD_txBuffer_1;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CAN_FD_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
