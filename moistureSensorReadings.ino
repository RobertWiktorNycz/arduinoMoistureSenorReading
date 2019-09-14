// Code responsible for measuring water moisture
// and outputting the value to serial monitor
// The higher resistance, the more moisted water
// based on: https://create.arduino.cc/projecthub/MisterBotBreak/how-to-use-a-soil-moisture-sensor-ce769b

int sensorPin = A0;
//Analog pin with connected sensor
int sensorValue;
// Value of sensor readed by Arduino
int limit = 300;
// If sensorValue will reach the limit it will turn on the LED Light

void setup() {
  Serial.begin(9600);
  // initialize serial monitor
  pinMode(13, OUTPUT);
  // initialize output on internal LED on Arduino
}

void loop() {
  sensorValue = analogRead(sensorPin);
  // read the value of sensor
  Serial.print("Sensor Value : ");
  Serial.println(sensorValue);
  // write the "Sensor value : sensorValue" in one line in serial monitor
  if (sensorValue < limit) {
    digitalWrite(13, HIGH);
    // if value of sensorValue is smaller than limit turn on the LED

  }
  else {
    digitalWrite(13, LOW);
    // if value of sensorValue is higher than limit turn off the LED
  }
  delay (1000);
  // wait 1000 ms to repeat the code
}
