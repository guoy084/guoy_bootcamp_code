//
//  Firework.hpp
//  mySketchFirework
//
//  Created by gyy on 11/8/17.
//

#ifndef Firework_hpp
#define Firework_hpp

#include <stdio.h>

#include "ofMain.h"

class Firework {
    
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



#endif /* Firework_hpp */
