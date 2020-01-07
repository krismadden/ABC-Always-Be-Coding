#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetWindowPosition(10, 10);
    
    ofSetCircleResolution(100);
    ofSetFrameRate(7);
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
        for(int y=0; y<ofGetWidth(); y+=2*circleRadius){
            if(x%randoX || y%randoY){
                lit = true;
            }else{
                lit = false;
            }
            if(lit){
                color.set(78, 183, 84);
            }else{
                color.set(205, 43, 43);
            }
            ofSetColor(color.x, color.y, color.z);
            //float r = sqrt(x*x*ofRandom(2, 10) + y*y - ofRandom(-110, 110));
            float r = sqrt(x*x*3 + y*y*y*y);
            float z = 10 * sin(r + ofGetElapsedTimef());
            ofDrawCircle(x, y, z);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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


