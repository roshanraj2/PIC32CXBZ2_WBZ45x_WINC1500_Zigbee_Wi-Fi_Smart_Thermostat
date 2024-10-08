/*******************************************************************************
  PHY Data Status Header File

  Company:
    Microchip Technology Inc.

  File Name:
    phyDataStatus.h

  Summary:
    This file contains the Status of PHY Data Transmission.

  Description:
    This file contains the Status codes of PHY Data Transmission.
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

#ifndef PHYDATASTATUS_H
#define PHYDATASTATUS_H

/******************************************************************************
                        Includes section.
******************************************************************************/
#include <mac_phy/mac_hwd_phy/RF231_RF212/PHY/include/at86rf233.h>

/******************************************************************************
                    Types section
******************************************************************************/
// PHY data status.
typedef enum
{
  PHY_SUCCESS_DATA_STATUS             = TRAC_STATUS_SUCCESS,
  PHY_CHANNEL_ACCESS_FAIL_DATA_STATUS = TRAC_STATUS_CHANNEL_ACCESS_FAILURE,
  PHY_NO_ACK_DATA_STATUS              = TRAC_STATUS_NO_ACK,
  PHY_DATA_PENDING_DATA_STATUS        = TRAC_STATUS_SUCCESS_DATA_PENDING,
  PHY_WAIT_FOR_ACK_DATA_STATUS        = TRAC_STATUS_WAIT_FOR_ACK,
  PHY_INVALID_DATA_STATUS             = TRAC_STATUS_INVALID,
} PHY_DataStatus_t;

#endif /* PHYDATASTATUS_H */

// eof phyDataStatus.h
