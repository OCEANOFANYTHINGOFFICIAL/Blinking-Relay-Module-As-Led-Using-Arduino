void setup() {
  #define LED 7
  #define LED2 5
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}
void loop() {
  digitalWrite(LED, HIGH);
  delay(70);
  digitalWrite(LED, LOW);
  delay(70);
  
}
