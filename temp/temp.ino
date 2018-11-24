#include <Wire.h>



#define LM73_ADDR 0x4D



//TwoWire Wire1(1);



float readTemperature() {

  Wire.beginTransmission(LM73_ADDR);

  Wire.write(0x00); // Temperature Data Register

  Wire.endTransmission();

  

  uint8_t count = Wire.requestFrom(LM73_ADDR, 2);

  float temp = 0.0;

  if (count == 2) {

    byte buff[2];

    buff[0] = Wire.read();

    buff[1] = Wire.read();

    temp += (int)(buff[0]<<1);

    if (buff[1]&0b10000000) temp += 1.0;

    if (buff[1]&0b01000000) temp += 0.5;

    if (buff[1]&0b00100000) temp += 0.25;

    if (buff[0]&0b10000000) temp *= -1.0;

  }

  return temp;

}



void setup() {

  delay(100);

  Wire.begin(4, 5);

  // Wire1.setClock(300E3);

  Serial.begin(115200);

  Serial.println("Start !");

}



void loop() {

  Serial.print("Temperature: ");

  Serial.println(readTemperature(), 2);

  delay(500);

}
