#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetWindowPosition(10, 10);
    
    ofSetCircleResolution(100);
    ofSetFrameRate(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    float circleRadius = 10;
    int randoX = ofRandom(1, 11);
    int randoY = ofRandom(1,12);
    int time = ofGetElapsedTimef();
    ofVec3f color; // v1.x is 0, v1.y is 0, v1.z is 0
    color.set(100, 255, 219);
    for(int x=circleRadius; x<800; x+=2*circleRadius){
//        ofSetColor(100, 255, 219);
        for(int y=circleRadius; y<800; y+=2*circleRadius){
            if(x%randoX || y%randoY){
                lit = true;
            }else{
                lit = false;
            }
            //if(time%5 == 0){
                if(lit){
                    color.set(78, 183, 84);
                }else{
                    color.set(205, 43, 43);
                }
            //}
            ofSetColor(color.x, color.y, color.z);
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
