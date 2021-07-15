<<<<<<< HEAD
# align_canbus_modul
=======
<h1 align="center"> Align Racing 2021 </h1> <br>
<p align="center">
    <a href="http://www.alignracing.no/">
      <img alt="Align Racing UiA" title="Align Racing UiA" src="https://i.imgur.com/idweYeR.png" width="400">
    </a>
</p>

<!-- START doctoc generate TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
## Table of contents

- [Introduction](#introduction)
- [Align Racing UiA](#alignracinguia)
- [Rules for file structure](#rulesforfilestructure)
- [License](#license)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## Introduction

This is the repository for Align Racing's formula student race car's different systems.


## Align Racing UiA

<a href="http://www.alignracing.no/">Align Racing UiA (AR)</a> is a multidisciplinary student organisation at <a href="https://www.uia.no/">The University of Agder (UiA)</a>, that take part in the world’s largest yearly engineering competition; <a href="https://www.imeche.org/events/formula-student">Formula Student (FS)</a>. The organisation continuously consists of around 60 students, from a wide variety of disciplines. The competition includes developing, building, budgeting and marketing a small scale formula type racing car. AR takes this a bit further by having more focus on developing a strong organisation, open for all disciplines, that gives the members a taste of future work-life.

## ACM 2020

### Changelog:

**27.07.2019:**
- Added: Protection circuit
- Added: Atmega Clock pass-through
- Moved: External oscillator from MCP to Atmega.

**28.07.2019:**
- Changed:	Orientation of tag connector in schematics
- Added:	Connector with I/O
- Added:	Overcurrent protection with polyfuse
- Added:	Overvoltage protection with zener diode
- Added:	Reverse polarity protection with diode
- Generated:Bill of Materials
- Added:	JAE IL-WX Series 0.8mm Pitch 30 Way connector
- Added:	RGB LED
- Added: P-mosfet for reverse polarity-protection
- Positioned power management (OC, OV, RP) in a 12x4mm space.
- Started tracing

**29.07.2019:**
- Moved: Protection circuit
- Changed board layout
- Changed viasize from 0.2 to 0.3
- Routing of tracks

**30.07.2019:**
- Added 3D components
- Removed all Tracks
- Added DC/DC converter
- Changed footprint of connector
- Added LP-filter to Atmega Avcc (Datasheet page 348)

**03.08.2019:**
- Changed folder structure
- Added mounting hole in schematics
- Removed LDO
- Added 5V switching regulator
- Changed Connector footprint
- Added track and via info from JLCPCB (2-Layers)

**04.08.2019:**
- Completed BOM on Google Drive
- Added 2x 10uF input Capacitor for regulator
- Moved documentation to main

**06.10.2019:**
- Moved resistors and capacitors away from microcontrollers
- Changed from Atmega328PB to Atmega328P (NB! Need to check circuit PWM and such)
- Disconnected all output pins on the Atmega328P
- Created a ACM simulation folder
- Connected pins that are equal to Atmega328PB

### ACM 2019 - Documentation

List of possible imporvements for ACM 2019
  + Remove the Fuse as it is 20\% of the total cost. Change it to a soldered SMD fuse or a diode.
   % Soruce https://docs.google.com/spreadsheets/d/1aR7CLCnCkN-1Qp3qICuXivDnihjTyPiA6Gjus2cEa0c/edit#gid=311613741&range=R12:R13
  
  + More I/O (Especially 2 interrupt) or change board dimension ratio. (1:1) like a flight controller
  
  + Remove castellated holes, since it makes the boards less reliable, and are also harder to manufacture.  
  
  + Change the led to a larger led for easy board manufacturing.
  
  + Change I/O to only one side of the board for hot swap.
  
  + ICSP take a large amout of space, change it to pads or small programming connector.
  
  + Change the width of the PCB to X*2,54mm so that it fits standard pin layout
  
  + Remove clock capacitors as "CSTNE16M0V530000R0" got 15uF embedded. Doesn't not require external load capacitors
  
  + Add a diode with a capacitor after. ACM reset due to low voltage when high current draw.
  
  + Possibility for UART out
  
  + Add low pass filter for the A/D converter (AVcc input) (See page 14 in 328p datasheet)
  
## License
All content included in this Git repository is under the license:

Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International

You are free to:
* <b> Share </b> — copy and redistribute the material in any medium or format
* <b> Adapt </b> — remix, transform, and build upon the material

Under the following terms:
* <b> Attribution </b> — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
* <b> NonCommercial </b> — You may not use the material for commercial purposes.
* <b> ShareAlike </b> — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.
* <b> No additional restrictions </b> — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

<p align="center">
<img src="https://github.com/stianrognhaugen/AR19_ETC/blob/master/AR19_ETC_administratively/license/by-nc-sa-ccLicense.png"
     alt="License"
     width="300" />
</p>
>>>>>>> master
