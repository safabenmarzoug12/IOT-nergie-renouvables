const int ledRouge = 25;
const int ledOrange = 26;
const int ledVerte = 27;

void setup() {
  pinMode(ledRouge, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledVerte, OUTPUT);
}

void loop() {
  digitalWrite(ledRouge, HIGH);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledVerte, LOW);
  delay(5000);

  digitalWrite(ledRouge, LOW);
  digitalWrite(ledOrange, HIGH);
  digitalWrite(ledVerte, LOW);
  delay(3000);

  digitalWrite(ledRouge, LOW);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledVerte, HIGH);
  delay(5000);

  digitalWrite(ledRouge, LOW);
  digitalWrite(ledOrange, HIGH);
  digitalWrite(ledVerte, LOW);
  delay(3000);

}
