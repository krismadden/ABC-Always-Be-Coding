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
    ofBackground(100, sin(time)*100, 240);
    
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
    
//    //vertical
//    for(int x = -500; x < 900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -60; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
    
    
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
    // horizontal -500 --> 5900
    for(int x = 500; x < 580; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 1500; x < 1580; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 4900; x < 5071; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    
    // horizontal -500 --> 5900
    for(int x = 10; x < 81; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 2800; x < 2881; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 2960; x < 3011; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 4128; x < 4200; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 4705; x < 4779; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = -2340; x < -2419; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = -3100; x < -3129; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 450; x < 451; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 850; x < 851; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 1350; x < 1351; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 3450; x < 3451; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 4350; x < 4351; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 4780; x < 4781; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 1650; x < 1651; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 1690; x < 1691; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 2660; x < 2661; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 2990; x < 2991; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    
    // horizontal -500 --> 5900
    for(int x = 405; x < 401; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 2980; x < 2981; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 4800; x < 4801; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = -300; x < -299; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 1390; x < 1391; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 3420; x < 3421; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 190; x < 191; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = -400; x < -329; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = -270; x < -352; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 50; x < 69; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 2220; x < 2300; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 3255; x < 3325; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 2200; x < 2380; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 4200; x < 4390; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    for(int x = 1400; x < 1471; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    for(int x = 1200; x < 1201; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
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
    // horizontal -500 --> 5900
    for(int x = 5000; x < 5021; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    // horizontal -500 --> 5900
    for(int x = 100; x < 121; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -60; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
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


