#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);

    int numParticles = 20;
    for (int i = 0; i < numParticles; i++) {
        Firework firework;
        
        fireworks.push_back(firework);

    }
    
    int numParticles2 = 5;
    for (int i = 0; i < numParticles2; i++) {
        
        Firework2 firework2;
        
        fireworks2.push_back(firework2);
        
    }
    
    fireworksRestart();
    fireworks2Restart();
}
void ofApp::fireworksRestart() {
    ofPoint position;
    position.set(ofRandomWidth(), ofRandomHeight());
    
    ofColor fireworkColor;
    fireworkColor.setHsb(ofRandom(255), 255, 255);
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].setup(position.x, position.y, fireworkColor);
    }
}
void ofApp::fireworks2Restart() {
    ofPoint position;
    position.set(ofRandomWidth(), ofRandomHeight());
    
    ofColor fireworkColor;
   fireworkColor.setHsb(ofRandom(255), ofRandom(255), 255);
    
    for (int i = 0; i < fireworks2.size(); i++) {
        fireworks2[i].setup(position.x, position.y, fireworkColor);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].update();
    }
    if (fireworks[0].alpha <= 0) {
        fireworksRestart();
    }
    
    for (int i = 0; i < fireworks2.size(); i++) {
        fireworks2[i].update();
    }
    if (fireworks2[0].alpha <= 0) {
        fireworks2Restart();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0, 0, 0, 18);
    //ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
//    ofDrawCircle(0, 0, 0);
    
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].draw();
    }
    
    for (int i = 0; i < fireworks2.size(); i++) {
        fireworks2[i].draw();
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
