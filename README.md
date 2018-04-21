# Wireless-Bluetooth-Notice-Board-Prototype-with-Arduino
This is an Electronic Wireless Notice Board project. We have made a prototype with an Arduino Uno Board. It has a Bluetooth Module that can be connected via a smart phone. User can send text from his/her smart phone with a simple application to show it on the display. In this case, the Bluetooth module that we used (HC-05) has an open source free android application (Bluetooth Terminal HD-05) to send serial input (text) to the Arduino board. We received the serial input and showed on a 16x2 LCD Display. It can display at most 32 characters. For a prototype, we used a smaller and simpler display to reduce the cost and complexity. We used a loop to show the outputs iteratively and it continues to show the outputs until the user wants it to stop. By giving a single character input “x”, the output iteration will stop and the display will be cleared. If then the user gives more input, it starts iterating again. Every new input will add at the end of the loop. So, the display will continue to show the inputs that user gives one by one.

Our work in details:

We used:
  - Arduino Uno Board
  - 16x2 LCD display
  - bluetooth (HC-05)
  - variable resister
  - Resisters
  - Wires
  
Procedure:

The Preset of Variable resistor is being used in order to increase or decrease the brightness or the shading effect of the LCD. The LCD’s are very good as they can be used in better way to display some of the characters including the upper case and the lower case and also the numbers.

Step 1
The center pin of the preset will go to the pin 3 of the LCD.

Step 2
For the LED of the LCD, the current limiting resistor is used and the ground pin of the LED’s will go to the ground of the arduino.

Step 3
For the preset wiring the pin 1 will go to the ground and the other pin will go to the positive. So it will give the output at the center voltage.

Step 4
We included a liquid crystal library in our Arduino code in order to write a program for LCD display.

Step 5
We connected the arduino to the computer with USB cable and upload your arduino program in the arduino board.

Step 6
We hooked up the Arduino and Bluetooth TX and RX pins.

Step 7
We downloaded the app called Bluetooth terminal from the Play Store.

References:
https://eeeproject.com/arduino-and-bluetooth/
https://www.arduino.cc/en/Reference/LiquidCrystal
https://www.arduino.cc/reference/en/language/functions/communication/serial/
