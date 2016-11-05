/*
 * motorHandle.h
 *
 * Created: 2016-11-05 22:24:17
 *  Author: norda
 */ 


#ifndef MOTORHANDLE_H_
#define MOTORHANDLE_H_

typedef enum{
	STOP,
	FORWARD,
	TURN_LEFT,
	TRUN_RIGHT,
	EMERGENCY_STOP,
} motorControl;

void motorHandleExecute( void );
void motorHandleInit( void );
void motorHandleGetMotorState( motorControl *ptr );


#endif /* MOTORHANDLE_H_ */