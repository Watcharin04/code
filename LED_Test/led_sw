#define LED 17
#define SW1 16

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(SW1, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  int sensorVal = digitalRead(SW1);
  if (sensorVal == 1) {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  } else {                     // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  }                 
}
