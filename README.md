# Five_Buttons_Keypad

This repository defines a package gathering software elements allowing to manage a five buttons
keypad shield.

The package is designed following
[this meta-model](https://github.com/HomeMadeBots/Embedded_Software_Meta_Model) and implemented
according to [these C language
patterns](https://github.com/HomeMadeBots/C-language-patterns-for-Embedded-Software-Meta-Model).

## Content

The Five_Buttons_Keypad package gathers :
* Data_Types :
  * E_Button_Id
* Events :
  * Any_Button_Pressed
* Component_Types :
  * Five_Buttons_Keypad_Sensor

## Overview

![Overview](http://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.github.com/HomeMadeBots/Five_Buttons_Keypad/master/doc/overview.puml)

## Dependencies

![Packages dependencies](http://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.github.com/HomeMadeBots/Five_Buttons_Keypad/master/doc/dependencies.puml)

The following repository shall be retrieved :
* [Button_Events](https://github.com/HomeMadeBots/Button_Events)
* [Hardware_IO_Interfaces](https://github.com/HomeMadeBots/Hardware_IO_Interfaces)

## Use

### With the Arduino IDE

This repository shall be clone within the _libraries_ folder of the _Arduino sketchbook folder_.