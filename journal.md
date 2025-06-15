---
title: "Cyberdeck"
author: "Evan Brown"
description: "Deck Featuring: Controllers (stenography), shock cage, folding travel mode, and picatinny rails"
created_at: "2025-05-18"
---

# Stored Journal Logs

All project work is logged within the journal. Minimal changes may stretch multiple days for one log.

## May 18: Rough Schematics

LOG-01: 3 hours
<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/9aa807f5-23eb-4375-a25e-6991899fc699" width="300"><br>
      <img src="https://github.com/user-attachments/assets/e780ef0a-86f4-40dc-ae3b-d6c79b99a1e9" width="300"><br>
      <img src="https://github.com/user-attachments/assets/3824a2e2-902e-4153-b755-1e23052a8c44" width="300">
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/fc75e23f-f63f-4810-9817-83af2136451c" height="600">
    </td>
  </tr>
</table>

*Project outline described above*

### Project Step Oversight

PENDING DIRECTIVES:
* Material draft, price check
  * ~35% material draft, ~20% price check
* Central case 3d model construction
  * 0% completion, Tool: Onshape
 
## May 19: Display troubles

LOG-02: 2 hours

Effective displays land in two areas:
* Raspberry Pi specific:
  * Low resolution (1040x600 or 1280x720) touch, sometimes still expensive
* (sometimes) Non-touch laptop displays
  * Higher resolution no touch, more power draw

In this case, the choice I went with a 10.5 inch touchscreen display at the cost of ~$50 on ebay. It's 1920x1280, which is perfect for programming, given the extra vertical height.
<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/42edd385-3e40-478b-9ca4-3b0dbc61e0dc" width=300>
    </td>
  </tr>
</table>

## May 20: Material Drafting

LOG-03: 2 hours

I've been brainstorming the attachment mechanism between the main body and the controllers. Here's the plan. I'll have a ball bearing rectangle piece rotate to lock into the controller, which will have magnets. This piece will also have 3 wires routed on it. GND, 3.3v line, and a data line. These will be connected using spring loaded contacts to the wires. Since I'll have extra magnets, there's a good chance the end of the rotatable travel mode will have magnets to lock it into, as vice versa in the opposite mode. This day has been mostly just double checking all of the materials, and doing more indepth price checks. It's most likely I'll finish the rest of it tomorrow.

PENDING DIRECTIVES:
* Material draft, price check
  * ~90% material draft, ~60% price check

## May 22: Project Material Guidelines Finished

LOG-04: 2 hours

In the process of drafting the controller materials for the hand strap, I realized I had a unique design opportunity for my cyberdeck. The controllers will be designed lower than the main body for a couple of reasons.
1. Better airflow: If a fan is ever added, then airflow can move through the bottom.
2. Stand offset: Keeping the controllers back allow them to be used as a stand for propping the cyberdeck on a surface upright.

And finally my most recent idea

3. The gap inbetween the controller and main body can be used to mount the cyberdeck on the arm. Essentially, the controllers can be armstraps as well.

COMPLETED DIRECTIVE
* Material draft 100%, price check 100%

<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/96420d29-c57f-4cc2-a689-0522aa2d3ed2" width=500>
    </td>
  </tr>
</table>

## May 26: Ideas! Stenography, Shock Cages, and a beginning to the modeling

LOG-05: 3 hours researching shock cages, 3 hours learning onshape modeling

Coming back from a hardware hackathon, I have a couple of extra ideas.

* Stenography typing at it's most basic level is typing chords. The left hand deals with beginning consonants, the thumbs vowels, and right hand ending consonants. To make it work, I would use the joysticks for the different thumb keys. This could be surprisingly effective, since the nature of capacitive keys allow predictive text. With it, I'm also considering adding a fifth capacitive sensor above the trigger module to allow for more streamlined typing

*Inspired from this post https://community.element14.com/products/raspberry-pi/f/forum/8653/case-material-to-protect-raspberry-pi-3b-and-zero-in-hostile-environment*

