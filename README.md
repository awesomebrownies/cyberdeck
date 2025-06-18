# cyberdeck

A portable cyberdeck designed around accessories and working on the move.

***Why?***
There are many game consoles out there, like the nintendo switch, and the steamdeck. I find the integrated controllers with the screen to be awesome for portability, while lacking in quality compared to standalone controllers. So? I created a high quality controller, connected comfortably to the screen. The cyberdeck in particular, has a interesting feature I wanted to tackle for true portability. **The keyboard.** Unlike a traditional laptop, which requires to be unfolded and set on a surface, the portable cyberdeck can type on the move. Using hand tracking algorithms, it can type different keystrokes, depending on the set distance ones fingers move. The picatinny rails attach to slings further complimenting this approach.

## Key features
* **Controllers**
  * 4x Distance Sensors (Hand Tracking): Predictive Steganography & normal typing switch
  * Joystick & Scroll Wheel: Moving cursor, scrolling, zooming & typing
  * Analog Trigger + Buttons: Clicks & keybinds
* **Shock Cage**
  * Springs can withstand <0.75m drop, rubber grommets for additional acceleration damping.
* **Travel Mode**
  * Foldable controllers on both sides for compact travel
  * When deployed: Space for a cooling fan, lowered controllers used as a stand, & space between controller & main body to strap to arm for carrying
* **Picatinny Rails**:
  * Used to attach custom gadgets to the device. Ex: Gun sling, or 3d printed mount
* **Physical Toggle Switches**
  * Toggle power & battery, software modes

## How to Assemble

There are three parts to this.
* Ordering BOM
* Fabricating PCB
* 3d Printing Parts (Check CAD folder)
* Putting it together

I figure most can get the first three done, but I'll go into detail for putting it together.

### Soldering the controller board

You can *in theory* solder this by hand, but I'd recommend using a **hot plate** to put on the **distance sensors** since they have ***tiny*** pads.
* Apply solder paste
* Heat the board on the pad

Next you'll put on the **joystick** and the other **non-SMD components**, including the buttons. A tip for the buttons is to only **solder diagonal pins** (look at the adafruit page video for more details).

Lastly, the Raspberry Pi Pico will go on. You'll want to **solder** on the **female pins** before putting on the board, so if it ever gets fried, or you want to take it off for some reason, it's super easy. Once the female pins have been soldered on the board, you just have to solder the male pins on the Raspberry Pi Pico, and attach it all together!

### Final Steps

From here on out, it's just two things.

1. Flashing firmware
2. Connecting to the main board

Connecting to the main board consists of the two power cables (+5v AND GND), and the **UART half-duplex** cable. Reference your Raspberry Pi pinout for more details on which pins to connect. It may vary per model, and you may already have some of the pins connected to other components. (This cyberdeck can act as a server when not in use)

To flash the firmware, open up the Arduino IDE, and copy and paste the code from the repository to both picos.

## Showcase

*Controller PCB*
![Screenshot from 2025-06-17 19-05-33](https://github.com/user-attachments/assets/8740184a-b96f-4e45-bff1-255faea711cf)
*Controller Schematic*
![Screenshot from 2025-06-17 19-26-58](https://github.com/user-attachments/assets/3c258b73-d096-48af-bd67-9d11ff454e85)
*Cyberdeck Shock Cage* 
![Screenshot from 2025-06-17 19-28-15](https://github.com/user-attachments/assets/7286ffef-c5e1-44ff-914b-aecd7f85963c)
*Cyberdeck Overview*
![Screenshot from 2025-06-17 19-27-59](https://github.com/user-attachments/assets/55fd7a1e-4ec0-47d6-acad-c81c3e222f0d)

