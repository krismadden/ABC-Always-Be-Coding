#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    float rando = ofRandom(-60.0, 60.0);
    int randomHorizontal[25] = {};
    for(int x = 0; x < 25; x++){
        randomHorizontal[x] = ofRandom(-300, 5700);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    int time = int(ofGetElapsedTimef()*100);
    ofBackground(100, sin(time)*100, 240);
    
    int horizontalCount = 0;
    
    // horizontal -500 --> 5900
    for(int x = -500; x < 5900; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    
    
    
    //vertical
    for(int x = 0; x < 101; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    
    
    //vertical
    for(int x = -200; x < -101; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    
    
    //vertical
    for(int x = -500; x < -401; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    //vertical
    for(int x = 700; x < 801; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    //vertical
    for(int x = 400; x < 501; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    //vertical
    for(int x = 100; x < 201; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    //vertical
    for(int x = 600; x < 701; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    //vertical
    for(int x = 200; x < 301; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    
    
    //vertical
    for(int x = -400; x < -301; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    
    
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    //vertical
    for(int x = -300; x < -201; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    //vertical
    for(int x = 800; x < 901; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    //vertical
    for(int x = 500; x < 601; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    //vertical
    for(int x = 300; x < 401; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    
    
    
    
    
    
    
    
    //vertical
    for(int x = -100; x < -1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
    }
    // horizontal -500 --> 5900 random array
    for(int x = randomHorizontal[horizontalCount]; x < randomHorizontal[horizontalCount]+1; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
        horizontalCount++;
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