* Shock cages are not very common, but the nature of the cyberdeck revolves around portability. I'm designing it to survive drops that hit the handles, screen side, or back side of the deck. There are two parts to the shock absorption
  * Springs: Designed for small drops <0.75m, I can calculate the stiffness required by doing some physics. The potential energy of the shock cage is calculated using weight and height, then I equal that to the elastic potential energy of the spring x4.
  * Rubber Grommets: If a fall is greater than 0.75m, then the grommets will somewhat dampen the impact, if much less effectively.

<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/cbabef7b-76c7-4f8b-883a-6df3003a37fc" width=300>
    </td>
  </tr>
</table>

## May 27: Familiarization with Onshape

LOG-06: 2 hours learning onshape & modeling

I've been modeling the case to work with the eyoyo 10.5 inch touchscreen display. The specs I've found online to help me are: 232.918mm x 165.1mm x 7.874mm. I'll need to mount it using a VESA mount blueprint from the back. Since I've never worked in onshape, I've been going through the tutorial to learn the basics.

<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/997d21d1-c9eb-4ca1-8f43-7c41aa0f24b3" width=500>
    </td>
  </tr>
</table>

## May 28: Deck Main Body: Heatset inserts & sizing

LOG-07: 5 hours modeling

I've created the walls with another sketch, and have done a bit of tweaking to fit the M2 sized holes for the heatset inserts. The roadtrip has been causing quite a bit of internet trouble, meaning the rate at which I can work is heavily affected. I've also started on the footprint for the picatinny rails.

<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/51115546-f951-484e-b9f3-6431875627d5" width=500>
    </td>
  </tr>
</table>

## May 29: Picatinny Rails, bottom plate & port blocks

LOG-08: 11 hours modeling

I've finished creating the picatinny rails. This uses specific dimensioning from a sketch and I've created it with appropriate constraints if ever needed to be further modified. The rails are on a feature pattern which made it possible to easily modify the length for both sides, with a separated part allowing me to mirror it. Each of the parts I'm adding has been measured (RPi 5, toggle switches) to the correct length. I'll have 5 toggle switches on the right side, and the RPi ports on the left side. A big challenge was figuring out I was going to create a hinge for the rotation mechanism. I spent around two hours researching how to do this. My original idea was to use a bicycle/skateboard bearing, but it wasn't the right fit. Rather, just sliding a metal rod through rings slotted together kept everything secure. When I want to move it, I'll slide the rod forward which unlocks the hinges to move.


