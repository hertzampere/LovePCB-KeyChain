#define LED1 0 // PB0
#define LED2 4 // PB4

void setup() {
  digitalWrite(LED2, LOW); 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(500);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(500);
}
