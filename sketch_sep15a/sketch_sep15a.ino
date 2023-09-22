#include "SevSeg.h"
SevSeg sevseg; 

void setup(){
    byte numDigits = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop(){
        delay(1000);
        sevseg.setNumber(9);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(8);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(7);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(6);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(5);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(4);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(3);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(2);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(1);
        sevseg.refreshDisplay();
        delay(1000);
        sevseg.setNumber(0);
        sevseg.refreshDisplay();
        delay(1000);
}