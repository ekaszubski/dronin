/**
 ******************************************************************************
 *
 * @file       pios_config.h  
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      PiOS configuration header. 
 *             Central compile time config for the project.
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */


#ifndef PIOS_CONFIG_H
#define PIOS_CONFIG_H


/* Enable/Disable PiOS Modules */
//#define PIOS_INCLUDE_ADC
#define PIOS_INCLUDE_DELAY
//#define PIOS_INCLUDE_I2C
#define PIOS_INCLUDE_IRQ
#define PIOS_INCLUDE_LED
//#define PIOS_INCLUDE_PWM
//#define PIOS_INCLUDE_SERVO
//#define PIOS_INCLUDE_SPI
#define PIOS_INCLUDE_SYS
#define PIOS_INCLUDE_USART
//#define PIOS_INCLUDE_USB_COM
#define PIOS_INCLUDE_USB_HID
#define PIOS_INCLUDE_USB
//#define PIOS_INCLUDE_BMP085
#define PIOS_INCLUDE_COM
//#define PIOS_INCLUDE_SDCARD
//#define PIOS_INCLUDE_SETTINGS
//#define PIOS_INCLUDE_FREERTOS

#if !defined(PIOS_INCLUDE_FREERTOS)
#define vSemaphoreCreateBinary(a) a = 0;
#define xSemaphoreHandle int32_t
#define portBASE_TYPE int32_t
#define xSemaphoreGiveFromISR(a, b) a = 1;
#endif

#endif /* PIOS_CONFIG_H */
