//declare canvas
//change color of canvas

//draw circle
//draw square

String printThis = "Your colors are: ";
int r = 255;
int g = 210;
int b = 200;

int radius = 50;
int xPos = 120;
int yPos = 90;

void setup(){
   size(500,  500);
   println("Your sketch is: ");
   println(width + "x" + height + "pixels");
   
   background(r, g, b);
   println(printThis);
   println(r + " " + g + " " + b);

}

void draw(){
  //noStroke();
  fill(255, 30, 0, 30);
  ellipseMode(CORNER);
  ellipse(70, 80, 100, 100);
  
  //noStroke();
  fill(244, 137, 66, 100);
  ellipseMode(CORNER);
  ellipse(167, 60, 100, 100);
  
  //noStroke();
  fill(244, 215, 66, 100);
  ellipseMode(CORNER);
  ellipse(265, 40, 100, 100);
  
  fill(0, 255, 0, 100);
  rect(330, 1, 1, 250);
  
  fill(0, 255, 0, 100);
  rect(300, 190, 90, 1);
  
  fill(0, 255, 0, 100);
  rect(300, 150, 90, 1);
  
  fill(0, 255, 0, 100);
  rect(300, 170, 90, 1);
  
  //fill(0, 0, 200, 100);
  //rectMode(CENTER);
  //rect(260, 260, 60, 70);
  
  fill(0, 0, 0, 100);
  triangle(140, 260, 200, 190, 196, 280);
}