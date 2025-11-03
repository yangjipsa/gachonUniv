#include <SoftwareSerial.h>

int btRx = 2;
int btTx = 3;

SoftwareSerial BTSerial(btTx, btRx); 

void setup() {
  Serial.begin(9600); 
  BTSerial.begin(9600); 
}

void loop() {
  if (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  
  if (Serial.available()) {
    BTSerial.write(Serial.read());
  }
}
