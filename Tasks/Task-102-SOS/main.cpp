// You need this to use the Module Support Board
#include "../lib/uopmsb/uop_msb_1_0_0.h"
using namespace uop_msb_100;

#define WAIT_TIME_MS 500 
DigitalOut greenLED(TRAFFIC1_GRN_PIN);
Buzzer buzz;
Buttons buttons;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        //On for 500ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 1000);  //500ms

        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);

    }
}