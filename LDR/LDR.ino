#define LDR_PIN 36
// ------------------

void setup() {

  Serial.begin(115200);

  pinMode(LDR_PIN, INPUT);

}

void loop() {
  Serial.print("Light: ");
  int bright = float(float(1024-analogRead(LDR_PIN))/1024)*100;
  Serial.println(bright);
  delay(500);

}
