// Define the digital output pin
const int signalPin = 9;

void setup() {
  // Set the signal pin as an output
  pinMode(signalPin, OUTPUT);
}

void loop() {
  // Set the signal pin to HIGH
  digitalWrite(signalPin, HIGH);

  // Wait for 500 microseconds, creating a 1 kHz square wave
  delayMicroseconds(500);

  // Set the signal pin to LOW
  digitalWrite(signalPin, LOW);

  // Wait for another 500 microseconds, creating a 1 kHz square wave
  delayMicroseconds(500);
}
