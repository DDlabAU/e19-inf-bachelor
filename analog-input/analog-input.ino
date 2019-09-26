int ledPin = 6;
int ledVal = 0;

int ldrPin = A0;
int ldrVal;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  ldrVal = analogRead(ldrPin);

  Serial.print("LDR value: ");
  Serial.println(ldrVal);

  int ldrVal = constrain(ldrVal, 100, 900);

  Serial.print("Constrained value: ");
  Serial.println(ldrVal);

  int mappedVal = map(constrainedVal, 100, 900, 0, 255);
  Serial.print("Value mapped from 100-900 to 0-255: ");
  Serial.println(mappedVal);

  analogWrite(ledPin, mappedVal);
}
