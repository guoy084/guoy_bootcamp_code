//
//  Firework.cpp
//  mySketchFirework
//
//  Created by gyy on 11/8/17.
//

#include "Firework.hpp"

void Firework::setup(int x, int y, ofColor _color) {
    

    image.load("pika.png");
    
    position.set(x, y);
    color = _color;
    
    velocity.set(ofRandom(-1.2, 1.2), ofRandom(-1, 1));
    acceleration.set(0, ofRandom(0, 0.01));
    
    alpha = 255;
}

void Firework::update() {
    velocity += acceleration;
    position += velocity;
    
    alpha--;
}

void Firework::draw() {
    ofSetColor(color.r, color.g, color.b, alpha);
//    ofDrawCircle(position, 2);
//    ofDrawRectangle(position, 1, 20);
    
    image.draw(position, 60, 60);
}
