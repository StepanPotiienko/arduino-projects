int oneSecondDelay = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(oneSecondDelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(oneSecondDelay);
}