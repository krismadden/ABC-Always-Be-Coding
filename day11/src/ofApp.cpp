#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetWindowPosition(10, 10);
    
    ofSetCircleResolution(100);
    ofSetFrameRate(7);
    
    fallingOffsetX = -1;
    fallingOffsetY = -1;
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    float circleRadius = 10;
    int randoX = ofRandom(1, 24);
    int randoY = ofRandom(1,9);
    int time = ofGetElapsedTimef();
    ofVec3f color;
    color.set(100, 255, 219);
    
    ofTranslate(circleRadius,circleRadius);
    for(int x=0; x<ofGetWidth(); x+=2*circleRadius){
        for(int y=0; y<ofGetHeight(); y+=2*circleRadius){
            float r = sqrt(x*x*3 + y*y) * sin(ofGetElapsedTimef());
            float z = 10 * sin(r + ofGetElapsedTimef());
            
            
            if(x%randoX || y%randoY){
                color.set(78, 183, 84);
                ofSetColor(color.x, color.y, color.z);
                ofDrawCircle(x+ fallingOffsetX, y, z);
            }else{
//                color.set(205, 43, 43);
                color.set(78, 183, 84);
                ofSetColor(color.x, color.y, color.z);
                ofDrawRectangle(x, y + fallingOffsetY, z, z);
            }
            
        }
    }
    
    fallingOffsetX += 1;
    if (fallingOffsetX > 800){
        fallingOffsetX = fallingOffsetX * -1;
    }
    
    fallingOffsetY += 2;
    if (fallingOffsetY > 800){
        fallingOffsetY = fallingOffsetY * -1;
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    fallingOffsetX = -1;
    fallingOffsetY = -1;
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

