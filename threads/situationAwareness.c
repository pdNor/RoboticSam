/*
 * situationAwareness.c
 *
 * Created: 2016-10-29 13:10:55
 *  Author: norda
 */ 
 #include <FreeRTOS.h>
 #include <asf.h>
 #include "situationAwareness.h"

 void situationAwarenessInit()
 {

 }

 void situationAwarenessMain( void *pvParameters )
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