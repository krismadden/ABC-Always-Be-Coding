#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofSetWindowPosition(10, 10);
    
    ofSetCircleResolution(100);
    ofSetFrameRate(7);
    

    for(int i = 0; i<11; i++){
        fallingOffsetCol[i] = 1;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    float circleRadius = 10;
//    int randoX = ofRandom(1, 24);
//    int randoY = ofRandom(1,9);
    int randoCol = ofRandom(1,10);
    int time = ofGetElapsedTimef();
    ofVec3f color;
    color.set(100, 255, 219);
    
    ofTranslate(circleRadius,circleRadius);
    for(int x=0; x<ofGetWidth(); x+=2*circleRadius){
        for(y=0; y<ofGetHeight(); y+=2*circleRadius){
            r = sqrt(x*x*3 + y*y) * sin(ofGetElapsedTimef());
            z = 10 * sin(r + ofGetElapsedTimef());
        }
        
        randoCol = ofRandom(2,11);
        color.set(78, 183, 84);
        ofSetColor(color.x, color.y, color.z);
        ofDrawRectangle(x, y + fallingOffsetCol[randoCol], z, z);
        
        
        fallingOffsetCol[2] += 0.5;
        if (fallingOffsetCol[2] > 800){
            fallingOffsetCol[2] = fallingOffsetCol[2] * -1;
        }
        fallingOffsetCol[3] += 1;
        if (fallingOffsetCol[3] > 800){
            fallingOffsetCol[3] = fallingOffsetCol[3] * -1;
        }
        fallingOffsetCol[4] += 1.5;
        if (fallingOffsetCol[4] > 800){
            fallingOffsetCol[4] = fallingOffsetCol[4] * -1;
        }
        fallingOffsetCol[5] += 2;
        if (fallingOffsetCol[5] > 800){
            fallingOffsetCol[5] = fallingOffsetCol[5] * -1;
        }
        fallingOffsetCol[6] += 2.75;
        if (fallingOffsetCol[6] > 800){
            fallingOffsetCol[6] = fallingOffsetCol[6] * -1;
        }
        fallingOffsetCol[7] += 3.35;
        if (fallingOffsetCol[7] > 800){
            fallingOffsetCol[7] = fallingOffsetCol[7] * -1;
        }
        fallingOffsetCol[8] += 5;
        if (fallingOffsetCol[8] > 800){
            fallingOffsetCol[8] = fallingOffsetCol[8] * -1;
        }
        fallingOffsetCol[9] += 10;
        if (fallingOffsetCol[9] > 800){
            fallingOffsetCol[9] = fallingOffsetCol[9] * -1;
        }
        fallingOffsetCol[10] += 15;
        if (fallingOffsetCol[10] > 800){
            fallingOffsetCol[10] = fallingOffsetCol[10] * -1;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//    fallingOffsetX = -1;
//    fallingOffsetY = -1;
    
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


