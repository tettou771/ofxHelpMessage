# ofxHelpMessage

## Overview

This is an addon for openFrameworks.
I made it to show help message on window easily.

## Requirement

ofxHelpMessage doesn't depend other addons.

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
ofxHelpMessage::addMessage("HELP (dummy message)");
ofxHelpMessage::addMessage("Key S: Save");
ofxHelpMessage::addMessage("Key L: Load");

// clear message
//ofxHelpMessage::clear();

// set text color
// default: ofColor::white
ofxHelpMessage::setTextColor(ofColor(255, 255, 0));

// set background color
// default: ofColor(0, 0, 0, 150) this is black transparently
ofxHelpMessage::setBackgroundColor(ofColor(0));

// set font
// draw with ofTrueTypeFont if loaded
ofxHelpMessage::loadFont("arial.ttf", 30);

// set position
// default: (10, 10)
ofxHelpMessage::setPos(500, 500);

// change show message key
// default: '?'
ofxHelpMessage::setHelpKey(' ');

// set show mode to momentary/toggle
// default: true (momentary)
ofxHelpMessage::setMomentary(false); // toggle mode

```

## Author

Toru Takata in Japan.

github: https://github.com/tettou771

link: http://tettou771.com