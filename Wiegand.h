#ifndef _WIEGAND_H
#define _WIEGAND_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif



class WIEGAND {

public:
	WIEGAND();
	void begin(bool GateA, bool GateB, bool GateC);
	
	bool available();
	unsigned long getCode();
	int getWiegandType();
	int getGateActive();
	
	int D0PinA ;
	int D1PinA ;
	int D0PinB ;
	int D1PinB ;
	int D0PinC ;
	int D1PinC ;
	
	
private:
	static void ReadD0A();
	static void ReadD1A();
	static void ReadD0B();
	static void ReadD1B();	
	static void ReadD0C();
	static void ReadD1C();		
	static bool DoWiegandConversion ();
	static unsigned long GetCardId (unsigned long *codehigh, unsigned long *codelow, char bitlength);
	
	static unsigned long 	_sysTick;
	static unsigned long 	_lastWiegand;
	static int				_GateActive;	
	
	static unsigned long 	_cardTempHighA;
	static unsigned long 	_cardTempA;
	static int				_bitCountA;	
	static int				_wiegandTypeA;
	static unsigned long	_codeA;
	
	static unsigned long 	_cardTempHighB;
	static unsigned long 	_cardTempB;
	static int				_bitCountB;	
	static int				_wiegandTypeB;
	static unsigned long	_codeB;
	
	static unsigned long 	_cardTempHighC;
	static unsigned long 	_cardTempC;
	static int				_bitCountC;	
	static int				_wiegandTypeC;
	static unsigned long	_codeC;
};

#endif
