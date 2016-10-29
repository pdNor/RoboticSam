/*
 * diag.c
 *
 * Created: 2016-10-29 13:02:52
 *  Author: norda
 */ 
 #include <FreeRTOS.h>
 #include <asf.h>
 #include "diag.h"
 #include "common/batMonMgr.h"
 #include "common/errorCodes.h"

 void diagInit()
 {

 }

 void diagMain( void *pvParameters )
 {
	const portTickType xDelay = 50 / portTICK_RATE_MS;
	uint8_t batStatus;

	for (;;)
	{
		batMonMgrCheckVoltage();
		vTaskDelay( xDelay ); 
	}
	vTaskDelete( NULL );
 }