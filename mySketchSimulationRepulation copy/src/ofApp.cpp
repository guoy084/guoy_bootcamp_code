#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
    
    int numParticles = 10;
    
    for (int i = 0; i < numParticles; i++) {
        Particle newParticle;
        newParticle.reset();
        particles.push_back(newParticle);
    }
     poke.load("poke.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].update();
       
        //below sets up the boundary so they stay in the screen
        if(particles[i].position.x > ofGetWidth() || particles[i].position.x < 0) {
        particles[i].velocity.x *= -1;
        }
        if(particles[i].position.y > ofGetHeight() || particles[i].position.y < 0) {
            particles[i].velocity.y *= -1;
        }

    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackgroundGradient(ofColor(122, 0, 150), ofColor(0,0,0));
    for (int i = 0; i < particles.size(); i++) {
        particles[i].draw();
    }
    poke.draw(ofGetMouseX()-30,ofGetMouseY()-30,80,80);

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
    for (int i = 0; i < particles.size(); i++) {
        particles[i].toggleMode();
    }
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
