#include <Arduino.h>
#include <vl53l4cd_class.h>
#include <Wire.h>

#define DEV_I2C Wire

#define HALL_EFFECT_PIN 1
#define XSHUT_PIN 2
#define DISTANCE_PIN_AMT 4
#define interruptPin 5

// define methods at the top
void distanceRead();
void measure();

volatile int interruptCount = 0;

VL53L4CD sensor_vl53l4cd_sat(&DEV_I2C, XSHUT_PIN);

void setup()
{
  // The controller has one DATA wire for one-way SERIAL communication.
  // Recommended RPi Pico Baud Rate is: 115200 bits/s
  Serial.begin(115200);

  // Interrupt Pin (GPIO1) used for signaling ready data
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(interruptPin, measure, FALLING);

  // Initialize XSHUT pins
  for (int i = 0; i < DISTANCE_PIN_AMT; i++)
  {
    pinMode(XSHUT_PIN + i, OUTPUT);
    // Turn off sensor
    digitalWrite(XSHUT_PIN + i, LOW);
  }
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
  int analogTrigger = analogRead(HALL_EFFECT_PIN);
  // I2C Distance Sensor
  distanceRead();

  // 10 reads per second
  delay(100);
}

void distanceRead()
{
  // Initialize I2C Bus
  DEV_I2C.begin();

  // Configure VL53L4CD satellite component.
  sensor_vl53l4cd_sat.begin();

  // Initialize VL53L4CD satellite component.
  sensor_vl53l4cd_sat.InitSensor();

  // Program the highest possible TimingBudget, without enabling the
  // low power mode. This should give the best accuracy
  sensor_vl53l4cd_sat.VL53L4CD_SetRangeTiming(200, 0);

  // Start Measurements
  sensor_vl53l4cd_sat.VL53L4CD_StartRanging();
}

void measure()
{
  interruptCount = 1;
}