/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define WCO_IN_ENABLED 1U
#define WCO_IN_PORT GPIO_PRT0
#define WCO_IN_PORT_NUM 0U
#define WCO_IN_PIN 0U
#define WCO_IN_NUM 0U
#define WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_PORT_PIN P0_0
    #define WCO_IN P0_0
    #define WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define WCO_OUT_ENABLED 1U
#define WCO_OUT_PORT GPIO_PRT0
#define WCO_OUT_PORT_NUM 0U
#define WCO_OUT_PIN 1U
#define WCO_OUT_NUM 1U
#define WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_PORT_PIN P0_1
    #define WCO_OUT P0_1
    #define WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define ARDU_RX (P0_2)
    #define ARDU_TX (P0_3)
    #define ARDU_IO7 (P0_4)
    #define ARDU_IO8 (P0_5)
    #define ARDU_ADC1 (P10_0)
    #define ARDU_ADC2 (P10_1)
    #define ARDU_ADC3 (P10_2)
    #define ARDU_ADC4 (P10_3)
    #define POT_ADC (P10_4)
    #define BAT_ADC (P10_5)
    #define ARDU_IO5 (P10_6)
    #define ARDU_IO6 (P10_7)
    #define ARDU_IO4 (P11_0)
    #define FLASH_SSEL (P11_1)
    #define PSRAM_SSEL (P11_2)
    #define QSPI_IO3 (P11_3)
    #define QSPI_IO2 (P11_4)
    #define QSPI_IO1 (P11_5)
    #define QSPI_IO0 (P11_6)
    #define QSPI_CLK (P11_7)
    #define ARDU_SCL (P12_0)
    #define ARDU_SDA (P12_1)
#endif //defined (CY_USING_HAL)
#define ECO_IN_ENABLED 1U
#define ECO_IN_PORT GPIO_PRT12
#define ECO_IN_PORT_NUM 12U
#define ECO_IN_PIN 6U
#define ECO_IN_NUM 6U
#define ECO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_6_HSIOM
    #define ioss_0_port_12_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_IN_HSIOM ioss_0_port_12_pin_6_HSIOM
#define ECO_IN_IRQ ioss_interrupts_gpio_12_IRQn
#if defined (CY_USING_HAL)
    #define ECO_IN_HAL_PORT_PIN P12_6
    #define ECO_IN P12_6
    #define ECO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ECO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ECO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ECO_OUT_ENABLED 1U
#define ECO_OUT_PORT GPIO_PRT12
#define ECO_OUT_PORT_NUM 12U
#define ECO_OUT_PIN 7U
#define ECO_OUT_NUM 7U
#define ECO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_7_HSIOM
    #define ioss_0_port_12_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_OUT_HSIOM ioss_0_port_12_pin_7_HSIOM
#define ECO_OUT_IRQ ioss_interrupts_gpio_12_IRQn
#if defined (CY_USING_HAL)
    #define ECO_OUT_HAL_PORT_PIN P12_7
    #define ECO_OUT P12_7
    #define ECO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define ECO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define ECO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
    #define USB_DP (P14_0)
    #define USB_DM (P14_1)
    #define uSD_DAT0 (P2_0)
    #define uSD_DAT1 (P2_1)
    #define uSD_DAT2 (P2_2)
    #define uSD_DAT3 (P2_3)
    #define uSD_CMD (P2_4)
    #define uSD_CLK (P2_5)
    #define uSD_DETECT (P2_6)
    #define ARDU_IO1 (P2_7)
    #define KITPROG_RX (P3_0)
    #define KITPROG_TX (P3_1)
#endif //defined (CY_USING_HAL)
#define CANFD_RX_ENABLED 1U
#define CANFD_RX_PORT GPIO_PRT5
#define CANFD_RX_PORT_NUM 5U
#define CANFD_RX_PIN 0U
#define CANFD_RX_NUM 0U
#define CANFD_RX_DRIVEMODE CY_GPIO_DM_PULLUP
#define CANFD_RX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_0_HSIOM
    #define ioss_0_port_5_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CANFD_RX_HSIOM ioss_0_port_5_pin_0_HSIOM
