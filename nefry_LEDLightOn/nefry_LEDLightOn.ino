void setup() {
  pinMode(D2, OUTPUT);
}
 
void loop() {
  Serial.println("ON");
  digitalWrite(D2, HIGH);
  delay(1000);
  digitalWrite(D2, LOW);
  Serial.println("OFF");
  delay(1000);
}
