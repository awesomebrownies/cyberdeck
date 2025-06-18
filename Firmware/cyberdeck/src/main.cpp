#include <Arduino.h>

#define hallSensorPin 1
#define xShutStart 2

// put function declarations here:
void handTrack(int);

void setup()
{
  // The controller has one DATA wire for one-way SERIAL communication.
  // Recommended RPi Pico Baud Rate is: 115200 bits/s
  Serial.begin(115200);
}

// This program is tracking multiple controller inputs. Here are the sections of what it is tracking
/*
  - 1x Hall Effect Sensor: Analog Trigger
  - 4x I2C Distance Sensor: Hand Tracking
  - 2x (X, Y) Hall Effect Sensor: Analog Joystick
  - 1x Switch to 3.3V: Joystick Button
  - 2x Switch to GND: Toolhead Buttons
*/

void loop()
{
  // Hall Effect Sensor
  int analogTrigger = analogRead(hallSensorPin);
  // I2C Distance Sensor
  handTrack(4);

  Serial.print("something!");
  delay(1000);
}

void handTrack(int amount)
{
  for (int i = 0; i < amount; i++)
  {
    // Setting xShut to HIGH disables the sensor.
    }
}