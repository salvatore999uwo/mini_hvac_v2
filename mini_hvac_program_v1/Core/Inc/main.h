/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD1_Pin GPIO_PIN_0
#define LCD1_GPIO_Port GPIOB
#define LCD2_Pin GPIO_PIN_1
#define LCD2_GPIO_Port GPIOB
#define LCD3_Pin GPIO_PIN_2
#define LCD3_GPIO_Port GPIOB
#define LCD10_Pin GPIO_PIN_10
#define LCD10_GPIO_Port GPIOB
#define HBRIDGE_SLEEP1_Pin GPIO_PIN_11
#define HBRIDGE_SLEEP1_GPIO_Port GPIOB
#define HBRIDGE_SLEEP2_Pin GPIO_PIN_12
#define HBRIDGE_SLEEP2_GPIO_Port GPIOB
#define LCD11_Pin GPIO_PIN_13
#define LCD11_GPIO_Port GPIOB
#define FAN_RELAY_Pin GPIO_PIN_10
#define FAN_RELAY_GPIO_Port GPIOA
#define TEMP_SENSOR1_Pin GPIO_PIN_11
#define TEMP_SENSOR1_GPIO_Port GPIOA
#define TEMP_SENSOR2_Pin GPIO_PIN_12
#define TEMP_SENSOR2_GPIO_Port GPIOA
#define LCD4_Pin GPIO_PIN_3
#define LCD4_GPIO_Port GPIOB
#define LCD5_Pin GPIO_PIN_4
#define LCD5_GPIO_Port GPIOB
#define LCD6_Pin GPIO_PIN_5
#define LCD6_GPIO_Port GPIOB
#define LCD7_Pin GPIO_PIN_6
#define LCD7_GPIO_Port GPIOB
#define LCD8_Pin GPIO_PIN_7
#define LCD8_GPIO_Port GPIOB
#define PCB9_Pin GPIO_PIN_9
#define PCB9_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
