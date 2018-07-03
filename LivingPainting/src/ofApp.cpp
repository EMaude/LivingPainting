#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//galImage.loadImage("galaxy.jpg");
	//galImage.loadImage("sunflower.jpg");
	galImage.loadImage("toronto.jpg");

	//galImage.setImageType(OF_IMAGE_GRAYSCALE);
	imgWidth = galImage.getWidth();
	imgHeight = galImage.getHeight();
	ofBackground(255);
	ofSetBackgroundAuto(false);



	scale = 0.75;
	//scale = 1;

	radius = 5;

	speed = 2;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//galImage.draw(10, 10, imgWidth * scale, imgHeight * scale);

	for (int i = 0; i < speed; i++)
	{
		int x = ofRandom(0, imgWidth);
		int y = ofRandom(0, imgHeight);

		ofSetColor(getColor(x, y));
		ofDrawCircle(x * scale, y * scale, radius * scale);

	}
	//cout << "Framerate: " << ofGetFrameRate() << endl;
}

ofColor ofApp::getColor(int x, int y)
{
	ofColor colorAtXY = galImage.getColor(x, y); //get color at position in img

	return colorAtXY;
}
