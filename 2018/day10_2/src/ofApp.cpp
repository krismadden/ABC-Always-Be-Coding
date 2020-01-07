#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetWindowPosition(10, 10);
    
    ofSetCircleResolution(100);
    ofSetFrameRate(60);
    
    randoX = ofRandom(1, 100);
    randoY = ofRandom(1,9);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    float circleRadius = 10;
    int time = ofGetElapsedTimef();
    ofVec3f color;
    color.set(100, 255, 219);
    
    ofTranslate(circleRadius,circleRadius);
    for(int x=0; x<ofGetWidth(); x+=5){
        for(int y=0; y<ofGetWidth(); y+=6){
            if(randoX < 100){
                randoX++;
            }else{
                randoX = 1;
            }
            if(randoY < 10){
                randoY++;
            }else{
                randoY = 1;
            }
            
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
            float r = sqrt(x*x + y*y);
            float z = 10 * sin(r + ofGetElapsedTimef());
            ofDrawCircle(x, y, circleRadius);
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
    randoX = ofRandom(1, 24);
    randoY = ofRandom(1,9);
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



