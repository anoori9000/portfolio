/*
 * piezo.h
 *
 *  Created on: Sep 30, 2022
 *      Author: Thomas Nowak
 *		Course: ECE453
 *		Project: Bucky Humbuckers
 */

#ifndef PIEZO_H_
#define PIEZO_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "FreeRTOS.h"
#include "task.h"
/*******************************************************************************
 * Defines
 ******************************************************************************/

/*******************************************************************************
 * Structures and Enumerations
 ******************************************************************************/

/*******************************************************************************
 * Global Variable Declarations
 ******************************************************************************/

/*******************************************************************************
 * Global Function Declarations
 ******************************************************************************/
void vPiezoTask( void * pvParameters );

#endif /* PIEZO_H_ */
