#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		ofColor getColor(int x, int y);
		
		float scale;
		float radius;
		int speed;
		int imgHeight;
		int imgWidth;

		ofImage galImage;
};
