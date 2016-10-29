/*
 * motorControl.c
 *
 * Created: 2016-10-29 13:05:15
 *  Author: norda
 */ 
 #include <FreeRTOS.h>
 #include <asf.h>
 #include "threads/motorControl.h"

 void motorControlInit()
 {
 
 }

 void motorControlMain( void *pvParameters )
 {
	const portTickType xDelay = 50 / portTICK_RATE_MS;
	for (;;)
	{
		volatile int i = 0;
		for( volatile int j = 0; j < 10; j++)
		{
			j = (j+i);
			++i;
		}
		vTaskDelay( xDelay ); 
	}
	vTaskDelete( NULL );
 }