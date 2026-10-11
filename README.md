# arduino-sos-leds
My first Arduino project: 4 LEDs displaying the SOS pattern using for loops, digitalWrite(), and delay().

An SOS in morse code:
S- three short flashes, each ON for 250 ms and OFF for 250 ms. process happens 3 times 
O- three short flashes, each ON for 250 ms and OFF for 750 ms.process happens 3 times
S-finally the same pattern for S as mentioned above light glows for 250ms goes dark for 250ms for 3 times 

the circuit components-
i have used a general arduino uno r3 ,4 leds,4 resistors and connecting wires(caution-arduino should be plugged in perfectly to your device)

circuit working-
(foreshadowing that my next project would be on pulse width modulation i purposefully connected my 3 leds to 3 seperate PWM pins first)
how do we construct the circuit? (to be frank as this is my first porject i have used a breadboard not a pcb,in the future will do so).
take a resistor bend it and put it through the breadboard in such a way it spans across 3 columns of the breadboard(assume the resistor spans column1 to column3) connect a wire from pin 11(pwm pin) to resistor terminal at column1 now the terminal at column3 is free take an led,  in the led you will observe 2 legs stciking out the bent or crooked one is a ptype semiconductor and the straight one is a n type semiconductor(led is pn junction diode and for it to work it must operate in forward bias that is p type must be connected to high potential and n type to low potential)the p type will be termed the ANODE and the n type will termed CATHODE.
So now place the p type or the crooked side of the led in the EXACT SAME COLUMN as in the free terminal of the 2 column spanning resistor which we assumed was spanning column1 through 3 place p type in column 3 connect the p type to the resistor and take another wire and connect the n type to the GND pin on the Arduino so as to initiate forward bias repeat the same arrangement for the remaining 3 leds as well

programming-
this can be done manually but i have used for loops to decrease time so basically i have kept for loop for 3 cycles( a cycle means ON AND OFF 3 cycles means 3 times ON and 3 times OFF)

future improvements-
my next project is to do pwm on the leds and observe it and effectively control the output using a oscilloscope (AGAIN an oscilloscope is something i cannot access so i will be building my circuit on tinkercad)
