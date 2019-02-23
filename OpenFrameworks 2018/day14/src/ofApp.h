#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void figureDraw(float x, float y);
    
        ofParameterGroup controls;
        ofxFloatSlider positionX;
        ofxFloatSlider positionY;
        ofParameter<int> test;
    
        ofParameter<int> test1;
        ofParameter<int> test2;
        ofParameter<int> test3;
        ofParameter<int> test4;
        ofParameter<int> test5;
        ofParameter<int> test6;
        ofParameter<int> test7;
        ofParameter<int> test8;

        ofxPanel gui;
    
    
        float rotateEye;
        float rotationEye;
		
};
