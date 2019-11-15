int ledPin = 6;
boolean ledVal = LOW;

int buttonPin;
boolean buttonVal = HIGH;
boolean prevButtonVal = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  prevButtonVal = buttonVal;
  buttonVal = digitalRead(buttonPin);

  if(buttonVal == LOW && prevButtonVal == HIGH) {
    if(ledVal == HIGH) {
      ledVal = LOW;
    } else {
      ledVal = HIGH;
    }
    // The above if-statement can also be accomplished with
    // this line of code:
    // ledVal = !ledVal;
  }
  
  digitalWrite(ledPin, ledVal);
}
