void setup() {
  for (int i = 8; i <= 10; ++i){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}
 
void loop() {
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(2000); 
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
}