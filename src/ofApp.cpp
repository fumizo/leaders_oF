#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //円を100個の点によって書く_滑らか
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    ofSetColor(0, 0, 0, 50);
    ofSetLineWidth(1);
    
    for (int i = 1; i <= 28; i++) {
        ofDrawLine(0, (ofGetWidth()/28) * i, ofGetWidth(), (ofGetWidth()/28) * i);
        ofDrawLine((ofGetWidth()/28) * i, 0, (ofGetWidth()/28) * i, ofGetHeight());
    }

    int disX = 1;
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 100);
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofNoFill();
    ofSetColor(ofColor::fromHsb(ofMap(angle, 0, 360, 0, 255), 255, 255));
    ofDrawCircle(0, 0, radius);
    
    ofFill();
    ofDrawCircle(0, 0, radius / 4);
    
    ofDrawLine(0, 0, mouse_x, mouse_y);
    ofSetColor(0, 0, 0, 130);
    ofDrawLine(mouse_x, -ofGetHeight(), mouse_x, ofGetHeight());
    ofDrawLine(-ofGetWidth(), mouse_y, ofGetWidth(), mouse_y);
    
    
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    mouse_x = x - ofGetWidth()/2;
    mouse_y = y - ofGetHeight()/2;
    
    vec.set(mouse_x, mouse_y);
    radius = vec.length();
    angle = ofMap(vec.angle(ofVec2f(-radius, 0)), -180, 180, 0, 360);

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
