int LED13 = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED13, HIGH);
  delay(400);
  digitalWrite(LED13, LOW);
  delay(400);
}