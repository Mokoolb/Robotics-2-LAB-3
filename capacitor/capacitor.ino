/*
 * This code reads an analog sensor connected to pin A0, 
 * converts the raw sensor value to a voltage, and prints the sensor value to the serial monitor. 
 */
// Define the analog input pin
const int readPin = A0;

void setup() {
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog sensor value
  float sensorValue = analogRead(readPin);

  // Convert the sensor value to a voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Print the sensor value to the serial monitor
  Serial.println(sensorValue);

  // Wait for a short time
  delay(5);
}
