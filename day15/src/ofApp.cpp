//--------------------------------------------------------------
// @title:      ??
// @shortcuts:  <g> for showing/hiding the gui
//              <s> for taking a screenshot
// @author:     kris madden
// @date:       09/08/2018
//--------------------------------------------------------------

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // font
    font.load("fonts/AvenirNext-Medium-06.ttf", 120, false, false, true);
    
    // GUI
//    folder1 = new ofxDatGuiFolder("folder 1", ofColor::fromHex(0xFFD00B));
    show_gui = true;
    gui = new ofxDatGui(20, 40); //gui->setPosition(20, 40);
    gui->addLabel("Background Color Adjuster");
    
    
    // parameters
    GUI_red.set("Background Red", 155, 0, 255);
    GUI_green.set("Background Green", 240, 0, 255);
    GUI_blue.set("Background Blue", 20, 0, 255);
    GUI_circle_resolution.set("Circle Resolution", 20, 3, 115);
    GUI_num_circles.set("Number of Circles", 1, 0, 100);
    GUI_circle_size.set("Circle Size", 10, 1, 50);
    
    
    randomize();

    
    
    // sliders
    gui->addSlider(GUI_red);
    gui->addSlider(GUI_green);
    gui->addSlider(GUI_blue);
    gui->addSlider(GUI_circle_resolution);
    gui->addSlider(GUI_circle_size);
    gui->addSlider(GUI_num_circles);
    gui->addColorPicker("color picker", ofColor::fromHex(0x29009E));
    gui->addButton("Randomize!");
    
    circle = ofColor::fromHex(0x29009E);
    

    
    // events
    gui->onSliderEvent(this, &ofApp::onSliderEvent);
    gui->onColorPickerEvent(this, &ofApp::onColorPickerEvent);
    gui->onButtonEvent(this, &ofApp::onButtonEvent);

    
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(GUI_red, GUI_blue, GUI_green);
    
    ofSetColor(circle);
    for(int i=0; i<GUI_num_circles; i++){
//        float random_x = ofRandom(0, ofGetWidth());
//        float random_y = ofRandom(0, ofGetHeight());
//        float random_radius = ofRandom(1, 250);
//        ofDrawCircle(random_x,random_y,random_radius);
        ofDrawCircle(circleRandoms[i][0],circleRandoms[i][1],circleRandoms[i][2]*GUI_circle_size);
    }
    ofSetCircleResolution(GUI_circle_resolution);

}

//--------------------------------------------------------------

void ofApp::onColorPickerEvent(ofxDatGuiColorPickerEvent e)
{
//    cout << "the picker was set to: " << e.color << endl;
    ofSetBackgroundColor(e.color);
    
    circle = e.color;
}

//--------------------------------------------------------------

void ofApp::onSliderEvent(ofxDatGuiSliderEvent e){
    // cout << e.target->getName() << " : " << e.value << endl;
}

//--------------------------------------------------------------

void ofApp::keyPressed(int key){
    switch (key){
        case 'g': {
            show_gui = !show_gui;
            gui->setVisible(show_gui);
            break;
        }
        case 's': {
            ofImage grab;
            grab.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
            grab.save("screenshot_" + ofToString(ofGetFrameNum()) + ".png");
            break;
        }
    }
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

//--------------------------------------------------------------

void ofApp::randomize(){
    for(int i=0; i<100; i++){
        float random_x = ofRandom(0, ofGetWidth());
        float random_y = ofRandom(0, ofGetHeight());
        float random_radius = ofRandom(1, 250);
        
        circleRandoms[i][0] = ofRandom(0, ofGetWidth());
        circleRandoms[i][1] = ofRandom(0, ofGetHeight());
        circleRandoms[i][2] = ofRandom(1.0, 25.0);
    }
}

//--------------------------------------------------------------

void ofApp::onButtonEvent(ofxDatGuiButtonEvent e)
{
//    cout << e.target->getLabel() << " was clicked!"  << endl;
    randomize();
}
