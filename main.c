/**
 * \file
 *
 * \brief Empty user application template
 *
 */
 #define TASK_STACKSIZE	(2048/sizeof(portSTACK_TYPE))

#include <asf.h>
#include "ASF/thirdparty/freertos/freertos-7.3.0/source/include/task.h"
#include "threads/diag.h"
#include "threads/situationAwareness.h"
#include "threads/motorControl.h"
int main (void)
{
	sysclk_init();
	board_init();
	xTaskCreate(diagMain, (const signed char * const)"Diag", TASK_STACKSIZE, NULL, 3, NULL);
	xTaskCreate(motorControlMain, (const signed char * const)"Motor", TASK_STACKSIZE, NULL, 2, NULL);
	xTaskCreate(situationAwarenessMain, (const signed char * const)"Sit", TASK_STACKSIZE, NULL, 1, NULL);
	vTaskStartScheduler();
	/* Insert application code here, after the board has been initialized. */
}
