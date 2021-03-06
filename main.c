#include <msp430.h> 
#include "Pong.h"

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    volatile int Posx=7;
    volatile int Posy=7;
    volatile int Velx=-1;
    volatile int Vely=-1;
    char radius=5;

    ball KLball = createball(Posx, Posy, Velx, Vely, radius);
    while (1){
    	KLball = moveball(KLball);
    }

    return 0;
}
