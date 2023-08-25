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
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(2000);
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(2000);
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(2000);
}