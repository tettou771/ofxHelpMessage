# ofxHelpMessage

## Overview

This is an addon for openFrameworks.
I made it to show help message on window easily.

## Requirement

`ofxHelpMessage doesn't depend other addons.

## Tested system

- Windows 10 + VS2017 +  of0.10.1 .

I think compatible almost all versions, because it's simple addon.

## Usage

1. Add this addon.
1. Include `ofxHelpMessage.h`.
1. Put the static method `ofxHelpMessage::addMessage("Key S: save")`  in setup().
1. When program running, press '?' key to show help message.



You can use some method to change appearance and behaviour.
For example.

```cpp
// add message
ofxHelpMessage::addMessage("Key L: load");

// clear message
ofxHelpMessage::clear();

// set text color
// default value is ofColor::white
ofxHelpMessage::setColor(ofColor(255, 255, 0));

// set background color
// default value is ofColor(0, 0, 0, 100), this is black transparently
ofxHelpMessage::setBackgroundColor(ofColor(0));

// set font
// draw with ofTrueTypeFont if loaded
ofxHelpMessage::loadFont("arial.ttf", 30);

// set position
ofxHelpMessage::setPos(500, 1000);

// change show message key
// default key is '?'
ofxHelpMessage::setKey(' ');

// set show mode to momentary/toggle
ofxHelpMessage::setMomentary(false); // toggle mode

```

## Author

Toru Takata in Japan.

github: https://github.com/tettou771

link: http://tettou771.com