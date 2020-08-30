#include <Arduboy2.h>

#include "src/fonts/Font4x6.h"

Arduboy2Base arduboy;
Font4x6 font = Font4x6();

const uint8_t PROGMEM sprites[] =
{

0xf0, 0x0c, 0x20, 0xc0, 0x06, 0xf8, 0x02, 0x3c, //1   grass
0x40, 0x90, 0x24, 0x88, 0xe2, 0xf4, 0xf1, 0xfa, //2   sun 0
0xfa, 0xf1, 0xf4, 0xe2, 0x88, 0x24, 0x90, 0x40, //3   sun 1
0x5f, 0x8f, 0x2f, 0x47, 0x11, 0x24, 0x09, 0x02, //4   sun 2
0x02, 0x09, 0x24, 0x11, 0x47, 0x2f, 0x8f, 0x5f, //5   sun 3
0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, //6   cloud 6
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xe0, 0xc0, //7   cloud 7
0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x03, //8   cloud 8
0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, //9   cloud 9 
0x03, 0x07, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, //10  cloud 10
0xfc, 0xe6, 0xa7, 0x7f, 0x7f, 0xa7, 0xe6, 0xfc, //11  cloud face 1
0xfc, 0xb6, 0xaf, 0xbf, 0xbf, 0xaf, 0xb6, 0xfc, //12  cloud face 2
0x00, 0x04, 0x08, 0x18, 0x30, 0x18, 0x08, 0x04, //13  bird 1
0x00, 0x08, 0x08, 0x18, 0x30, 0x18, 0x08, 0x08, //14  bird 2
0x00, 0x20, 0x10, 0x10, 0x30, 0x10, 0x10, 0x20, //15  bird 3
0x00, 0x00, 0x60, 0x10, 0x30, 0x10, 0x60, 0x00, //16  bird 4
0x00, 0x20, 0x10, 0x10, 0x30, 0x10, 0x10, 0x20, //17  bird 3
0x00, 0x08, 0x08, 0x18, 0x30, 0x18, 0x08, 0x08, //18  bird 2
0x5a, 0xc3, 0x18, 0xbd, 0xbd, 0x18, 0xc3, 0x5a, //19  flower
0x0c, 0x18, 0x18, 0x99, 0xff, 0x18, 0x18, 0x0c, //20  flowerr
0xc0, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, //21  flowerrr
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x0c, //22  flowerrrr
0x0c, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, //23  flowerrrrr
0x81, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0x81, //24  pipe up down
0xc3, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0xc3, //25  pipe left right
0x80, 0xe0, 0x18, 0x04, 0x04, 0x02, 0x82, 0xc3, //26  pipe left bottom
0xc3, 0x82, 0x02, 0x04, 0x04, 0x18, 0xe0, 0x80, //27  pipe right bottom
0xc3, 0x41, 0x40, 0x20, 0x20, 0x18, 0x07, 0x01, //28  pipe left top
0x01, 0x07, 0x18, 0x20, 0x20, 0x40, 0x41, 0xc3, //29  pipe top right
0x42, 0xc3, 0x01, 0x01, 0x01, 0x01, 0xc3, 0x42, //30  pipe top
0x42, 0xc3, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x7e, //31  pipe right
0x42, 0xc3, 0x80, 0x80, 0x80, 0x80, 0xc3, 0x42, //32  pipe bottom
0x7e, 0xc3, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x42, //33  pipe left
0x42, 0xc3, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x42, //34  pipe
0x00, 0xaa, 0x00, 0x55, 0x00, 0xaa, 0x00, 0x55, //35  grated
0xff, 0x81, 0xa5, 0x81, 0x81, 0xa5, 0x81, 0xff, //36  block
0xff, 0x82, 0xa4, 0x88, 0x90, 0xa0, 0xc0, 0x80, //37  block left bottom
0xff, 0x41, 0x25, 0x11, 0x09, 0x05, 0x03, 0x01, //38  block left top
0x01, 0x03, 0x05, 0x09, 0x11, 0x25, 0x41, 0xff, //39  block top right
0x80, 0xc0, 0xa0, 0x90, 0x88, 0xa4, 0x82, 0xff, //40  block right bottom
0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, //41  funnel top bottom
0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, //42  funnel bottom top
0x81, 0x02, 0x04, 0x18, 0x18, 0x20, 0x40, 0x81, //43 valve
0x81, 0x40, 0x20, 0x18, 0x18, 0x04, 0x02, 0x81, //44 valve 2
};

