#include <Wiegand.h>


#define FALSE 0			
#define TRUE  1	


WIEGAND wg;

void setup() {

  Serial.begin(9600);
  
  // PIN assigment and declaration for Arduino Mega 
  //GATE A 
  wg.D0PinA =2;   
  wg.D1PinA =3;   

  //GATE B
  wg.D0PinB =18;  
  wg.D1PinB =19;   

  //GATE C
  wg.D0PinC =20;  
  wg.D1PinC =21;  

 // Reader enable
	wg.begin(TRUE, TRUE, TRUE);  // wg.begin(GateA , GateB, GateC)

}

void loop() {
	if(wg.available())
	{
		Serial.print("Wiegand HEX = ");
		Serial.print(wg.getCode(),HEX);
		Serial.print(", DECIMAL = ");
		Serial.print(wg.getCode());
    Serial.print(", Gate= ");
    Serial.print(wg.getGateActive());
		Serial.print(", Type W");
		Serial.println(wg.getWiegandType());    
	}
}
