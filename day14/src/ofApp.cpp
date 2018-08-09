#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    controls.setName("controls");
//    controls.add(test.set("test", 0, 0, 1000));
    
//    controls.add(test1.set("1", 100, 0, 1000));
//    controls.add(test2.set("2", 50, 0, 1000));
//    controls.add(test3.set("3", 110, 0, 1000));
//    controls.add(test4.set("4", 60, 0, 1000));
//    controls.add(test5.set("5", 190, 0, 1000));
//    controls.add(test6.set("6", 110, 0, 1000));
//    controls.add(test7.set("7", 200, 0, 1000));
//    controls.add(test8.set("8", 60, 0, 1000));
    

//    controls.add(test3.set("3", 110, -50, 150));
//    controls.add(test4.set("4", 60, -50, 150));
//    controls.add(test5.set("5", 5, -15, 15));
//    controls.add(test6.set("6", 5, -15, 15));
//    controls.add(test7.set("7", 0, -30, 30));
//    controls.add(test8.set("8", 24, -30, 30));
    
    gui.setup();
    gui.setup(controls);
    gui.add(positionX.setup("X", 0.0, 0.0, 30.0));
    gui.add(positionY.setup("Y", 0.0, 0.0, 30.0));
    
    rotateEye = 0.0;
    rotationEye = 0.0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    rotationEye = rotationEye + rotateEye;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    float r = ofMap(sin( ofGetElapsedTimef()*3),-1,1,0,50);
    float g = ofMap(sin( ofGetElapsedTimef()*3),-1,1,0,50);
    float b = ofMap(sin( ofGetElapsedTimef()*3),-1,1,0,50);
    ofSetBackgroundColor(r,g,b);
    
    
    gui.draw();
    
    
    ofSetColor(255,10,40);
    float time = ofGetElapsedTimef();
    for (int i = 0; i < 5000; i++){
        float width = ofGetWidth();
        float height = ofGetHeight();
        float speed = 0.1;
        float posX = i * positionX;
        float posY = i * positionY;
        
        
        float x = width * ofNoise(time * speed + posX);
        float y = height * ofNoise(time * speed + posY);
//        ofDrawCircle(x, y, 23);
        figureDraw(x,y);
    }
    
    ofRotateZ(0);
    
    ofDrawBitmapString("time: " + ofToString(ofGetElapsedTimef()), 30, 30);
}

void ofApp::figureDraw(float x, float y){
    int random = ofRandom(0,60);
//    ofSetColor(255,random,40);
    ofSetColor(255,255,255);
    ofDrawCircle(x, y, 24);

    rotateEye = random;
    
//    eyeball lines
    ofSetColor(255,0,0);
    ofNoFill();
    ofDrawBezier(x, y, x-17, y-30, x-13, y-2, x-22, y-10);
    ofDrawBezier(x, y, x-1, y+30, x-12, y+5, x-6, y+24);
    ofDrawBezier(x, y, x+39, y+17, x+4, y-8, x+24, y+0);
    ofDrawBezier(x, y, x+12, y-28, x-12, y-5, x+0, y-24);
    ofDrawBezier(x, y, x+12, y+39, x+2, y-6, x+15, y+19);
    ofDrawBezier(x, y, x-33, y-4, x-6, y+5, x-20, y+14);
    ofDrawBezier(x+15, y-19, x+13, y+1, x+7, y-15, x, y);
    ofFill();
    
    //pupill
    ofSetColor(random,random,random);
    ofDrawCircle(x, y, 12);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(rotationEye);
    
    //startrek symbol (kinda?)
//    ofSetColor(255,0,0);
//    ofBeginShape();
//    ofVertex(600, 100);
//    ofVertex(650, 200);
//    ofVertex(600, 150);
//    ofVertex(550, 200);
//    ofEndShape(true);
    
    ofNoFill();
//    ofDrawBezier(100, 50, 110, 60, 190, 110, 200, 60);
//    ofDrawBezier(x, y, x+test3, y+test4, x+test5, y+test6, x+test7, y+test8);
//    ofDrawBezier(x+test7, y+test8, x+test3, y+test4, x+test5, y+test6, x, y);
    ofFill();
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
