/*
 * motorControl.c
 *
 * Created: 2016-10-29 13:05:15
 *  Author: norda
 */ 
 #include <FreeRTOS.h>
 #include <asf.h>
 #include "threads/motorControl.h"
 #include "common/motorHandle.h"

 void motorControlInit()
 {
 
 }

 void motorControlMain( void *pvParameters )
 {
	const portTickType xDelay = 50 / portTICK_RATE_MS;
	for (;;)
	{
		motorHandleExecute();
		vTaskDelay( xDelay ); 
	}
	vTaskDelete( NULL );
 }