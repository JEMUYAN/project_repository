/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    can.h
  * @brief   This file contains all the function prototypes for
  *          the can.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#ifndef __CAN_H__
#define __CAN_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern CAN_HandleTypeDef hcan;

/* USER CODE BEGIN Private defines */
extern uint8_t* CanReceiveData;
/* USER CODE END Private defines */

void MX_CAN_Init(void);

/* USER CODE BEGIN Prototypes */
HAL_StatusTypeDef CANFilterInit(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef My_can_send_msg(uint32_t id, uint8_t *msg, uint8_t len);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __CAN_H__ */

