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
    
    // horizontal
    for(int x = -500; x < 5900; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    
    //vertical
    for(int x = -500; x < 900; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    
    //editing of rendering

    //horizontal 1a -500 -> 5900
    for(int x = 500; x < 580; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //horizontal 1b -500 -> 5900
    for(int x = 2400; x < 2480; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }

    //horizontal 1d -500 -> 5900
    for(int x = 2800; x < 2880; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //vertical 1
    for(int x = 70; x < 90; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }

    //horizontal 2
    for(int x = 700; x < 900; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }

    //vertical 2
    for(int x = 100; x < 200; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }

    //horizontal 3a
    for(int x = -300; x < -210; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //horizontal 3b
    for(int x = 4000; x < 4070; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //horizontal 3c -500 -> 5900
    for(int x = 2600; x < 2680; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //vertical 3
    for(int x = 500; x < 575; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }

    //horizontal 4a -500 -> 5900
    for(int x = 500; x < 600; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //horizontal 4b -500 -> 5900
    for(int x = 5500; x < 5550; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    //horizontal 4c -500 -> 5900
    for(int x = 1500; x < 1580; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }

    //vertical 4
    for(int x = 800; x < 825; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }

    //vertical 5
    for(int x = 400; x < 450; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }

    //vertical 6
    for(int x = 0; x < 65; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 == 0){
                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
                ofDrawCircle(i+200 + (2*x),i, 60);
            }
            else{
                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
            }
        }
    }
    //horizontal 6a -500 -> 5900
    for(int x = 2600; x < 2680; x += 70){
        float random = ofRandom(0, 255);
        ofSetColor(random, random + 10, 230);
        for(int i = -20; i<800; i++){
            if(x%3 != 0){
                ofDrawCircle(i*15 + (2*-x),i, 15);
            }
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    //horizontal -500 -> 5900
//    for(int x = -500; x < -400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = -400; x < -300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = -200; x < -100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 600; x < 701; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = -100; x < 0; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 0; x < 100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 100; x < 200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 0; x < 101; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 200; x < 300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 300; x < 400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 400; x < 500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 500; x < 600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 600; x < 700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 700; x < 800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 800; x < 900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 900; x < 1000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 1000; x < 1100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 1100; x < 1200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 1200; x < 1300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1300; x < 1400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1400; x < 1500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1500; x < 1600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1600; x < 1700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1700; x < 1800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1800; x < 1900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 800; x < 901; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    
//    for(int x = 1900; x < 2000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2000; x < 2100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2100; x < 2200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2200; x < 2300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2300; x < 2400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = -300; x < -201; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 2400; x < 2500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2500; x < 2600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2600; x < 2700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2700; x < 2800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2800; x < 2900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2900; x < 3000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = -200; x < -101; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 3000; x < 3100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3100; x < 3200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3200; x < 3300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = -500; x < -401; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 3300; x < 3400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3400; x < 3500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3500; x < 3600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 200; x < 301; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 3600; x < 3700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3700; x < 3800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3800; x < 3900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3900; x < 4000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4000; x < 4100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 300; x < 401; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 4100; x < 4200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4200; x < 4300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4300; x < 4400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 700; x < 801; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 4400; x < 4500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4500; x < 4600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4600; x < 4700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4700; x < 4800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 500; x < 601; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 4800; x < 4900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4900; x < 5000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5000; x < 5100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 400; x < 501; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 5100; x < 5200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5200; x < 5300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5300; x < 5400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = -100; x < 1; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 5400; x < 5500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5500; x < 5600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = 100; x < 201; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 5600; x < 5700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    //vertical -500 to 900
//    for(int x = -400; x < -301; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 == 0){
//                //                ofDrawCircle(i+sin(time)*200 + (2*x),i, 30);
//                ofDrawCircle(i+200 + (2*x),i, 60);
//            }
//            else{
//                ofDrawCircle(i+sin(time)*200 + (2*x),i, 15);
//            }
//        }
//    }
//    for(int x = 5700; x < 5800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5800; x < 5900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
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
//    //horizontal -500 -> 5900
//    for(int x = -100; x < 0; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//
//    for(int x = 0; x < 100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 700; x < 800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 800; x < 900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 200; x < 300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 900; x < 1000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 1000; x < 1100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 100; x < 200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//    for(int x = -500; x < -400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3100; x < 3200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3200; x < 3300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = -400; x < -300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 300; x < 400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//
//    for(int x = 700; x < 800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 3000; x < 3100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 400; x < 500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = -200; x < -100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 500; x < 600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 600; x < 700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 1200; x < 1300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//    for(int x = 1700; x < 1800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1800; x < 1900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 2200; x < 2300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1900; x < 2000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2000; x < 2100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2100; x < 2200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2400; x < 2500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2500; x < 2600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2600; x < 2700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2700; x < 2800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1300; x < 1400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1400; x < 1500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4100; x < 4200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4200; x < 4300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2900; x < 3000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 3300; x < 3400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1500; x < 1600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2000; x < 2100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2300; x < 2400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 1600; x < 1700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2100; x < 2200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 3500; x < 3600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3600; x < 3700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3700; x < 3800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//    for(int x = 3400; x < 3500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2200; x < 2300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3900; x < 4000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3800; x < 3900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 4700; x < 4800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4800; x < 4900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4900; x < 5000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4300; x < 4400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5500; x < 5600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5600; x < 5700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5400; x < 5500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 1000; x < 1100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 2800; x < 2900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3500; x < 3600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 5800; x < 5900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4500; x < 4600; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 5000; x < 5100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5100; x < 5200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5700; x < 5800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4000; x < 4100; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//    for(int x = 4600; x < 4700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 5200; x < 5300; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3600; x < 3700; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 3700; x < 3800; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 4400; x < 4500; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 800; x < 900; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//    for(int x = 900; x < 1000; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//    for(int x = 5300; x < 5400; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
//
//
//    for(int x = 1100; x < 1200; x += 70){
//        float random = ofRandom(0, 255);
//        ofSetColor(random, random + 10, 230);
//        for(int i = -20; i<800; i++){
//            if(x%3 != 0){
//                ofDrawCircle(i*15 + (2*-x),i, 15);
//            }
//        }
//    }
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}


