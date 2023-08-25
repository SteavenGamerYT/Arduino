int led = 3;
int buzzer = 4;
int led2 = 5;
int led3 = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, LOW);
  delay(720000);
  digitalWrite(buzzer, HIGH);
  delay(100);
}