#define PARTICLE_COUNT      0
#define PERCENT_REQUIRED    1
#define DIFFICULTY          2
#define CUP_LOCATION_X      3
#define CUP_LOCATION_Y      4
#define PARTICLE_LOCATION_X 5
#define PARTICLE_LOCATION_Y 6
#define TIME_TRIAL          7
#define LEVEL_DATA          8


const uint8_t PROGMEM level[][120] = {
{ 
   (400>>1), // particles yes mom I know it doesn't need the brackets but I like it so there
   90,       // percent required
   0,        // difficulty higher is easier 0 will base it off level value
   50,31,    // cup location x,y
   100,21,   // particle position x,y
   30,
   0, 2, 3, 0, 0, 0, 0,14, 0, 0, 0, 6,11, 7, 0, 0,
   0, 5, 4, 0, 0,16, 0, 0, 0,18, 0,10, 9, 8, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,19, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,22,20,23, 0, 0,
   1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1,21, 1, 1, 1,
},
{
   (400>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   100,31,     // cup location x,y
   16,9,    // particle position x,y
   60,        // time trial in seconds
   5,35,35, 4,36,36,36,36,36,36,36,36,36,38, 0, 0,
   0, 0, 0, 0,36,39,36,36,39,36,36, 0, 0, 0, 0, 0,
   0, 0, 0, 0,38, 0,39,38, 0,39,38, 0, 0, 0, 0, 0,
   0, 0, 0, 0,43, 0, 0,44, 0, 0,43, 0, 0, 0, 0, 0,
   0, 0, 0, 0,40, 0, 0,40, 0, 0,40, 0, 0, 0, 0, 0,
   0, 0, 0,40,36,37,40,36,37,40,36,37, 0, 0, 0, 0,
  36,36,36,36,36,36,36,36,36,36,36,36,36, 0, 0, 0,

},
{ 
   (400>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   50,31,     // cup location x,y
   100,21,    // particle position x,y
   40,
   0, 2, 3, 0, 0, 0, 0,14, 0, 0, 0, 6,11, 7, 0, 0,
   0, 5, 4, 0, 0,16, 0, 0, 0,18, 0,10, 9, 8, 0, 0,
   0, 0, 0,14, 0, 0, 0,14, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,14, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,19, 0, 0, 0,
   0, 0, 0,19, 0, 0, 0, 0, 0, 0, 0,22,20,23, 0, 0,
   1, 1, 1,21, 1, 1, 0, 0, 0, 0, 1, 1,21, 1, 1, 1,
},
{ 
   (200>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   50,31,     // cup location x,y
   116,9,    // particle position x,y
   40,
   36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,36, 0,36,
   36, 0,40,36,36,36,36,36,36,36,36,37, 0,36, 0,36,
   36, 0,36, 0, 0, 0, 0, 0, 0, 0, 0,36, 0,36, 0,36,
   36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,36, 0,38, 0,36,
   36, 0,36, 0, 0, 0, 0, 0, 0, 0, 0,36, 0, 0, 0,36,
   36, 0,36, 0, 0, 0, 0, 0, 0, 0, 0,36, 0, 0, 0,36,
   36,36,36,36,36,36,37, 0, 0,40,36,36,36,36,36,36,
},
{ 
   (50>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   0,32,     // cup location x,y
   100,21,    // particle position x,y
   30,
   0, 0, 0, 0, 0, 0,26,30,30,30,27, 6,11, 7,36, 0,
   0,26,30,25,30,27,24,24,24,24,24,10, 9, 8,36, 0,
   0,24,24, 0,24,24,24,24,24,24,24,37, 0,40,38, 0,
   0,24,24, 0,33,31,24,29,32,28,29,27,42,36, 0, 0,
   0, 0, 0, 0,37,24,29,25,25,30,27,24,24,36, 0, 0,
   0, 0, 0, 0,26,34,30,30,27,24,24,24,29,25,25,27,
   0, 0, 0, 0,29,32,28,29,32,32,28,29,25,25,25,28,
},
{ 
   (400>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   50,31,     // cup location x,y
   64,9,    // particle position x,y
   20,
   0, 0, 0,13, 0,40,11,38,39,11,37, 0, 0, 2, 3, 0,
   0, 0,15, 0,22,42,36,43,44,36,42,23, 0, 5, 4, 0,
   0,18, 0,14,22,41, 0,40,37, 0,41,23,15, 0,13, 0,
   0, 0, 0,16,22,42,37, 0, 0,40,42,23, 0,16, 0, 0,
   0, 0,17, 0, 0,41, 0, 0, 0, 0,41, 0, 0,11, 0, 0,
   0, 0, 0, 0,13,42, 0, 0, 0, 0,42, 0,22,20,23, 0,
   1, 1, 1, 1, 1,41, 0, 0, 0, 0,41, 1, 1,21, 1, 1,
},
{
   (200>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   35,31,     // cup location x,y
   108,9,    // particle position x,y
   60,
   0, 0, 0, 0,36,26,25,25,25,25,27, 0,40, 0, 0,37,
   0, 0, 0, 0,39,29,44,25,35,27,24,40,35,35,35,35,
   0, 0, 0, 0, 0,39,41,38,39,24,24,36, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0,26,43,44,27,37, 0, 0,40,
   0, 0, 0, 0, 0, 0, 0, 0,29,44,43,28,36,42,42,38,
   0, 0, 0, 0, 0, 0, 0, 0, 0,33,34,25,25,28,24, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0,29,32,25,25,25,28, 0,
},
{
   (400>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   0,31,     // cup location x,y
   116,9,    // particle position x,y
   60,
   0,26,30,25,27, 0, 0,39,36,38,39,38,39,36, 0, 0,
   0,24,24, 0,24,42,37, 0, 0, 0, 0, 0, 0,35,35,35,
   0, 0, 0, 0,24,24,36,42,42,42,37,40,38,35,35,35,
   0, 0, 0, 0,33,31,36,37,44,43,25,35,37,35,35,35,
   0, 0, 0, 0,33,31,36,36,37, 0,36,36,36,35,35,35,
   0, 0, 0, 0,33,31,36,36,36,37, 0, 0,25,34,34,31,
   0, 0, 0, 0,29,28,33,25,25,25, 0, 0,25,32,32,28,

},
{
   (100>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   0,31,     // cup location x,y
   64,9,    // particle position x,y
   60,        // time trial in seconds
   0,26,30,30,25,27,37, 0, 0,40,34,30,30,30, 0,39,
  40,33,34,32,27,24,36,42,42,26,34,31,24,24,37, 0,
  39,41,41,38,24,24,36,24,24,29,30,31,24,24,39,37,
   0, 0, 0, 0,24,24,36,24,24,26,34,31,24,24, 0,39,
   0, 0, 0, 0,24,24,36,29,32,32,32,28,24,24, 0, 0,
   0, 0, 0, 0,24,29,44,25,25,25,25,25,34,31, 0, 0,
   0, 0, 0, 0,29,25,44,25,25,25,25,25,32,28, 0, 0,
},
{ 
   (400>>1),  // particles
   100,       // percent required
   0,         // difficulty higher is easier 0 will base it off level value
   50,31,     // cup location x,y
   100,21,    // particle position x,y
   60,
   0, 2, 3, 0, 0, 0, 0,14, 0, 0, 0, 6,11, 7, 0, 0,
   0, 5, 4, 0, 0,16, 0, 0, 0,18, 0,10, 9, 8, 0, 0,
   0, 0, 0,14, 0, 0, 0,14, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,14, 0,19, 0, 0,
  19, 0,19, 0,19, 0, 0, 0, 0, 0, 0,19,22,20,23,19,
  21,19,21,19,21,19, 0, 0, 0, 0,19,21,19,21,19,21,
  21,21,21,21,21,21, 0, 0, 0, 0,21,21,21,21,21,21,
},
};
#define levels 10


uint8_t w[2][4]{{ 2, 2,25,16},{ 5,16,22,28}}; //AABB collision array for the cup

//the particles are only bytes and nothing else to save space
struct Particle{
  uint8_t x;
  uint8_t y;
};
//they share velocities due to them all being controlled by you
int8_t x_vol;
int8_t y_vol;
int8_t x_brownian;
int8_t y_brownian;


uint8_t brown;
bool toggler;//toggles every frame

bool blink;//general purpose switch for animations and other dubious things 

uint8_t current_level = 1;
uint8_t level_height = 40;
uint16_t level_time = 0;
uint8_t level_screen[16][7];

bool time_trial;
bool game_over;

//these are filled with the toprow of the level for custom level settings 
uint16_t particle_count = 400;
uint8_t percent_required = 100;
uint8_t difficulty = 5;
uint8_t cup_location_x = 64;
uint8_t cup_location_y = 62;
uint8_t particle_location_x = 100;
uint8_t particle_location_y = 21;



uint8_t bird_animation = 0;
uint8_t cloud_animation = 0;
uint8_t hatch_animation = 0;
uint8_t reset_animation = 0; 


//in stores where the split in th particle array is to treat them differently
uint16_t in;


uint8_t score;


//holder is general purpose just to avoid having to waste resources 
uint8_t holder;

#define MAX_PARTICLES 400
struct Particle p[MAX_PARTICLES];

#define FRAMERATE 60
void setup() {
  arduboy.begin();
  arduboy.setFrameRate(FRAMERATE);
  startGame();
}

void loop() {
  
    if (WDTCSR & _BV(WDE)) // if watchdog timer is enabled. disable ints and set magic key
    {
      cli();
      *(volatile uint8_t *) MAGIC_KEY_POS      = lowByte (MAGIC_KEY);
      *(volatile uint8_t *)(MAGIC_KEY_POS + 1) = highByte(MAGIC_KEY);
      while(true);
    } 
    if (!arduboy.nextFrame()){
      brown++;
      return;
    }
    toggler^=true;
    if(arduboy.everyXFrames(FRAMERATE)){blink^=true;}//blinks every second


    score = map(in,0,particle_count,0,100+(100-percent_required));//cancer code
    
    if(arduboy.everyXFrames(7)){
      bird_animation=((bird_animation+1)%6);
    }
    
    arduboy.pollButtons();
    
    

    hatch_animation = (arduboy.pressed(A_BUTTON))?1:0; //toggle for the valves should probably change the name frankly
    
    if(score<100&&!game_over){//only run game look if the games not over and if the score is still below the requirement
      
      if(arduboy.pressed(B_BUTTON)){//level reset which is about 2 seconds before activating
        if(reset_animation == 40){
          startGame();
        }else{
          if(arduboy.everyXFrames(4))reset_animation++;  
        }
      }else if(reset_animation > 0){
        reset_animation--;
      }
      
      //mostly debug but peeps can use it if they want because im nice
      if(arduboy.justPressed(DOWN_BUTTON)&&arduboy.justPressed(A_BUTTON)){
        for(int i = 0; i < particle_count; i++){
          p[i].x = cup_location_x+13;
          p[i].y = cup_location_y;
        } 
        current_level++;
        startGame();   
      }
      
      //the actual game loop level height defaults to 8 because the level is only rendered starting at 8 because of the UI above
      if(level_height==8){
        if(time_trial)level_time--;
        else if(level_time<54000) level_time++;//the time locks at 15 min because technical max is just under 20

        //the control code gubbins
        x_vol = 0;
        y_vol = 127;

        if(time_trial&&level_time < FRAMERATE){
          game_over = true;
        }
        if(arduboy.pressed(LEFT_BUTTON)){
            x_vol = -128;
        }
        if(arduboy.pressed(RIGHT_BUTTON)){
            x_vol = 127;
        }
        if(arduboy.pressed(UP_BUTTON)){
            y_vol = -128;
        }else if(x_vol!=0){y_vol = 0;}
        
        //the important bit moved to its own function for the ease of the read
        particlePhysics();
      }
      arduboy.clear();//clear the physics steps done in the buffer before rendering the UI
      if(level_height>8&&toggler)level_height--;//moves screen up
    }else{
      
      //this is the level complete code either in a game over or a level complete the game_over flag will decide the differences
      arduboy.clear();
      if(arduboy.justPressed(A_BUTTON)&&!game_over){
          current_level++;
          startGame();
      }
      if(arduboy.justPressed(B_BUTTON)){
        startGame();  
      }
      if(toggler&&level_height<64)level_height++;
      font.setCursor((-64)+level_height,15);
      if(game_over)font.println(F("You ran out of time"));
      else font.println(F("A:Next level"));
      font.print(F("B:Retry"));
      
    }

    
    //render the level
    for(uint8_t y = 0; y < 7; y++){
      for(uint8_t x = 0; x < 16; x++){
        holder = level_screen[x][y];
        if(holder==255)continue; //if its blank then just skip
        
        if(holder>=12&&holder<18){//the range for the bird animation
          holder = 12+((holder-12)+bird_animation)%6;//this code allows the animation to take place at any starting point so you can have offset bird animations
          arduboy.drawBitmap(x*8,(y*8)-(level_height-16),sprites+holder*8,8,8,WHITE);//make bird fly up 
        }else{
          if(holder==10&&level_height==8&&cloud_animation>0){//range for cloud animation
              holder++;
              cloud_animation--;
          }else if(holder >= 42){//range for latch animation its at the end so no need to check holder <= 43
            holder = (hatch_animation!=0)? holder^1:holder; // keeps holder as is or XOR it to turn 43 into 44 or 44 into 43
          }
          arduboy.drawBitmap(x*8,(y*8)+level_height,sprites+holder*8,8,8,WHITE);//the basic render that everything else goes through
        }
      }
    }
    
    //the cup is just a bunch of lines which I think is better than just using a bunch of sprites to do it not sure
    drawBucket(cup_location_x,cup_location_y);

    if(score<100||blink){//blink is what makes the game flash the percent/time/level at you when you complete the level
      font.setCursor(0,-1);

      //basic time convertion 
      font.print(((level_time/FRAMERATE)/60)%60);
      font.print(F(":"));
      holder = ((level_time/FRAMERATE)%60);
      if(holder<10)font.print(F("0"));
      font.print(holder);
      
      font.setCursor(55,-1);

      font.print(score);
      font.print(("%"));
      font.setCursor(100,-1);
      font.print((current_level<10)?F(" Lv "):F("Lv "));
      font.print(current_level);
    }
    arduboy.drawFastHLine(0,6,128);

    //makes the LED look nice and shiny also using shifting to change the brightness
    arduboy.setRGBled(reset_animation,score>>3,score>>2);
    
    for(uint16_t i = 0; i < particle_count; i++){//finally render the particles for the display and also the physics step next frame
      //if(toggler)
      arduboy.drawPixel(p[i].x,p[i].y,WHITE);
      if( toggler&&(i&1)==0)checkScore(i,p[i].x,p[i].y);
      if(!toggler&&(i&1)==1)checkScore(i,p[i].x,p[i].y);//do the score check over two frames to half the load
    }
    arduboy.display();
    /*
    for(uint16_t i = 0; i < particle_count; i++){
      if(!toggler)arduboy.drawPixel(p[i].x,p[i].y,WHITE);
    }*/
    //uncomment this and also toggler inside of the other above to enable grey mode
}




void particlePhysics(){
  
  for(uint16_t i = 0; i < particle_count; i++){
    x_brownian = x_vol;
    y_brownian = y_vol;
    brown++;
    if(x_vol == 0)
      x_brownian = ((brown&1)==0)?-1:1;
    else if(y_vol == 0)
      y_brownian = ((brown&1)==0)?-1:1;
    arduboy.drawPixel(p[i].x,p[i].y,BLACK);
    if(x_brownian>0){
      if(canMove(p[i].x+1,p[i].y)){
        p[i].x++;
      }
    }else{
      if(canMove(p[i].x-1,p[i].y)){
        p[i].x--;
      }
    }
    if(y_brownian>0){
      if(canMove(p[i].x,p[i].y+1)){
        p[i].y++;
      }
    }else{//                        particles get slowed when in the cup to help them stay inside
      if(canMove(p[i].x,p[i].y-1)&&(i>=in||arduboy.everyXFrames(difficulty))){
        p[i].y--;
      }
    }
    arduboy.drawPixel(p[i].x,p[i].y,WHITE);
  }
}

//if it cant move itll increment brown just for added randomness 
boolean canMove(uint8_t x, uint8_t y){

  uint8_t row = y / 8;
  holder = y % 8;

  
  if((Arduboy2::sBuffer[(row*WIDTH) + x] & _BV(holder)) >> holder){
    brown++;
    return false;
  }
  return !(x<0||y<8||y>63||x>127);//collision bounds for the particles could probably set y to 8 instead of 0 with the new UI
}

/*
 * this is the important code that allows the code to keep track of what is in the cup and what is not
 * if the particle is in the cup it will increment score and then run the in function
 * the in function will swap the x y locations of the particle with the one on top of the stack thats not in the cup
 * and then increment in by 1
 * 
 * so in short
 * 
 * if a particles id is less than the IN variable it is in the cup and that's all youll need to check in the rest of the code
 * 
 * performance optimisations im planning with this are to do it over the course of multiple frames since its a low reuirement in terms of gameplay
 */

void checkScore(uint16_t &i, uint8_t &x, uint8_t &y){//AABB box collisions for the shape of the cup
    if(x>=w[0][0]&&y>=w[0][1]&&x<=w[0][2]&&y<=w[0][3]||
       x>=w[1][0]&&y>=w[1][1]&&x<=w[1][2]&&y<=w[1][3]
    ){
      pIn(i);
    }else if(i<in){
        pOut(i);
    }
}

void pIn(uint16_t & i){
  if(i >= in){
    swap(p[in].x,p[i].x,p[in].y,p[i].y);
    in++;
  }
}
void pOut(uint16_t & i){
  if(i < in){
    swap(p[in].x,p[i].x,p[in].y,p[i].y);
    in--;
  }
}
void swap(uint8_t &x, uint8_t &xx,uint8_t &y, uint8_t &yy) {
  holder = x;
  x = xx;
  xx = y;
  y = yy;
  yy = xx;
  xx = holder;
}
/*
void swap(uint8_t &a, uint8_t &b) {
  holder = a;
  a = b;
  b = holder;
}*/

void startGame(){
  arduboy.setRGBled(0,0,0);
  score = 0;
  in = 0;
  level_time = 0;
  game_over = false;
  //load in level data for simplicitys sake
  particle_count      = pgm_read_byte(&level[(current_level-1)%levels][PARTICLE_COUNT])<<1;
  percent_required    = pgm_read_byte(&level[(current_level-1)%levels][PERCENT_REQUIRED]);
  difficulty          = pgm_read_byte(&level[(current_level-1)%levels][DIFFICULTY]);
  cup_location_x      = pgm_read_byte(&level[(current_level-1)%levels][CUP_LOCATION_X]);
  cup_location_y      = pgm_read_byte(&level[(current_level-1)%levels][CUP_LOCATION_Y]);
  particle_location_x = pgm_read_byte(&level[(current_level-1)%levels][PARTICLE_LOCATION_X]);
  particle_location_y = pgm_read_byte(&level[(current_level-1)%levels][PARTICLE_LOCATION_Y]);
  if(difficulty == 0){
    difficulty = map(current_level,0,10,20,5);
  }
  time_trial = false;
  if(current_level>levels&&current_level){
    level_time          = FRAMERATE+pgm_read_byte(&level[(current_level-1)%levels][TIME_TRIAL])*FRAMERATE;
    level_time--; // remove the visible extra second

    level_time -= ((level_time/300)*((current_level-11)/10))*FRAMERATE;
    
    //level_time-= (((current_level-11)/10)*5)*FRAMERATE;
    
    time_trial = true;
    difficulty = 0;  
  }
  w[0][0] = 2 + cup_location_x;
  w[0][2] = 25+ cup_location_x;
  w[1][0] = 5 + cup_location_x;
  w[1][2] = 22+ cup_location_x;
  
  w[0][1] = 2 + cup_location_y;
  w[0][3] = 16+ cup_location_y;
  w[1][1] = 16+ cup_location_y;
  w[1][3] = 28+ cup_location_y;

  //load the level from flash to ram this improves the performance a lot
  for(uint8_t y = 0; y < 7; y++){
     for(uint8_t x = 0; x < 16; x++){
      level_screen[x][y] = pgm_read_byte(&level[(current_level-1)%levels][(x+((y*16)))+LEVEL_DATA])-1;
     }
  }
  for(uint16_t i = 0; i < particle_count; i++){
    p[i].x = particle_location_x;
    p[i].y = particle_location_y;
  }
  //sets the cloud animation time by scaling it with the particle count
  cloud_animation = map(particle_count,0,MAX_PARTICLES,0,160);
}


//ugly junk
void drawBucket(uint8_t x, uint8_t y){
  arduboy.drawLine(2+x,3+y,5+x,29+y);
  arduboy.drawLine(0+x,2+y,4+x,29+y);
  arduboy.drawLine(1+x,2+y,5+x,29+y);
  //right side
  arduboy.drawLine(25+x,3+y,22+x,28+y);
  arduboy.drawLine(27+x,2+y,23+x,29+y);
  arduboy.drawLine(26+x,2+y,22+x,29+y);
  //bottom
  arduboy.drawLine(6+x,29+y,21+x,29+y);
  arduboy.drawLine(5+x,30+y,22+x,30+y);
  arduboy.drawLine(7+x,31+y,20+x,31+y);
}
