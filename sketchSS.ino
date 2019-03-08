#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 8); // RX, TX

void setup() {
  Serial.begin(19200);
  while (!Serial) {
    ; y
  }
  mySerial.begin(19200);
}

void loop() { 
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
