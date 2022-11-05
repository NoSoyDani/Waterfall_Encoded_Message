# Waterfall Encoded Message Using Frequency Carrier Variation
Converts text or graphics represented by square matrix into frequency variations, visible in the radio spectrum (waterfall). The script provides frequency listing and binary listing outputs.


![Image text](https://github.com/NoSoyDani/Radio_Waterfall_Encoded_Message/blob/main/hello.png)
## Supported characters
ABCDEFGHIJKLMNOPQRSTUVWXYZ \
0123456789 \
?!$%&#0
## Inputs
**Initial Frequency (Hz)**: Indicates the frequency where the letter will begin to draw. \
**Step (hz)**: Indicates the frequency jump between the current position in the matrix and the next value. \
**Message**: Define the text that you want to display in the waterfall.
## Outputs
Frequency array. \
Binary matrix. \
CC1101 arduino file (Optional): Shows the message in the cascade if a CC1101 based transmitter is used.
## My Hardware 
CC1101 Module \
ESP8266 Module 


![Image text](https://github.com/NoSoyDani/Radio_Waterfall_Encoded_Message/blob/main/hardware.jpg)
