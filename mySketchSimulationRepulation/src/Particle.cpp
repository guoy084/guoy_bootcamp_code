//
//  Particle.cpp
//  mySketchSimulationRepulation
//
//  Created by gyy on 11/15/17.
//

#include "Particle.hpp"

//void Particle::setup(){
//    image.load("jigg.png");
//}

void Particle::reset() {
    image.load("gengar.png");
    
    position.x = ofRandomWidth();
    position.y = ofRandomHeight();
    
    velocity.x = ofRandom(-3.9, 3.9);
    velocity.y = ofRandom(-3.9, 3.9);
    
    drag = ofRandom (0.95, 0.998);
    
    force = ofPoint(0,0);
}

void Particle::update() {
   if (isAttracting) {
       
       ofPoint attractPoint = ofPoint(ofGetMouseX(), ofGetMouseY());
    
       force = attractPoint - position;
       force.normalize();
    
       velocity *= drag;
       velocity += force *.6;
       position += velocity;
       
   } else {
               ofPoint attractPoint = ofPoint(ofGetMouseX(), ofGetMouseY());
               force = attractPoint - position;
       
               float distance = force.length();
               force.normalize();
       
               if (distance < 150) {
                   velocity -= force * 0.6;
               }
           }
    
           position += velocity;
    
}

void Particle::draw() {
    // i can change this to my image here
    //ofDrawCircle(position.x, position.y, 2.0);
    image.draw(position, 60, 60);


    
    if (isAttracting) {
        //ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));

        //ofSetColor(ofRandom(255), 63, 180);

    } else {
        
        ofSetColor(208, ofRandom(255), ofRandom(255));
    }
    
    //ofDrawCircle(position.x, position.y, 2.0);
}

void Particle::toggleMode() {
isAttracting = !isAttracting;
reset();
}











