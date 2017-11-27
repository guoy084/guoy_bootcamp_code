//
//  Particle.hpp
//  mySketchSimulationRepulation
//
//  Created by gyy on 11/15/17.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>

#include "ofMain.h"

class Particle {
    
public:
    void setup();
    void reset();
    void update();
    void draw();
    
    void toggleMode();
    
    ofPoint position;
    ofPoint velocity;
    ofPoint force;
    float drag;
    
    bool isAttracting = true;
    
    ofImage image;

};

#endif /* Particle_hpp */
