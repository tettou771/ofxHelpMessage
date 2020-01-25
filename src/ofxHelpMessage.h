#pragma once
#include "ofMain.h"

class ofxHelpMessage
{
private:
	ofxHelpMessage();
	~ofxHelpMessage();

public:
	void draw(ofEventArgs &e);
	void keyPressed(ofKeyEventArgs& key);

	// static function
	static void loadFont(string _path, float _size);
	static void addMessage(string _message, bool _newLine = true);
	static void clear();
	static void setPos(ofVec2f _pos);
	static void setPos(float _x, float _y);
	static ofVec2f getPos();
	static void setTextColor(ofColor _color);
	static ofColor getTextColor();
	static void setBackgroundColor(ofColor _color);
	static ofColor getBackgroundColor();
	static void setHelpKey(int _key);
	static char getHelpKey();
	static void setMomentary(bool _momentary);
	static bool getMomentary();
	static bool getSwhoing();

private:
	static ofxHelpMessage *singleton;
	static void singletonGenerate();

	bool initialized;
	bool showing, momentary;
	ofColor textColor, bgColor;
	ofVec2f pos;
	void updateDrawPos();
	ofVec2f drawPos;
	int helpKey;
	ofMutex mutex;

	string message;
	ofTrueTypeFont font;
};

