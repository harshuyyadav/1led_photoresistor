int ldrPin = A1;
int ledPin = 8;

int threshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // LED ON (dark)
  } else {
    digitalWrite(ledPin, LOW);  // LED OFF (bright)
  }

  delay(100);
}