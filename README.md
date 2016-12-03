# Wiegand-V3-Library-for-all-Arduino
# Wiegand 26 and Wiegand 34 library for Arduino


The Wiegand interface is a de facto standard commonly used to connect a card reader or keypad to an electronic entry system. Wiegand interface has the ability to transmit signal over long distance with a simple 3 wires connection. This library uses interrupt pins from Arduino to read the pulses from Wiegand interface and return the code and type of the Wiegand.

## Requirements

The following are needed

Arduino uno / Mega 2560 and any compatible board should work following the interupt pin assigment :


Board									                  Digital Pins Usable For Interrupts

==================================		  ==================================

Uno, Nano, Mini, other 328-based		2, 3
Mega, Mega2560, MegaADK					2, 3, 18, 19, 20, 21
Micro, Leonardo, other 32u4-based		0, 1, 2, 3, 7
Zero									all digital pins, except 4
MKR1000 Rev.1							0, 1, 4, 5, 6, 7, 8, 9, A1, A2
Due										all digital pins
101										all digital pins 
WeMos_D1, WeMos_D1 mini,NodeMCU			all digital pins
ESP8266									all digital pins 


Wiegand RFID Reader.

for ARDUINO UNO :

		Reader 1 :
    
		DATA0 of Wiegand connects to Arduino PIN 2 
		DATA1 of Wiegand connects to Arduino PIN 3

		Reader 2 : NOT USED

		Reader 3 : NOT USED

for ARDUINO MEGA2560 :

		Reader 1 :

		DATA0 of Wiegand connects to Arduino PIN 2 
		DATA1 of Wiegand connects to Arduino PIN 3

		Reader 2 :

		DATA0 of Wiegand connects to Arduino PIN 21 
		DATA1 of Wiegand connects to Arduino PIN 20

		Reader 3 :

		DATA0 of Wiegand connects to Arduino PIN 19 
		DATA1 of Wiegand connects to Arduino PIN 18

Installation Follow the instruction for library installation in Arduino.cc web site.



REV 3.0 
Adding compatibility to all the arduino board 

REV 2.0 

Bug fix on reader 3 

Add the possibility to select which gate need to be active passing parameters to :  wg.begin(GateA, GateB , GateC);






Library come from original library developed from http://www.monkeyboard.org

original library can download from :

https://github.com/monkeyboard/Wiegand-Protocol-Library-for-Arduino

Thanks

Francesco Uggetti

*This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.*

*This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.*
