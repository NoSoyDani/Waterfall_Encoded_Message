#include <ELECHOUSE_CC1101_SRC_DRV.h>
#include <RCSwitch.h>
int pin; 
RCSwitch mySwitch = RCSwitch();
void setup() {
  Serial.begin(9600);
#ifdef ESP32
pin = 2;  
#elif ESP8266
pin = 5;  
#else
pin = 6;  
#endif

  if (ELECHOUSE_cc1101.getCC1101()){       
  Serial.println("OK");
  }else{
  Serial.println("ERROR");
  }
//CC1101 
  ELECHOUSE_cc1101.Init();            
  ELECHOUSE_cc1101.setMHZ(438.0); 
  ELECHOUSE_cc1101.setDRate(1);
  mySwitch.enableTransmit(pin);
  ELECHOUSE_cc1101.SetTx();
//MESSAGE AND LOOP