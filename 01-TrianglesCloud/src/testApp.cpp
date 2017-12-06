#include "testApp.h"

vector<ofPoint> vertices;
vector<ofColor> colors;
int nTri;		//The number of triangles
int nVert;	//The number of the vertices equals nTri * 3

int nEgg;

//--------------------------------------------------------------
void testApp::setup() {
    clefairy.load("clefairy.png");
    chansey.load("chansey.png");
    charmander.load("charmander.png");
    gengar.load("gengar.png");
    squirtle.load("squirtle.png");
    poliwag.load("poliwag.png");
    egg1.load("egg1.png");
    egg2.load("egg2.png");
    love.load("love.png");
    luxe.load("luxe.png");
    premier.load("premier.png");
    mouse.load("mouse.png");
    
    nTri =1500;			//The number of the triangles
	nVert= nTri * 3;		//The number of the vertices

	float Rad = 300;	//The sphere's radius
	float rad = 25;	//Maximal triangle's “radius”
	//(formally, it's the maximal coordinates'
	//deviation from the triangle's center)

	//Fill the vertices array
	vertices.resize( nVert );		//Set the array size
	for (int i=0; i<nTri; i++) {	//Scan all the triangles
		//Generate the center of the triangle
		//as a random point on the sphere

		//Take the random point from
		//cube [-1,1]x[-1,1]x[-1,1]	
		ofPoint center( ofRandom( -1, 1 ),
			ofRandom( -1, 1 ),
			ofRandom( -1, 1 ) );
		center.normalize(); //Normalize vector's length to 1
		center *= Rad;	//Now the center vector has
		//length Rad

		//Generate the triangle's vertices
		//as the center plus random point from
		//[-rad, rad]x[-rad, rad]x[-rad, rad]
		for (int j=0; j<3; j++) {
			vertices[ i*3 + j ] =
				center + ofPoint( ofRandom( -rad, rad ),
				ofRandom( -rad, rad ),  
				ofRandom( -rad, rad ) );
		}
	}

    //Fill the array of triangles' colors
    colors.resize( nTri );
    for (int i=0; i<nTri; i++) {
        //Take a random color from black to red
        colors[i] = ofColor(255,255,255);
    }
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    //Enable z-buffering
	glEnable( GL_DEPTH_TEST );

	//Set a gradient background from white to gray
	//for adding an illusion of visual depth to the scene
    ofBackgroundGradient(ofColor(255, 225, 142), ofColor(255, 96, 96));
    ofDrawLine(512, 0, 512, 150);
    ofDrawCircle(512, 150, 24);
    
	ofPushMatrix();	//Store the coordinate system

	//Move the coordinate center to screen's center
	ofTranslate( ofGetWidth()/2, ofGetHeight()/2, 0 );

    
	//Calculate the rotation angle
	float time = ofGetElapsedTimef();	//Get time in seconds
	float angle = time * 50;			//Compute angle. We rotate at speed 10 degrees per second
	ofRotate( angle, .4, 1, .5 );			//Rotate the coordinate system along y-axe

	//Draw the triangles
	for (int i=0; i<nTri; i++) {
		ofSetColor(ofRandom(10,255),ofRandom(100,254),ofRandom(255,255),127);	//Set color
        ofTriangle( vertices[ i*3 ],
			vertices[ i*3 + 1 ],
			vertices[ i*3 + 2 ]); //Draw triangle
	}
    
    ofSetColor(255, 255, 255);
    
    clefairy.draw(position+80,80,80);
    chansey.draw(position,80,80);
    charmander.draw(100,-100,-50,80,80);
    gengar.draw(position-80,80, 80);
    squirtle.draw(position-160, 80, 80);
    poliwag.draw(-150,30,80,80,80);
    egg1.draw(50, -200,20,80,80);
    egg2.draw(-50, 120,40,80,80);
    love.draw(-190, 100, -60, 70, 70);
    luxe.draw(20,-100,100,70,70);
    premier.draw(150,-20,-80,80,80);
    
    
	ofPopMatrix();	//Restore the coordinate system
    mouse.draw(ofGetMouseX()-200,ofGetMouseY()-200,400,ofGetWidth()/4,ofGetHeight()/4);

}


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
