# Controller Reference Guide

Since I don't have the actual board and components, it's impossible to test the code I will create. I've linked together a network of relevant tutorials I will be using to problem shoot.

The firmware will be written in C++ using the Arduino IDE & many libraries.

## Parts

- How to create UART connections in arduino
- How to read ADC / hall effect sensors
- Distance sensor firmware & I2C protocol
- How to read buttons (Connected to GND pin)

### UART Connections in Arduino

This shouldn't be too hard to set up. I'll be using a serial connection with a certain baud rate that'll allow one way communication from the pico to the main board. The reference youtube tutorial: https://www.youtube.com/watch?v=P0O9sVRe15I

### Reading ADC values (Analog to Digital)

From what I've seen online it's as simple as this small bit of code

```
void loop() {
  int hallValue = analogRead(hallSensorPin);
}
```

### Distance sensor firmware & I2C protocol

I'll need to import vl53l4cd_api.h, and I'll be referencing this library. Since I have multiple sensors, I'll be looping individual through them and toggling on and off the xshut pins while communicating over I2C. https://github.com/stm32duino/VL53L4CD

### Reading Buttons

Since my buttons are connected to GND and a pin, I need to set the GPIO pins to PULL UP mode, and then detect the current state with the digital read function

```
pinMode(buttonPin, INPUT_PULLUP);
//and also
int buttonState = digitalRead(buttonPin);
```