![Screenshot from 2025-05-29 15-47-14](https://github.com/user-attachments/assets/4b240ae1-c8cb-45c5-80eb-2998f9417e02)

![Screenshot from 2025-05-29 21-37-49](https://github.com/user-attachments/assets/bc3c0af6-9e24-475d-a35e-fb07bcd40677)

![Screenshot from 2025-05-29 16-16-54](https://github.com/user-attachments/assets/b84177e9-6e9a-4cd2-b760-8a059dd36538)

## May 30: Mesh Arm Mount

LOG-09: 8 hours modeling

I spent a lot of time on another idea I had. Since the cyberdeck's main theme is portability, I want to give ample opportunity to different methods of traveling. To make traveling with it arm mounted, I decided to layer a mesh on the bottom through the center. This allows the arm to sink into the deck, which has space since the shock cage springs will not be compressed. I've researched some material options and so far the best option is ballistic nylon mesh. I'm going to layer it between two pieces of plastic and secure it with a hex nut. In addition I've been tweaking the hinge design, and I've expanded it significantly to support the weight, while also adding a circular touch to make it look nicer.

![Screenshot from 2025-05-30 15-15-37](https://github.com/user-attachments/assets/83f83648-d1cd-4583-9230-d6f1d2c63635)

## May 31: Finished Mesh Arm Mount + Progress on pivot arms

Log-10: 3 hours modeling

I've been struggling a lot with adjustments of all sorts of things. This has been a learning experience on how to properly create constraints to rely only on base structures in the proper format. I've completed the bottom parts to secure the mesh layer, meaning all I need to focus on from now on are the arm mechanisms, and finally the controller.

![Screenshot from 2025-05-31 21-03-16](https://github.com/user-attachments/assets/862ebf15-d463-4d33-bee8-aa271468c1d0)

## June 1: Pivot Connection

Log-11: 3 hours modeling

I created the connection piece for the pivot point from the main body base. It was difficult to create the necessary curves as I kept getting errors. Eventually I created two Fillets separate for the top and bottom, and while it isn't flush, it worked. I also created the extra sandwich layer

![Screenshot from 2025-06-01 08-47-47](https://github.com/user-attachments/assets/494cacf6-02ed-482e-af17-6c5dc29fdc85)

![Screenshot from 2025-06-02 06-16-28](https://github.com/user-attachments/assets/9400f09e-6202-4b84-b3ea-99a9480b7db9)

## June 4: First Main Body Print

Log-12: 1 hour fine tuning

I just got one of my first prints back. This will help me immensely with finishing up the body as I'll have something physical to work with and think through the design better. I've noticed that the ports for the toggle switch are a bit too big, and so I've trimmed those down. Other than that, probably just in the next version make sure to include spring mounts.

![20250604_203743](https://github.com/user-attachments/assets/f2df62e4-ae39-4cd8-b4b8-ecab32ec2dc4)

## June 8: Magnetic Arm Mounts

Log-13: 2 hours modeling

The first iteration design for the arm mounts are finished! I've included a slot for the magnet to slide into for securing in position. My plan to unlock it will be putting torque on the mechanism through the outside wires I will place to contact the spring loaded contacts. The next step is to model the controllers, and then finally the raspberry pi 5 mount and spring system. After that, I'll start working on the controller PCB & pin layout for the entire contraption.

![Screenshot from 2025-06-08 13-25-34](https://github.com/user-attachments/assets/d279d785-1739-48a5-b9c7-857ba87fd154)

Log-14: 6 hours modeling

A lot of time was spent iterating over multiple versions of the controller. Throughout the process, I encountered many errors when using the fillet tool. I've learned from this experience that creating differentiable geometry is key to allowing the fillet tool to propogate fully. I landed on a certain design with a fillet used on most of the body with a chamfer on the edge. The expanded part of the controller that will host joysticks and buttons gradually curves further, rather than immediately setting an arc. The controller is at an angle, which was difficult to achieve, requiring two sketches. This allows the thumb to rest comfortably on the joystick. I'll need create a separate design for the back connection of the joystick due to its tilted nature.

![Screenshot from 2025-06-08 20-55-24](https://github.com/user-attachments/assets/13b85dac-f6c6-4aa7-9d4e-989b70688519)

## June 9: Redesigned Controller & Pivot Controller Mount Progress

Log-15: 11 hours modeling

I redesigned the controller again. It wasn't feeling quite right, which I found more impactful when the new design emerged with a much more usable joystick & button area at the top. Of course, the struggles don't end there. I had to learn the technique for creating a multi-directional plane on onshape, rather than a single axis one. After splitting it, the next challenge was hollowing them out. The bottom part of the joystick was easy, and it worked first try. However, when I attempted to hollow out the top part of the controller, I kept getting errors. Funnily enough, the solution is nonsensicle. Selecting a side plane next to where the error is did nothing extra, but still removed the error. 

With that out of the way, my next step was creating a connection between the two pieces. My original plan was to have two screws on the bottom. This didn't work out however, since the holes were too deep and the design becoming too complicated. I instead settled on sideways screws by expanding up and using a chamfer to tidy it up.

At this point I hit a bit of a mental roadblock. I didn't know where to begin with creating the mount piece that allows the pivot to slot into the controller. Eventually, I just had to start trying sketches, which helped remove the mental block. This leads me to my most current progress for today! I've shown it below.

![Screenshot from 2025-06-09 20-54-37](https://github.com/user-attachments/assets/500114ba-59b0-402c-95f4-b54469468a4e)

## June 10: Finished Connectors!

Log-16: 6 hours modeling

The back portion of the controller connection was finished today. I decided for simplicity to separate the connector pieces into separate parts, and then merge them together when assembling for printing. I also worked further on the rotation mechanism, and added holes for the wire to go through. The datasheet for the current spring loaded contacts I sourced were no where to be found. I found a cheaper model with a datasheet, and appropriately changed the hole depth. Each of the contacts has a through hole which can be soldered on the bottom, so that's my plan.

The next challenge was to figure out the front connection slots. This involved manipulating the back models to work with the front ones. I separated the screw parts (I'll glue the front section), and created a hole for the front pivot connection to slot into. Wooh! What a relief to be done with that part of the design. My next steps will be:
* Modeling the bar & slot pieces with a spring to provide feedback
* Designing the shock cage & spring mounts
* Creating holes for the buttons, joystick, capacitive sensors, and knuckle straps

![Screenshot from 2025-06-10 16-33-11](https://github.com/user-attachments/assets/c2ee1fc2-25ba-4947-b0bf-dad5b06e210c)
![Screenshot from 2025-06-10 20-31-43](https://github.com/user-attachments/assets/08b61b68-4a9c-4c91-8770-062e77606ce1)
![Screenshot from 2025-06-10 20-31-58](https://github.com/user-attachments/assets/116a6824-8572-43b1-8f07-140af26c9feb)
![Screenshot from 2025-06-10 20-32-24](https://github.com/user-attachments/assets/1a88eec3-cedf-4041-a37f-e8a43c38835c)

## June 11-13: Pivot Bar Locks

Log-17: 4 hours modeling, 2 hour call session (show & tell)

During the show & tell, I was recommended to switch from using capacitive touch sensors to time of flight distance sensors (like lasers) or other more accurate measurement tooling. From the research I've done, it doesn't seem feasible to get 12 laser sensors, as that'll cost $50. I've been looking more into infrared sensors, which look promising. I found this video comparing ultrasound vs infrared sensors which was quite interesting. https://www.youtube.com/watch?v=HjeKyi5tizc

I've also created the pivot bar locks, which were not too bad. I spent about 30 minutes on that, while much longer on refining the controller to pivot locking mechanism. I changed it to not be reliant on post-mirror features, allowing my to properly duplicate it on both sides. I also removed the back to front mirror, and instead used a repeater feature that allows me to create a copy in the same orientation, which is what I desired.

![Screenshot from 2025-06-13 23-48-53](https://github.com/user-attachments/assets/fbfd89cf-0327-47b5-9fd1-ab8723df4d9d)

## June 14: Shock Cage, & Controller Finished

Log-18: 12 hours modeling

All of the core components of the cyberdeck have been created! This is a huge milestone. From here on out, I will only be tweaking the model.

Here's what I did:
* Refactored controller shape for trigger
* Trigger Slot & Trigger
* Controller Stand
* Joystick and Button Holes
* Knuckle Strap Paracord Holes
* Shock Cage Design w/ plenty of holes for extra addons later
* Spring friction mount holes
* Raspberry Pi 5 mount ontop of the shock cage

![Screenshot from 2025-06-14 22-23-35](https://github.com/user-attachments/assets/6b9d5edf-2713-44e4-8493-ce59d88200cd)
![Screenshot from 2025-06-14 22-23-14](https://github.com/user-attachments/assets/4384b39d-1eee-4af5-897c-1c8164cebecc)

## June 15: Pinout Research
![s-l1600](https://github.com/user-attachments/assets/6581f485-5d1c-457d-a86c-3552d1e2ee42)
![Screenshot from 2025-06-15 13-44-06](https://github.com/user-attachments/assets/dbb63d45-6741-4082-8f43-44bf6cf21a40)


