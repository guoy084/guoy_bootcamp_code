//
//  Firework2.cpp
//  mySketchFirework
//
//  Created by gyy on 11/14/17.
//

#include "Firework2.hpp"

void Firework2::setup(int x, int y, ofColor _color) {
    
    
    image.load("gengar.png");
    
    position.set(x, y);
    color = _color;
    
    velocity.set(ofRandom(-1.2, 1.2), ofRandom(-1, 1));
    acceleration.set(0, ofRandom(0, 0.01));
    
    alpha = 255;
}

void Firework2::update() {
    velocity += acceleration;
    position += velocity;
    
    alpha--;
}

void Firework2::draw() {
    ofSetColor(color.r, color.g, color.b, alpha);
    //    ofDrawCircle(position, 2);
    //    ofDrawRectangle(position, 1, 20);
    
    image.draw(position, 100, 100);
}
