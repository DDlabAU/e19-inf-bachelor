int ledPin = 6;
boolean ledVal = HIGH;
int currentTime;
int lastChange = 0;
int wait = 500;

void setup() {
  pinMode(ledPin, INPUT);
}

void loop() {
  currentTime = millis();

  if(currentTime > lastChange + wait) {
    if(ledVal == HIGH) {
      ledVal = LOW;
    } else {
      ledVal = HIGH;
    }
    // The above if-statement can also be accomplished with
    // this line of code:
    // ledVal = !ledVal;

    lastChange = currentTime;
  }

  digitalWrite(ledPin, ledVal);
}
