//ERICA GUO
//String step = "Pokemon Adventure";
PFont font;
  
import processing.sound.*;
SoundFile file;
String audioName = "pokemon.mp3";
String path;

void setup(){
  size(500, 320);
  PImage p1oak;
  p1oak = loadImage("p1oak.png");
  image(p1oak, 0, 0, 500, 320);
  path = sketchPath("pokemon.mp3");
  file = new SoundFile(this, "pokemon.mp3");
  file.play();

  
  
  font = createFont ("Courier New.ttf", 15);

  textFont(font);
  fill(0, 0, 0);
  text("Are you a boy or a girl?", 10, 50);
  text("Press (B) for boy, and (G) for girl", 10, 80);
}

void draw(){
  //background(40);
  //if(keyPressed ){
  //if(key == '0' || key == 'S'){  
  //fill(0);
  //} else {
  //  fill(200);
  //}
  //ellipse(100, 100, 100, 100);
  // }
}

void keyPressed (){
  if (key == 'b' || key == 'g' || key == 'B'){
    //step = "stage one";
    background(255);
    //println("press l for dark cave, and r for bright cave");
    PImage red;
    red = loadImage("red.png");
    image(red, 0, 0, 377, 192);

  font = createFont ("Courier New.ttf",17);

  textFont(font);
  fill(0, 0, 0);
  text("Ok it doesn't really matter", 10, 190);
  text("your name is Red anyways =_=", 10, 210);
  text("Now, press (C) to continue...", 10, 250);

} 
  if (key == 'c' || key == 'C'){
    background(255);
    PImage cave;
    cave = loadImage("cave.png");
    image(cave, 150, 0, 200, 200);
  
  font = createFont ("Courier New.ttf", 13);
  
  textFont(font);
  fill(0, 0, 0);
  text("You are on the way of becoming a Pokémon master", 10, 210);
  text("One day you walked pass a grass field,", 10, 230);
  text("you see two cave entrances in front of you. You... ", 10, 250);
  text("  ", 10, 270);
  text("Press (L) to explore the one with dim purple crystal light ", 10, 290);
  text("Press (T) to explore the bright one with torch light all over ", 10, 310);

  }
  if (key == 'l' || key == 'L'){
    background(255);
    PImage purplecave;
    purplecave = loadImage("purplecave.png");
    image(purplecave, 100, 0, 300, 200);
  
      font = createFont ("Courier New.ttf", 15);
  
  textFont(font);
  fill(0, 0, 0);
  text("It's so dark inside you can't see anything. now you...", 10, 230);
  text("Press (P) to use the flash light in your bag", 10, 270);
  text("Press (W) to walk in the dark by leaning on the wall", 10, 290);
  text("and follow the dim crystal light", 10, 310);
  
  }
  if (key == 't' || key == 'T'){
    background(255);
    PImage teamrocket;
    teamrocket = loadImage("teamrocket.png");
    image(teamrocket, 100, 0, 290, 210);
    
    font = createFont ("Courier New.ttf", 15);
  
  textFont(font);
  fill(0, 0, 0);
  text("Omg! This is Team Rocket Hideout! Now you...", 10, 230);
  text("Press (R) to RUN! Cause you only brought 1 pokemon!", 10, 270);
  text("Press (A) to Fight all of them!!", 10, 290);
    
  }
  
  if (key == 'P' || key =='p'){
    background(255);
    PImage zubats;
    zubats = loadImage("zubats.jpg");
    image(zubats, 75, 0, 350, 200);
    
    font = createFont ("Courier New.ttf", 15);
  
  textFont(font);
  fill(0, 0, 0);
  text("Flash light is too bright, it scares the zubats in", 10, 220);
  text("the cave, and they all fly towards you. now you...", 10, 240);
  text("Press (R) to RUN! Cause you only brought 1 pokemon!", 10, 270);
  text("Press (A) to Fight all of them!!", 10, 290);
  
  }
  
  if (key == 'w' || key =='W'){
    background(255);
    PImage mewtwo;
    mewtwo = loadImage("mewtwo.png");
    image(mewtwo, 140, 0, 180, 200);
    
    font = createFont ("Courier New.ttf", 13);
  
  textFont(font);
  fill(0, 0, 0);
  text("You reach the end of the cave", 10, 220);
  text("and you see the legendary pokemon MEWTWO!! He sprints toward", 10, 240);
  text("you for a battle, you only brought one pokemon today. Now...", 10, 260);
  text("Press (R) to RUN! Cause you only brought 1 pokemon!", 10, 290);
  text("Press (J) just fight with that one Pokemon!!!", 10, 310);
  
  }

  if (key == 'a' || key =='A'){
    background(255);
    PImage enda;
    enda = loadImage("enda.jpg");
    image(enda, 100, 0, 300, 200);
    
    font = createFont ("Courier New.ttf", 15);
  
  textFont(font);
  fill(0, 0, 0);
  text("Your only pokemon ran out of HP", 10, 240);
  text("You only have one pokemon with you, GAME OVER!", 10, 260);
  
  }
  
  if (key == 'r' || key =='R'){
    background(255);
    PImage endr;
    endr = loadImage("endr.png");
    image(endr, 50, 0, 400, 300);
    
    font = createFont ("Courier New.ttf", 15);
  
  textFont(font);
  fill(0, 0, 0);
  text("You escaped, now you can go home and rest! Not bad!", 10, 270);
  
  }
  
  if (key == 'j' || key =='J'){
    background(255);
    PImage endj;
    endj = loadImage("endj.png");
    image(endj, 80, 0, 330, 220);
    
    font = createFont ("Courier New.ttf", 15);
  
  textFont(font);
  fill(0, 0, 0);
  text("It's your Strongest pokemon Pikachu!", 10, 250);
  text("You defeated Mewtwo and successfully caught him!!", 10, 270);
  
  }
  
  

}
    
    