/*
 * batMonMgr.c
 *
 * Created: 2016-10-29 18:23:06
 *  Author: norda
 */ 

 #include <asf.h>
 #include "batMonMgr.h"
 #include "batMon.h"
 #include "errorCodes.h"

 void batMonMgrCheckVoltage( void )
 {
	uint8_t error_code;
	error_code = batMonExecute();
	
	if ( error_code != ERROR_OK )
	{
		batMonMgrTakeAction( error_code );	
	}
 }

 void batMonMgrTakeAction( uint8_t error_code )
 {
	 volatile int i = error_code;
 }

