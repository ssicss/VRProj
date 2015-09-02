/**
  ******************************************************************************
  * @file    USB_Example/usb_prop.h
  * @author  MCD Application Team
  * @version V1.1.0
  * @date    20-September-2012
  * @brief   All processing related to Demo
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_PROP_H
#define __USB_PROP_H

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
typedef enum _HID_REQUESTS
{
  GET_REPORT = 1,
  GET_IDLE,
  GET_PROTOCOL,

  SET_REPORT = 9,
  SET_IDLE,
  SET_PROTOCOL
} HID_REQUESTS;

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void Hid_init(void);
void Hid_Reset(void);
void Hid_SetConfiguration(void);
void Hid_SetDeviceAddress (void);
void Hid_Status_In (void);
void Hid_Status_Out (void);
RESULT Hid_Data_Setup(uint8_t);
RESULT Hid_NoData_Setup(uint8_t);
RESULT Hid_Get_Interface_Setting(uint8_t Interface, uint8_t AlternateSetting);
uint8_t *Hid_GetDeviceDescriptor(uint16_t );
uint8_t *Hid_GetConfigDescriptor(uint16_t);
uint8_t *Hid_GetStringDescriptor(uint16_t);
RESULT Hid_SetProtocol(void);
uint8_t *Hid_GetProtocolValue(uint16_t Length);
RESULT Hid_SetProtocol(void);
uint8_t *Hid_GetReportDescriptor(uint16_t Length);
uint8_t *Hid_GetHIDDescriptor(uint16_t Length);

//***************************************************************
//** MY STUFF (M. Betz 2014)
//***************************************************************
// Methods for doing control transfers on ENdpoint 0
uint8_t *HID_GetReport_Feature(uint16_t Length);
uint8_t *HID_SetReport_Feature(uint16_t Length);

/* Exported define -----------------------------------------------------------*/
#define Hid_GetConfiguration          NOP_Process
//#define Hid_SetConfiguration          NOP_Process
#define Hid_GetInterface              NOP_Process
#define Hid_SetInterface              NOP_Process
#define Hid_GetStatus                 NOP_Process
#define Hid_ClearFeature              NOP_Process
#define Hid_SetEndPointFeature        NOP_Process
#define Hid_SetDeviceFeature          NOP_Process
//#define Hid_SetDeviceAddress          NOP_Process

#define REPORT_DESCRIPTOR                  0x22

#endif /* __USB_PROP_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/ 
