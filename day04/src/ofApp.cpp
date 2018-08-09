#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    float rando = ofRandom(-60.0, 60.0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    int time = int(ofGetElapsedTimef()*100);
//    ofBackground(100, sin(time)*100, 240);
    ofBackground(255, 230, 230);
    
    //    ofSetColor(0, 255, cos(time)*250);
    
    for(int x = -500; x < 6000; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -40; i<2800; i++){
            if(i%5 == 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//                //                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//            //            ofDrawCircle(i*15 + (2*-x),i, 15);
        }
    }
    //    for(int x = -500; x < 1900; x += 70){
    //        float random = ofRandom(0, 255);
    //        ofSetColor(random, random + 10, 230);
    //        for(int i = -40; i<1800; i++){
    //            if(x%3 == 0){
    //                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
    ////                ofDrawCircle(i+200 + (2*x),i, 60);
    //            }
    //            else{
    //                //ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
    //                ofDrawCircle(i*15 + (2*-x),i, 15);
    //            }
    //        }
    //    }
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


