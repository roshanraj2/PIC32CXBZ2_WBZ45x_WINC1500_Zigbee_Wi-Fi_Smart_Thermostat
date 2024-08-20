/*******************************************************************************
  Thermostat Identify cluster Header File

  Company:
    Microchip Technology Inc.

  File Name:
    thIdentifyCluster.h

  Summary:
    This file contains the Thermostat Identify cluster interface.

  Description:
    This file contains the Thermostat Identify cluster interface.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef THIDENTIFYCLUSTER_H
#define THIDENTIFYCLUSTER_H

/******************************************************************************
                    Includes section
******************************************************************************/
#include <zcl/include/zclZllIdentifyCluster.h>

/******************************************************************************
                    External variable section
******************************************************************************/
extern ZCL_IdentifyClusterServerAttributes_t thIdentifyClusterServerAttributes;
extern ZCL_IdentifyClusterClientAttributes_t thIdentifyClusterClientAttributes;
extern PROGMEM_DECLARE(ZCL_IdentifyClusterCommands_t   thIdentifyCommands);

/******************************************************************************
                    Prototypes section
******************************************************************************/

/******************************************************************************
\brief initialization of  identify cluster
******************************************************************************/
void thIdentifyClusterInit(void);

/**************************************************************************//**
\brief Checks if identification process is in progress

\returns true if it is, false otherwise
******************************************************************************/
bool thIdentifyIsIdentifying(void);

/**************************************************************************//**
\brief Makes device to start identify itself

\param[in] time - identifying time in seconds
******************************************************************************/
void thIdetifyStartIdentifyingCb(uint16_t time, void (*cb)(void));

/**************************************************************************//**
\brief Starts identifying on endpoints
******************************************************************************/
void thIdentifyStart(uint16_t identifyTime);

/**************************************************************************//**
\brief Stops identifying on endpoints
******************************************************************************/
void thIdentifyStop(void);

#endif // THIDENTIFYCLUSTER_H

// eof thIdentifyCluster.h