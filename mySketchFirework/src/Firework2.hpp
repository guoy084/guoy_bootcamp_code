//
//  Firework2.hpp
//  mySketchFirework
//
//  Created by gyy on 11/14/17.
//

#ifndef Firework2_hpp
#define Firework2_hpp

#include <stdio.h>

#include "ofMain.h"

class Firework2 {
    
public:
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();

    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    ofColor color;
    int alpha;
    
    ofImage image;
};


#endif /* Firework2_hpp */
