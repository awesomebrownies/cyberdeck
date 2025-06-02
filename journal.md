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

