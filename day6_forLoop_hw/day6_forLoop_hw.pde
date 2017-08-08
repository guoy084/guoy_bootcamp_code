float ballYPos;
float ballDirection = 1.0;
int ballRadio = 100;

void setup() {
  size(255, 255); 
  noStroke();
  smooth();
  frameRate(10);
  ballYPos = height*0.2;
 
  
}

void draw() {

  //vertical gradient 
  for (int i=0; i<255; i++) {
    fill(i+2, i+1, 0);
    rect(0, i, width, 1);
  }
  
    for(int x = 0; x<= width; x+=20){
    for(int y=0; y<= height; y+=20){
      randomColor();
      ellipse(x, y, 40, 40);
      frameRate(10);
    }
 }


  if ((ballYPos+ballRadio*0.5 > height) || (ballYPos-ballRadio*0.5 < 0)){
   ballDirection *= -1;
  }
  ball(width/2, ballYPos, ballRadio);
  
  ballYPos += ballDirection;
  
}

void randomColor(){
  fill(int(random(100, 230)), int(random(255)), int(random(200,255)), 50);
  frameRate(5);
}

  
void ball(float _x, float _y, int _radio){
  int gradientDetail = 30;  // How many circles have to make in order to 
  int bright = 50;          // Darker color
  
  float gradientFactor = (255-bright)/gradientDetail;
  float radioFactor = _radio/gradientDetail;
  
  float radio = _radio;
  
  //noStroke();
  
  for (int i = 0; i < gradientDetail;i++){
    fill(bright);
    ellipse(_x,_y, radio, radio);
    frameRate(50);
    
    bright += gradientFactor;
    radio -= radioFactor;
  }
}