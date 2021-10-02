# R3-SoftwareTask1-ZacharyCote
 
 TinkerCad Project:
 https://www.tinkercad.com/things/i1amJXL3uCu-amazing-vihelmo/editel?sharecode=FsxvaRPxg7izE0RFJaeVKqnnknEAxoxASgZOGqxm3q8

The arduino supplies the 5V to drive all the components on the breadboard.
pins a-g on the decoders are connected to pins a-g onthe seven segment display with a 1k resistor inbetween.
Pins 1-4 on each decoder are connected to four digital ports each on the arduino.
The remaining pins are set to HIGH or LOW depending on the requirments for normal opperation. 
The potentiometer is connected to the voltage supply and its output is connected to an anolog port of the arduino.

In the code, the analog port is set to be an input, while the digital ports in use are set to be outputs. The arduino reads the current output of the potentiometer and converts it to a value between 0 and 99. Then the two digit number is broken up into two components, a tens digit and a ones digit. Each digit is then converted to a binary number, which is outputted to the four digital pins for each decoder. This allows for the two digit number to be displayed as desired. 