/*
 * batMon.h
 *
 * Created: 2016-10-29 15:26:55
 *  Author: norda
 */ 

#include <asf.h>
#ifndef BATMON_H_
#define BATMON_H_
void batMonInit( uint16_t voltHiglim, uint16_t voltLowLim );
void batMonReadVoltage( uint16_t *voltage );
void batMonSetLimts( uint16_t high, uint16_t low );
uint8_t batMonExecute( void );




#endif /* BATMON_H_ */