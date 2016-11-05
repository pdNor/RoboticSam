/*
 * motorHandle.c
 *
 * Created: 2016-11-05 22:24:02
 *  Author: norda
 */ 
#include "motorHandle.h"
#include "params/params.h"
#include "base/motorDriver.h"

motorControl motorState;

void motorHandleInit()
{
	motorState = STOP;
}

void motorHandleGetMotorState( motorControl *ptr )
{
	ptr = &motorState;
}

void motorHandleExecute()
{
		switch( motorState )
		{
			case FORWARD:
			motorDriverSetSpeed( pForward );
			break;

			case STOP:
			motorDriverSetSpeed( pStop );
			break;

			case TURN_LEFT:
			motorDriverSetSpeed( pLeftTrun );
			break;

			case TRUN_RIGHT:
			motorDriverSetSpeed( pRightTrun );
			break;

			case EMERGENCY_STOP:
			//stop and turn motor off
			break;
		}
}
