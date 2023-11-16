#include "mbed.h"

//All Led ON when the code starts
DigitalOut redLED(PC_2,1);
DigitalOut yellowLED(PC_3,1);
DigitalOut greenLED(PC_6,1);


int main(){
    
    redLED = 1;
    redLED.read();

    while (true) {
        redLED = 0;
        yellowLED = 0;
        greenLED = 0;

        wait_us(1000000);

        redLED = 1;

        wait_us(1000000);

        yellowLED = 1;

        wait_us(1000000);

        redLED = 0;
        yellowLED =0;
        greenLED = 1;

        int count = 0;
        
        while (count<8) {
            wait_us(500000);
            greenLED = !greenLED;
            count = count + 1;
            }


    }







}






    
