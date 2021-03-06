/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "SOF3"

#define LED0_GPIO   GPIOA
#define LED0_PIN    Pin_15 // PBA15 (LED)
#define LED0_PERIPHERAL RCC_AHBPeriph_GPIOA

// FIXME The board has a bus switch, not LED1
#define LED1_GPIO   GPIOB
#define LED1_PIN    Pin_3 // PB3
#define LED1_PERIPHERAL RCC_AHBPeriph_GPIOB

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2

#define SPI1_CS_GPIO      GPIOA
#define SPI1_CS_PIN       GPIO_Pin_4

#define SPI2_CS_GPIO      GPIOB
#define SPI2_CS_PIN       GPIO_Pin_12

#define M25P16_CS_GPIO        SPI1_CS_GPIO
#define M25P16_CS_PIN         SPI1_CS_PIN
#define M25P16_SPI_INSTANCE   SPI1

#define MAX7456_CS_GPIO        SPI2_CS_GPIO
#define MAX7456_CS_PIN         SPI2_CS_PIN
#define MAX7456_SPI_INSTANCE   SPI2

#define MAX7456_DMA_CHANNEL_TX              DMA1_Channel5
#define MAX7456_DMA_CHANNEL_RX              DMA1_Channel4
#define MAX7456_DMA_IRQ_HANDLER_ID          DMA1Channel4Descriptor

#define MAX7456_NRST_GPIO_PERIPHERAL    RCC_AHBPeriph_GPIOB
#define MAX7456_NRST_GPIO               GPIOB
#define MAX7456_NRST_PIN                Pin_2

#define MAX7456_LOS_IO                  PC13
#define MAX7456_VSYNC_IO                PC14
#define MAX7456_HSYNC_IO                PC15

#define EXTI_CALLBACK_HANDLER_COUNT 3 // LOS, HSYNC, VSYNC

#define USE_FLASHFS
#define USE_FLASHTOOLS
#define USE_FLASH_M25P16

#define LED0
#define LED1

#define USB_IO

#define USE_VCP
#define USE_UART1
#define USE_UART2
#define SERIAL_PORT_COUNT 3

#define UART1_TX_PIN        GPIO_Pin_9  // PA9
#define UART1_RX_PIN        GPIO_Pin_10 // PA10
#define UART1_GPIO          GPIOA
#define UART1_GPIO_AF       GPIO_AF_7
#define UART1_TX_PINSOURCE  GPIO_PinSource9
#define UART1_RX_PINSOURCE  GPIO_PinSource10

#define USE_MSP_CLIENT

#define USE_EXTI

#define USE_ADC

#define ADC_INSTANCE                ADC1
#define ADC_AHB_PERIPHERAL          RCC_AHBPeriph_DMA1
#define ADC_DMA_CHANNEL             DMA1_Channel1

// 12v
#define ADC0_GPIO               GPIOA
#define ADC0_GPIO_PIN           GPIO_Pin_0
#define ADC0_CHANNEL            ADC_Channel_1

// 5v
#define ADC1_GPIO               GPIOA
#define ADC1_GPIO_PIN           GPIO_Pin_1
#define ADC1_CHANNEL            ADC_Channel_2

// vbat
#define ADC2_GPIO               GPIOA
#define ADC2_GPIO_PIN           GPIO_Pin_2
#define ADC2_CHANNEL            ADC_Channel_3

// amperage
#define ADC3_GPIO               GPIOA
#define ADC3_GPIO_PIN           GPIO_Pin_3
#define ADC3_CHANNEL            ADC_Channel_4

// adc channel mapping
#define ADC_CHANNEL_COUNT 4
#define ADC_POWER_12V ADC_CHANNEL0
#define ADC_POWER_5V ADC_CHANNEL1
#define ADC_BATTERY ADC_CHANNEL2
#define ADC_AMPERAGE ADC_CHANNEL3

#define MAX_VOLTAGE_METERS 3

#define BOARD_HAS_AMPERAGE_METER

#define TRANSPONDER
#define TRANSPONDER_GPIO                     GPIOA
#define TRANSPONDER_GPIO_AHB_PERIPHERAL      RCC_AHBPeriph_GPIOA
#define TRANSPONDER_GPIO_AF                  GPIO_AF_6
#define TRANSPONDER_PIN                      GPIO_Pin_8
#define TRANSPONDER_PIN_SOURCE               GPIO_PinSource8
#define TRANSPONDER_TIMER                    TIM1
#define TRANSPONDER_TIMER_APB2_PERIPHERAL    RCC_APB2Periph_TIM1
#define TRANSPONDER_DMA_CHANNEL              DMA1_Channel2
#define TRANSPONDER_IRQ                      DMA1_Channel2_IRQn
#define TRANSPONDER_DMA_TC_FLAG              DMA1_FLAG_TC2
#define TRANSPONDER_DMA_HANDLER_IDENTIFER    DMA1Channel2Descriptor

#define DEFAULT_FEATURES FEATURE_TRANSPONDER

// IO - stm32f303cc in 48pin package
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF (BIT(0)|BIT(1))
