int buttonPin = 2;
int count = 0;

int buttonState = 0;
int lastButtonState = 0;

void setup() {

  // Set button pin as input
  pinMode(buttonPin, INPUT);

  // Start serial monitor
  Serial.begin(9600);
}

void loop() {

  // Read button state
  buttonState = digitalRead(buttonPin);

  // Check button press
  if (buttonState == HIGH && lastButtonState == LOW) {

    count++;

    Serial.print("Count: ");
    Serial.println(count);

    delay(300);
  }

  // Save last state
  lastButtonState = buttonState;
}