int startValue = 5;
int ledPin = 13;

void flashLED(int times) {

  int flashCount = 0;

  while (flashCount < times) {

    digitalWrite(ledPin, HIGH);
    delay(200);

    digitalWrite(ledPin, LOW);
    delay(200);

    flashCount++;
  }
}

void setup() {

  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {

    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);

    delay(1000);

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {

}