#define CANFD_RX_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
    #define CANFD_RX_HAL_PORT_PIN P5_0
    #define CANFD_RX P5_0
    #define CANFD_RX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CANFD_RX_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CANFD_RX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CANFD_TX_ENABLED 1U
#define CANFD_TX_PORT GPIO_PRT5
#define CANFD_TX_PORT_NUM 5U
#define CANFD_TX_PIN 1U
#define CANFD_TX_NUM 1U
#define CANFD_TX_DRIVEMODE CY_GPIO_DM_STRONG
#define CANFD_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_1_HSIOM
    #define ioss_0_port_5_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CANFD_TX_HSIOM ioss_0_port_5_pin_1_HSIOM
#define CANFD_TX_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
    #define CANFD_TX_HAL_PORT_PIN P5_1
    #define CANFD_TX P5_1
    #define CANFD_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CANFD_TX_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CANFD_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
    #define ARDU_IO2 (P5_6)
    #define ARDU_IO3 (P5_7)
    #define RS485_RX (P6_0)
    #define RS485_TX (P6_1)
    #define CANFD_STB (P6_2)
    #define RS485_DE (P6_3)
#endif //defined (CY_USING_HAL)
#define TDO_SWO_ENABLED 1U
#define TDO_SWO_PORT GPIO_PRT6
#define TDO_SWO_PORT_NUM 6U
#define TDO_SWO_PIN 4U
#define TDO_SWO_NUM 4U
#define TDO_SWO_DRIVEMODE CY_GPIO_DM_ANALOG
#define TDO_SWO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_4_HSIOM
    #define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define TDO_SWO_HSIOM ioss_0_port_6_pin_4_HSIOM
#define TDO_SWO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define TDO_SWO_HAL_PORT_PIN P6_4
    #define TDO_SWO P6_4
    #define TDO_SWO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define TDO_SWO_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define TDO_SWO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define TDI_ENABLED 1U
#define TDI_PORT GPIO_PRT6
#define TDI_PORT_NUM 6U
#define TDI_PIN 5U
#define TDI_NUM 5U
#define TDI_DRIVEMODE CY_GPIO_DM_ANALOG
#define TDI_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_5_HSIOM
    #define ioss_0_port_6_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define TDI_HSIOM ioss_0_port_6_pin_5_HSIOM
#define TDI_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define TDI_HAL_PORT_PIN P6_5
    #define TDI P6_5
    #define TDI_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define TDI_HAL_DIR CYHAL_GPIO_DIR_INPUT 
    #define TDI_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define SWDIO_ENABLED 1U
#define SWDIO_PORT GPIO_PRT6
#define SWDIO_PORT_NUM 6U
#define SWDIO_PIN 6U
#define SWDIO_NUM 6U
#define SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_PORT_PIN P6_6
    #define SWDIO P6_6
    #define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define SWCLK_ENABLED 1U
#define SWCLK_PORT GPIO_PRT6
#define SWCLK_PORT_NUM 6U
#define SWCLK_PIN 7U
#define SWCLK_NUM 7U
#define SWCLK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define SWCLK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_PORT_PIN P6_7
    #define SWCLK P6_7
    #define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
    #define CS1 (P7_0)
    #define CINTA (P7_1)
    #define CINTB (P7_2)
    #define CS2 (P7_3)
    #define CS3 (P7_4)
    #define CS4 (P7_5)
    #define CS5 (P7_6)
    #define CS_TX (P7_7)
    #define ARDU_MOSI (P8_0)
    #define ARDU_MISO (P8_1)
    #define ARDU_CLK (P8_2)
    #define ARDU_CS (P8_3)
    #define LED1 (P9_0)
    #define LED2 (P9_1)
    #define USER_BTN2 (P9_2)
    #define USER_BTN1 (P9_3)
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t WCO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t WCO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ECO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ECO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ECO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ECO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CANFD_RX_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CANFD_RX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CANFD_TX_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CANFD_TX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t TDO_SWO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t TDO_SWO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t TDI_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t TDI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWCLK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWCLK_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
