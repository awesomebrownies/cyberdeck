# Stored Journal Logs

All project work is logged within the journal. Minimal changes may stretch multiple days for one log.

## May 18: Rough Schematics

LOG-001: ~3 hours
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
- Split project into 3 sections
  - Battery Module will be a separate project
  - Central Case
  - Controllers

### Project Step Oversight

PENDING DIRECTIVES:
* Material draft, price check
  * ~35% material draft, ~20% price check
* Central case 3d model construction
  * 0% completion
  * Tool: Onshape
 
## May 19: Display troubles

LOG-002: unknown hours, most of day spent researching on and off

Effective displays land in two areas:
* Raspberry Pi specific:
  * Low resolution (1040x600 or 1280x720) touch, sometimes still expensive
* Non-touch laptop displays
  * Higher resolution no touch, more power draw

In this case, the choice I went with was a larger screen -- laptop displays -- which have upsides and downsides. One deal in particular stood out to be when finding displays, and it is an ebay listing with high ratings and a IPS 1920x1080 15.6 inch monitor. At only $35 + $15 in shipping, this is by far the best deal I've come across. The downside? Quite high power draw. It's estimated to have 15-25 watts depending on brightness.

## May 20: Material Drafting

LOG-003: 2 hours

I've been brainstorming the attachment mechanism between the main body and the controllers. Here's the plan. I'll have a ball bearing rectangle piece rotate to lock into the controller, which will have magnets. This piece will also have 3 wires routed on it. GND, 3.3v line, and a data line. These will be connected using spring loaded contacts to the wires. Since I'll have extra magnets, there's a good chance the end of the rotatable travel mode will have magnets to lock it into, as vice versa in the opposite mode. This day has been mostly just double checking all of the materials, and doing more indepth price checks. It's most likely I'll finish the rest of it tomorrow.

PENDING DIRECTIVES:
* Material draft, price check
  * ~90% material draft, ~60% price check

## May 22: Project Material Guidelines Finished

LOG-004: 2 hours

In the process of drafting the controller materials for the hand strap, I realized I had a unique design opportunity for my cyberdeck. The controllers will be designed lower than the main body for a couple of reasons.
1. Better airflow: If a fan is ever added, then airflow can move through the bottom.
2. Stand offset: Keeping the controllers back allow them to be used as a stand for propping the cyberdeck on a surface upright.

And finally my most recent idea

3. The gap inbetween the controller and main body can be used to mount the cyberdeck on the arm. Essentially, the controllers can be armstraps as well.

COMPLETED DIRECTIVE
* Material draft 100%, price check 100%

## May 26: Ideas! Stenography, Shock Cages, and a beginning to the modeling

LOG-005: 3 hours researching shock cages, 2 hours learning onshape modeling

Coming back from a hardware hackathon, I have a couple of extra ideas.

* Stenography typing at it's most basic level is typing chords. The left hand deals with beginning consonants, the thumbs vowels, and right hand ending consonants. To make it work, I would use the joysticks for the different thumb keys. This could be surprisingly effective, since the nature of capacitive keys allow predictive text. With it, I'm also considering adding a fifth capacitive sensor above the trigger module to allow for more streamlined typing

(Inspired from this post https://community.element14.com/products/raspberry-pi/f/forum/8653/case-material-to-protect-raspberry-pi-3b-and-zero-in-hostile-environment)

* Shock cages are not very common, but the nature of the cyberdeck revolves around portability. I'm designing it to survive drops that hit the handles, screen side, or back side of the deck. There are two parts to the shock absorption
  * Springs: Designed for small drops <0.75m, I can calculate the stiffness required by doing some physics. The potential energy of the shock cage is calculated using weight and height, then I equal that to the elastic potential energy of the spring x4.
  * Rubber Grommets: If a fall is greater than 0.75m, then the grommets will somewhat dampen the impact, if much less effectively.

<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/e299b58b-4ce4-4daa-9f8c-8522c6b3cbf7" width=300>
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/e299b58b-4ce4-4daa-9f8c-8522c6b3cbf7" width=300>
    </td>
  </tr>
</table>

 


 
