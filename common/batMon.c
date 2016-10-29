/*
* This module monitors the battry status 
*/ 
#include "batMon.h"
#include "base/adc.h"
#include "errorCodes.h"
#include <asf.h>

#define HIGH_LIM	2400
#define LOW_LIM		800
#define R1			1500
#define R2			10000
#define ADSTEP		(3.3/4096)


void batMonInit( uint16_t voltHiglim, uint16_t voltLowLim )
{
}

void batMonReadVoltage( uint16_t *voltage )
{
	*voltage = read_adc_value( ADC_CHANNEL_7 );
}

void batMonSetLimts( uint16_t high, uint16_t low )
{	
	int highVolt;
	int lowVolt;
	highVolt = ( ((R2) / (R1 + R2 ) * high) / ADSTEP );
	lowVolt = ( ((R2) / (R1 + R2 ) * low) / ADSTEP );
}

uint8_t batMonExecute()
{
	uint8_t res = ERROR_OK;
	uint16_t voltage;

	batMonReadVoltage( &voltage );

	if ( voltage < LOW_LIM )
	{
		res = ERROR_LOW_VOLTAGE;
	}
	else if ( voltage > HIGH_LIM )
	{
		res = ERROR_HIGH_VOLTAGE;
	}

	return res;
}

void batMonTakeAction()
{
	volatile int i = 1;
}
