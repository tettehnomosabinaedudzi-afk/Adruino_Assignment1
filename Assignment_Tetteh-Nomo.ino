int startValue = 5;
int ledPin = 4;

// This function makes the LED blink 'times' number of times
void flashLED(int times) {
  // Use a for loop to repeat the blink
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("== Smart Countdown Starting ==");

  int count = startValue;
  while (count >= 1) {
    Serial.print("Count:  ");
    Serial.println(count);

    flashLED(count);

    delay(1000);
    count = count - 1;
  }

  Serial.println("== Countdown Complete ==");
}

void loop() {
  // put your main code here, to run repeatedly:
}