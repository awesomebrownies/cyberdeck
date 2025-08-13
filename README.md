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
![Screenshot from 2025-06-17 21-58-55](https://github.com/user-attachments/assets/2efda4ce-ae8b-4322-828c-9a3c5b33a7dd)
*Controller Schematic*
![Screenshot from 2025-06-17 19-26-58](https://github.com/user-attachments/assets/3c258b73-d096-48af-bd67-9d11ff454e85)
*Cyberdeck Shock Cage* 
![Screenshot from 2025-06-17 19-28-15](https://github.com/user-attachments/assets/7286ffef-c5e1-44ff-914b-aecd7f85963c)
*Cyberdeck Overview*
![Screenshot from 2025-06-17 19-27-59](https://github.com/user-attachments/assets/55fd7a1e-4ec0-47d6-acad-c81c3e222f0d)

## Build

![20250813_133928](https://github.com/user-attachments/assets/54a68240-f36d-4994-bc58-3eef539d8ded)
![20250719_121929](https://github.com/user-attachments/assets/9f98e035-9722-4145-8a54-4fbb55da86a3)




# Project Bill of Materials

**Total Cost: $311.36**

## Main Body - $198.55

### Computing - $20.00

| Component                   | Quantity | Price  | Link                                                                                  | Notes             |
| --------------------------- | -------- | ------ | ------------------------------------------------------------------------------------- | ----------------- |
| Raspberry Pi 5 8GB          | 1        | -      | -                                                                                     | Already purchased |
| Top+Bottom Passive Heatsink | 1        | $7.00  | [Digikey](https://www.digikey.com/en/products/detail/edatec/ED-PI5CASE-OS/21769633)   |                   |
| 5V 5A Power Supply          | 1        | $13.00 | [Amazon](https://www.amazon.com/GeeekPi-Power-Supply-Raspberry-Adapter/dp/B0CQ2DL2RW) |                   |

### Hotswap Connectors & Controller Folding System - $13.42

| Component              | Quantity | Price | Link                                                                                                              | Notes |
| ---------------------- | -------- | ----- | ----------------------------------------------------------------------------------------------------------------- | ----- |
| 200mm Metal Rods       | 2        | $5.04 | [AliExpress](https://www.aliexpress.us/item/3256806550938490.html)                                                |       |
| Spring Loaded Contacts | 6        | $3.96 | [Digikey](https://www.digikey.com/en/products/detail/mill-max-manufacturing-corp/0906-2-15-20-75-14-11-0/1147050) |       |
| Small Magnets          | 14       | $4.42 | [Digikey](https://www.digikey.com/en/products/detail/radial-magnets-inc/8193/555328)                              |       |

### Shock Cage - $18.98

| Component | Quantity | Price | Link                                                                                                                     | Notes |
| --------- | -------- | ----- | ------------------------------------------------------------------------------------------------------------------------ | ----- |
| Springs   | 16       | $8.99 | [Amazon](https://www.amazon.com/Dianrui-Compression-Assortment-Mechanical-K-P-051-300/dp/B0BVTDP29W/143-1548753-7471335) |       |
| Grommets  | 16       | $9.99 | [Amazon](https://www.amazon.com/200PCS-Grommet-Electrical-Firewall-Assortment/dp/B08CD9KGHN)                             |       |

### Mesh Arm Mount - $5.00

| Component | Quantity | Price | Link                                                                                                                     | Notes           |
| --------- | -------- | ----- | ------------------------------------------------------------------------------------------------------------------------ | --------------- |
| Mesh      | 1        | $5.00 | [Walmart](https://www.walmart.com/ip/Polyester-Knit-Diamond-Mesh-Fabric-Black-Sheer-Polyester-63-By-The-Yard/2555999935) | Local catalogue |

### Other Components - $141.15

| Component           | Quantity | Price  | Link                                                                                            | Notes                                        |
| ------------------- | -------- | ------ | ----------------------------------------------------------------------------------------------- | -------------------------------------------- |
| Toggle Switch       | 5        | -      | -                                                                                               | Already own                                  |
| Display             | 1        | $67.50 | [eBay](https://www.ebay.com/itm/267231078389)                                                   |                                              |
| Heat Set Inserts    | 50       | $7.39  | [Digikey](https://www.digikey.com/en/products/detail/tri-star-industries-inc/M20X157C/13535373) |                                              |
| M2 Screws           | 1 set    | $12.99 | [Amazon](https://www.amazon.com/DYWISHKEY-Pieces-Stainless-Phillips-Screws/dp/B07W5J4WC9)       |                                              |
| PETG Plastic Spool  | 1        | $18.00 | -                                                                                               | For 3D printing, local printer reimbursement |
| Battery             | 1        | $26.97 | [Amazon](https://www.amazon.com/INIU-Portable-20000mAh-High-speed-Flashlight/dp/B07YPY31FL)     |                                              |
| Voltage Regulator   | 1        | $5.30  | [Digikey](https://www.digikey.com/en/products/detail/dfrobot/DFR1015/18069278)                  |                                              |
| USB-C PD Negotiator | 1        | $3.00  | [AliExpress](https://www.aliexpress.us/item/3256806276110723.html)                              |                                              |

## Controller - $112.81

### Main Components - $100.36

| Component                     | Quantity | Price  | Link                                                                                                | Notes |
| ----------------------------- | -------- | ------ | --------------------------------------------------------------------------------------------------- | ----- |
| JH16 Joystick                 | 2        | $11.01 | [AliExpress](https://www.aliexpress.com/i/3256808274885275.html)                                    |       |
| Hall Effect Sensor            | 2        | $2.30  | [Digikey](https://www.digikey.com/en/products/detail/allegro-microsystems/A1315LLHLX-5-T/8032467)   |       |
| Soft Tactile Switch           | 4        | $1.95  | [Adafruit](https://www.adafruit.com/product/3101)                                                   |       |
| Rotary Encoder                | 2        | $3.22  | [Digikey](https://www.digikey.com/en/products/detail/tt-electronics-bi/EN12-VN20AF20/2408775?gQT=2) |       |
| Mini Motor Disc               | 2        | $8.16  | [Adafruit](https://www.adafruit.com/product/1201)                                                   |       |
| Raspberry Pi Pico             | 2        | $19.16 | [Adafruit](https://www.adafruit.com/product/5544)                                                   |       |
| PCB                           | 2        | $18.89 | JLCPCB                                                                                              |       |
| I2C Distance Sensor (VL6180X) | 10       | $32.05 | [Digikey](https://www.digikey.com/en/products/detail/stmicroelectronics/VL53L4CDV0DH-1/16123783)    |       |
| Op-Amp                        | 4        | $1.52  | [Digikey](https://www.digikey.com.br/en/products/detail/texas-instruments/LMV358IDR/381251)         |       |
| Linear Regulator              | 2        | $1.36  | [Digikey](https://www.digikey.com/en/products/detail/umw/AMS1117-3-3/17635254)                      |       |
| 180kΩ SM Resistor             | 4        | $0.40  | [Digikey](https://www.digikey.com/en/products/detail/yageo/RC0603JR-07180KL/726723)                 |       |
| 330kΩ SM Resistor             | 4        | $0.40  | [Digikey](https://www.digikey.com/en/products/detail/yageo/RC0603JR-07330KL/726770)                 |       |

### Knuckle Straps - $12.45

| Component                   | Quantity | Price | Link                                                                                                                     | Notes |
| --------------------------- | -------- | ----- | ------------------------------------------------------------------------------------------------------------------------ | ----- |
| Cloth                       | 2        | $3.97 | [Walmart](https://www.walmart.com/ip/Dritz-Hanked-Non-Roll-Woven-Elastic-Black-Sewing-Fasteners/5226743025)              |       |
| Spring Loaded Cord Fastener | 2        | $3.00 | [Amazon](https://www.amazon.com/Cord-Upgraded-Fastener-Shoelaces-Drawstrings/dp/B08JTZPQRY)                              |       |
| Paracord                    | 1        | $5.48 | [Walmart](https://www.walmart.com/ip/Ozark-Trail-50-Foot-1100lbs-Paracord-Rope-100-Polyester-Black-Model-2112/311952813) |       |

---

## Cost Summary

| Section    | Cost        |
| ---------- | ----------- |
| Main Body  | $198.55     |
| Controller | $112.81     |
| **Total**  | **$311.36** |

