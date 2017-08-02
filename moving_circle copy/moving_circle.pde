//draw circle
//mack circle move around canvas

int xPos;
int yPos;
int zPos;
int xSpeed;
int ySpeed;

void setup(){
  size (500, 300);
  xPos = width/2;
  yPos = height/2;

  xSpeed = 1;
  ySpeed = 3;
}

void draw(){
  background(255);
  fill(255, 0, 0);
  ellipse(xPos, yPos, 50, 50);
  
  //background(120);
  fill(244, 137, 66);
  ellipse(100, 160, 50, 50);
  
  fill(244, 215, 66);
  ellipse(144, 136, 50, 50);
    
  fill(0, 0, 0);
  triangle(130, 240, xPos, yPos, 196, 260);
  
  line(xPos, yPos, 120, 75);
  
  line(135, yPos, 170, 160);

  line(xPos, 180, 175, 170);
  
  line(145, 190, xPos, 180);

  
  //set boundaries to the canvas
  //if(xPos > width){
    //xSpeed *= -1;
 
//}

   //if(xPos < 0){
     //xSpeed *= -1;
   //}
   
   if(xPos > width || xPos < 0){
     xSpeed *= -1;
   }
   
   if(yPos > height || yPos < 0){
     ySpeed *= -1;
   }
   
   xPos += xSpeed;
   yPos += ySpeed;
   

}