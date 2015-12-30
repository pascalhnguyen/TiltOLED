/***************************
////////////////////////////
//      TILT TILT         //
//                        //
//        SE 101          //
//       Fall 2015        //
////////////////////////////
*
* A collaborative project by:
* Raymond Lam
* Dane Nespoli
* Tariq Aziz
* Jack Chen
* Pascal Nguyen
*
* OLED TEMPLATE CODE COURTESY OF KENNETH SINDER *
***************************/ 

// I put some helpful functions, including some short wrapper functions
// that you could do without, and the massive block of code similar to the demo
// that is necessary in order to intialize the booster pack.
#include "functions.h" // Energia will compile the functions.cpp file for us

/* ------------------------------------------------------------ */
/* Local Variables                        			
char arrayForPrinting[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0}}; */
/* ------------------------------------------------------------ */

const unsigned int bitmapHeight = 6;  // The height of the bitmap we're about to create
const unsigned int bitmapWidth = 6;   // The width of the bitmap we're about to create

// Now create the bitmap (make sure it has the correct width and height as specified above)
// To make it simple, we're using binary. It's simple - 1 means LED is on. 0=off.
// You can make the bitmap as big as you want (within reason) and draw/write anything you
// want here. Just remember to change the variables above and the array size as you do so.

//****************************************************************************/
//TURN HEAD CW 90DEGREES, TOWARDS 3 o clock TO DO TEXT
//****************************************************************************/

//Declaration of bit maps of letters
//(CREDIT TO KENNETH SINDER FOR IMPLEMENTING THIS FUNCTION)

//NUMBERS--------------------------------------------------------------------

char num0[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1},
  {1, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 1},
  {1, 1, 1, 1, 1, 1}};
  
char num1[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 0, 01, 1,0 , 0},
  {01, 0, 0, 01, 1,0 },
  {01, 01, 01, 01, 01, 01},
  {01, 0, 0, 0, 0, 0},
  {01, 0, 0, 0, 0, 0}};
  
 char num2[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 0, 0, 01, 01, 0},
  {01, 01, 0, 0, 0, 01},
  {01, 0, 01, 0, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 0, 01, 0}};
  
char num3[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 01, 0},
  {0, 01, 0, 0, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {0, 01, 01, 01, 01, 0}};
  
char num4[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 01, 0, 0},
  {0, 0, 0, 01, 01, 0},
  {0, 0, 0, 01, 0, 01},
  {01, 01, 01, 01, 01, 01},
  {0, 0, 0, 01, 0, 0}};
  
char num5[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 1, 0, 1, 1, 1},
  {1, 0, 0, 1, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {0, 1, 1, 0, 0, 1}};

char num6[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 1, 1, 1, 1, 0},
  {1, 0, 1, 0, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {0, 1, 1, 0, 0, 0}};

char num7[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 1},
  {0, 0, 1, 0, 0, 1},
  {0, 0, 0, 1, 0, 1},
  {0, 0, 0, 0, 1, 1}};

char num8[][6]=
{
  {0, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 1, 0},
  {1, 0, 0, 1, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {0, 1, 1, 0, 1, 0}}; 

char num9[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {1, 0, 0, 1, 1, 0},
  {1, 0, 01, 0, 0, 1},
  {1, 0, 01, 0, 0, 1},
  {1, 0, 0, 1, 0, 1},
  {0, 1, 1, 1, 1, 0}};
  
//ARROWS--------------------------------------------------------------------

//LEFT
char bmp[][6] = 
{
  {0, 0, 1, 1, 0, 0},
  {0, 1, 1, 1, 1, 0},
  {1, 0, 1, 1, 0, 1},
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0}};
//RIGHT
char bmp4[][6] = 
{
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0},
  {1, 0, 1, 1, 0, 1},
  {0, 1, 1, 1, 1, 0}};
//DOWN
char bmp2[][6] = 
{
  {0, 0, 1, 0, 0, 0},
  {0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1},
  {0, 1, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0}};
//UP
char bmp3[][6] = 
{
  {0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 1, 0},
  {1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0},
  {0, 0, 0, 1, 0, 0}};
  
//LETTERS--------------------------------------------------------------------
 
char A[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 0, 0, 0},
  {0, 01, 0, 01, 01, 0},
  {0, 01, 0, 0, 0, 01},
  {0, 01, 0, 01, 01, 0},
  {01, 01, 01, 0, 0, 0}}; 
  
char B[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {0, 01, 01, 0, 01, 0}};
  
char C[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 01, 01, 01, 01, 0},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {0, 01, 0, 0, 01, 0}};
  
char D[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {0, 01, 01, 01, 01, 0}};
  
char E[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01}}; 
  
char F[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {0, 0, 0, 01, 0, 01},
  {0, 0, 0, 01, 0, 01},
  {0, 0, 0, 01, 0, 01},
  {0, 0, 0, 01, 0, 01}};
  
char G[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 01, 01, 01, 01, 0},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 01, 0, 0, 01},
  {0, 01, 01, 0, 01, 0}};
  
char H[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1},
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0},
  {1, 1, 1, 1, 1, 1}};
  
char I[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 0, 0, 01, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 01, 01, 01, 01, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 01, 0, 0, 01, 01}};
  
char L[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {01, 01, 01, 01, 01, 01},
  {01, 01, 0, 0, 0, 0},
  {01, 01, 0, 0, 0, 0},
  {01, 01, 0, 0, 0, 0}};
  
char M[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {0, 0, 0, 0, 01, 0},
  {0, 0, 0, 01, 0, 0},
  {0, 0, 0, 0, 01, 0},
  {01, 01, 01, 01, 01, 01}};
  
char N[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {0, 0, 0, 0, 01, 01},
  {0, 0, 01, 01, 01, 0},
  {0, 01, 01, 0, 0, 0},
  {01, 01, 01, 01, 01, 01}};
  
char O[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 01, 01, 01, 01, 0},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {01, 0, 0, 0, 0, 01},
  {0, 01, 01, 01, 01, 0}};
  
  
char P[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1},
  {0, 0, 01, 0, 0, 1},
  {0, 0, 01, 0, 0, 1},
  {0, 0, 01, 0, 0, 1},
  {0, 0, 0, 1, 1, 0}};
  
char R[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {0, 0, 01, 01, 0, 01},
  {0, 0, 01, 01, 0, 01},
  {0, 01, 0, 01, 0, 01},
  {01, 0, 0, 0, 01, 0}};
  
char S[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 01, 0, 01, 01, 0},
  {01, 0, 01, 0, 0, 01},
  {01, 0, 01, 0, 0, 01},
  {01, 0, 01, 0, 0, 01},
  {0, 01, 0, 0, 01, 0}};
  
char T[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 01, 01},
  {0, 0, 0, 0, 0, 01},
  {01, 01, 01, 01, 01, 01},
  {0, 0, 0, 0, 0, 01},
  {0, 0, 0, 0, 01, 01}};
  
char U[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 01, 01, 01, 01, 01},
  {01, 0, 0, 0, 0, 0},
  {01, 0, 0, 0, 0, 0},
  {01, 0, 0, 0, 0, 0},
  {0, 01, 01, 01, 01, 01}};


char V[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 01, 01, 01},
  {0, 01, 01, 01,  0, 0},
  {1, 01, 0,   0 , 0, 0},
  {0, 01, 01, 01, 0, 0},
  {0, 0, 0, 01, 01, 01}};
  
char Y[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 01, 01},
  {0, 0, 0, 01, 0, 0},
  {01, 01, 01, 0, 0, 0},
  {0, 0, 0, 01, 0, 0},
  {0, 0, 0, 0, 01, 01}};
  
char COLON[][6] = 
{
  {01, 01, 0, 0, 01, 01},
  {01, 01, 0, 0, 01, 01},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0}};
  
char Tinvert[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {01, 0, 01, 01, 0, 01},
  {0, 0, 01, 01, 0, 0},
  {0, 0, 01, 01, 0, 0},
  {0, 01, 01, 01, 01, 0}};
  
char guideE[][6] = 
{
  {0, 0, 0, 0, 0, 0},
  {01, 01, 01, 01, 01, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {01, 0, 0, 01, 0, 01},
  {0, 0, 0, 0, 0, 0}};
  
// ---------------------------------------------------------------------------
// Function that converts the 2D array of bits into displayable images on the screen

// (CREDIT TO KENNETH SINDER FOR CREATING THIS FUNCTION)
char* formattedBitmap(char* input, unsigned int width, unsigned int height){
  unsigned int h = ceil(height / 8.0);
  char *output = (char*)calloc(h * width, sizeof(char));
  char b, temp;
  for (unsigned int hbyte = 0; hbyte < h; ++hbyte) {
    for (unsigned int i = 0; i < width; ++i) {
      b = 0;
      for (unsigned int j = 0; j < ((height - hbyte * 8)/8 ? 8 : (height%8)); ++j) {
        temp = input[(8*hbyte+j)*width+i];
        if (temp) b |= 1 << j;
      }
      output[hbyte*width+i]|=b;
    }
  }
  return output;
}

// Formatted, displayable bitmaps on the screen
// (CREDIT TO KENNETH SINDER FOR THIS FUNCTION)

// Bitmaps of arrows
char* left = formattedBitmap((char*)bmp, bitmapWidth, bitmapHeight);
char* down = formattedBitmap((char*)bmp2, bitmapWidth, bitmapHeight);
char* up = formattedBitmap((char*)bmp3, bitmapWidth, bitmapHeight);
char* right = formattedBitmap((char*)bmp4, bitmapWidth, bitmapHeight);

// Bitmaps of letter characters
char* charA = formattedBitmap((char*)A, bitmapWidth, bitmapHeight);
char* charB = formattedBitmap((char*)B, bitmapWidth, bitmapHeight);
char* charC = formattedBitmap((char*)C, bitmapWidth, bitmapHeight);
char* charD = formattedBitmap((char*)D, bitmapWidth, bitmapHeight);
char* charE = formattedBitmap((char*)E, bitmapWidth, bitmapHeight);
char* charF = formattedBitmap((char*)F, bitmapWidth, bitmapHeight);
char* charG = formattedBitmap((char*)G, bitmapWidth, bitmapHeight);
char* charH = formattedBitmap((char*)H, bitmapWidth, bitmapHeight);
char* charI = formattedBitmap((char*)I, bitmapWidth, bitmapHeight);
char* charL = formattedBitmap((char*)L, bitmapWidth, bitmapHeight);
char* charM = formattedBitmap((char*)M, bitmapWidth, bitmapHeight);
char* charN = formattedBitmap((char*)N, bitmapWidth, bitmapHeight);
char* charO = formattedBitmap((char*)O, bitmapWidth, bitmapHeight);
char* charP = formattedBitmap((char*)P, bitmapWidth, bitmapHeight);
char* charR = formattedBitmap((char*)R, bitmapWidth, bitmapHeight);
char* charS = formattedBitmap((char*)S, bitmapWidth, bitmapHeight);
char* charT = formattedBitmap((char*)T, bitmapWidth, bitmapHeight);
char* charU = formattedBitmap((char*)U, bitmapWidth, bitmapHeight);
char* charV = formattedBitmap((char*)V, bitmapWidth, bitmapHeight);
char* charY = formattedBitmap((char*)Y, bitmapWidth, bitmapHeight);
char* charCOLON = formattedBitmap((char*)COLON, bitmapWidth, bitmapHeight);
char* charTinv = formattedBitmap((char*)Tinvert, bitmapWidth, bitmapHeight);
char* charGuideE = formattedBitmap((char*)guideE, bitmapWidth, bitmapHeight);

// Bitmaps of numbers
char* char0 = formattedBitmap((char*)num0, bitmapWidth, bitmapHeight);
char* char1 = formattedBitmap((char*)num1, bitmapWidth, bitmapHeight);
char* char2 = formattedBitmap((char*)num2, bitmapWidth, bitmapHeight);
char* char3 = formattedBitmap((char*)num3, bitmapWidth, bitmapHeight);
char* char4 = formattedBitmap((char*)num4, bitmapWidth, bitmapHeight);
char* char5 = formattedBitmap((char*)num5, bitmapWidth, bitmapHeight);
char* char6 = formattedBitmap((char*)num6, bitmapWidth, bitmapHeight);
char* char7 = formattedBitmap((char*)num7, bitmapWidth, bitmapHeight);
char* char8 = formattedBitmap((char*)num8, bitmapWidth, bitmapHeight);
char* char9 = formattedBitmap((char*)num9, bitmapWidth, bitmapHeight);

// ---------------------------------------------------------------------------//
                 
// Specification of positions of arrows on the screen 
unsigned int x = 0;
unsigned int y = 0+1;
unsigned int x2 = 0;
unsigned int y2 = 7+1;
unsigned int x3 = 0;
unsigned int y3 = 14+1;
unsigned int x4 = 0;
unsigned int y4 = 21+1;
unsigned int i=0;

// Positions of letters on the screen
unsigned int textRow1=121; 
unsigned int textRow2=114;
unsigned int textRow3=107;
unsigned int textRow4=100;
unsigned int textRow5=93;
unsigned int textRow6=86;
unsigned int textRow7=79;
unsigned int textRow8=72;
unsigned int textRow9=65;
unsigned int textRow10=58;
unsigned int textRow11=51;
unsigned int textRow12=44;
unsigned int textRow13=37;
unsigned int textRow14=30;
unsigned int textRow15=23;
unsigned int textRow16=16;
unsigned int textRow17=9;
unsigned int textRow18=2;
unsigned int char1Y=0;
unsigned int char2Y=6;
unsigned int char3Y=12;
unsigned int char4Y=18;
unsigned int char5Y=24;
unsigned int char6Y=30;
unsigned int screenMid=15;

// Positions of the falling arrows on the screen
unsigned int targetX[2] = {100,100}; //X values of arrow
unsigned int targetY[2] = {y,y4}; //Y values of arrows

// Counters for the number of hits, misses and counter iterations to draw a new arrow
unsigned int drawNew[2] = {0,0}; //Counters for the iterations
unsigned int passFail=0; //Counter for failled arrow
unsigned int missHit=0; //Counter for miss hit

// Variables to determine the margin of error for tilts, cooldowns between tilts, number of iterations counted through
unsigned int tiltTimer=0; //Iterations to leave LEDs on
unsigned int epsilon=80; //Range of tilt error
unsigned int coolDown=0; //Cooldown between tilts
unsigned int iterationCount=0; //Counts iterations

//Variables that save values of the score and the lives
unsigned int score=0; //Count score
unsigned int lives =10; //Count remaining lives

//Random number generator for the arrows that will be printed out
int d = rand() % 4;
int r = rand() % 4;

bool play = false;  //determines whether to start the game
long lBtn1;
long lBtn2;
bool endGame= false;

// Initiating the arrow in the beginning
char* z = left;
char* a = right;

//Checks for the current and previous X and Y coordinates of the accelerometer 
int chSwtCurY = 0;
int chSwtPrevY = 0;
int chSwtCurX = 0;
int chSwtPrevX = 0;

//Sets the boolean to clear the screen; initialized to be true
bool fClearOled = true;

//The variables represent the pins the board that contain the information from the accelerometer
//These variables will be used to get information regarding the position of the board relative to the accelerometer
char chPwrCtlRegY = 0x1D;
char chX0AddrY = 0x32;
char chPwrCtlRegX = 0x2D;
char chX0AddrX = 0x34;

//Variables that represent the direction that has been tilted
bool fDirY =false;
bool fDirX =false;

//Variables that will be used to get information form the leads in terms
short dataY;
short dataX;

//Variables that transmit information regarding the accelerometer
char I2CGenTransmit(char * pbData, int cSize, bool fRW, char bAddr);
bool I2CGenIsNotIdle();

char 	rgchReadAcclY[] = {0, 0, 0};
  char 	rgchWriteAcclY[] = { 0, 0 };
  char 	rgchReadAcclX[] = {0, 0, 0};
  char 	rgchWriteAcclX[] = {0, 0 };

/*
* Function that intilially imports the functions
* pre: none
* post: game is started up
*/
void setup(){
  // Helper function found in our functions.cpp
  // (CREDITS TO KENNETH SINDER FOR COMPILING THE FUNCTIONS TOGETHER)
  deviceInit();
  
  // Resets the screen
  oledReset();
  OrbitOledUpdate();
}

/*
* Function that infinitely loops the game
* pre: all functions are imported
* post: function allows user to choose between playing the game and returning to the home screen
*/
void loop(){
  if (play == false) {
    mainMenu();
  } 
  else {
    if(endGame)
      gameOverMenu();
    else
      playGame();;  
  }
}

/*
* Function that generates arrows for the user to tilt towards
* Function terminates after the user loses all their lives
* pre: the button to start the game is pressed
* post: the game is played until the user loeses all their lives or chooses to quit
*/
void playGame(){
  if(drawNew[0] >= 120) { //Draws a new arrow after every 120 loop iterations
   i++; //Increases the counter for the number of arrows iterated through
   targetX[0]=100; //Set new position
   r = rand() % 4; //Random number generator for the arrow that will be generated
   switch (r) { //Switch between the arrows whenever it is true
     case 0: z = left;
             targetY[0] = y;
             break;
     case 1: z = down;
             targetY[0] = y2;
             break;
     case 2: z = up;
             targetY[0] = y3;
             break;
     case 3: z = right;
             targetY[0] = y4;
             break;
   }
   drawNew[0] = 0; //Resets the counter
 }

  gameText();
 
 if(iterationCount >=60){//This statement is used to initially start printing the second arrow after 60 loop iterations
   if(drawNew[1] >= 120) {//Draws a new arrow after 120 loop iterations
    targetX[1]=100; //Sets the intial position of arrow 2
    d = rand() % 4; //Randomizes another value
    switch (d) { //Switches between the arrows based on the randomized value
      case 0: a = left;
              targetY[1] = y;
              break;
      case 1: a = down;
              targetY[1] = y2;
              break;
      case 2: a = up;
              targetY[1] = y3;
              break;
      case 3: a = right;
              targetY[1] = y4;
              break;
      }
      drawNew[1] = 0; //Resets the counter for arrow 2
    }
    oledDraw(a, targetX[1], targetY[1], bitmapWidth, bitmapHeight); //Draws the arrow
    targetX[1]--; //Change position for arrow 2
    drawNew[1]++; //Adds counter for new arrow 2
  }
  else iterationCount++;
 
  targetX[0]--; //Change position for arrow 1
  drawNew[0]++; //Adds counter for new arrow 1
  
  //switch statement to update/redraw number of lives on OLED
  switch(lives) {
         case 9:
         oledDraw(char9, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 8:
         oledDraw(char8, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 7:
         oledDraw(char7, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 6:
         oledDraw(char6, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 5:
         oledDraw(char5, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 4:
         oledDraw(char4, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 3:
         oledDraw(char3, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 2:
         oledDraw(char2, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 1:
         oledDraw(char1, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
         case 0:
         oledDraw(char0, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         OrbitOledUpdate();
         oledReset();
         endGame= true; //proceed to "game over" when lives reach 0
         break;
         default:
         oledDraw(char1, textRow3, char3Y+3, bitmapWidth, bitmapHeight);
         oledDraw(char0, textRow3, char4Y+3, bitmapWidth, bitmapHeight);
         break;
  }
 
  if(i <6) //Cases that change the level that is displayed on the screen
    oledDraw(char1, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  else if(i<12)
    oledDraw(char2, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  else if(i <18)
    oledDraw(char3, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  else if(i <24)
    oledDraw(char4, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  else if(i <32)
    oledDraw(char5, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  else if(i <40)
    oledDraw(char6, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  else 
    oledDraw(char7, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
    
  userInputFunction(drawNew[0],r,drawNew[1],d); //Determines the user input

  // If statements to change between the delay values (lower values equate to faster falling arrows)
  if(i <6)
    delay(10);
  else if(i<12)
    delay(7);
  else if(i <18)
    delay(4);
  else if(i< 24)
    delay(1);
  else if(i< 32)
    delayMicroseconds(750);
  else if(i<40)
    delayMicroseconds(500);
  else
    delayMicroseconds(250);
  
  // Resets and updates the screen
  OrbitOledUpdate();
  oledReset();
}

/*
* Function that determines the tilt value of the accelerometer
* pre: the playGame function is called and calls for this function
* post: returns the relative tilt of the accelerometer and determines if the user has "missed" or "hit"
*/
void userInputFunction(int position,int orientation, int position2, int orientation2){
  
  //Used to initially clear the screen
  //Intially sets up the acclerometer to measure the tilt
  if(fClearOled == true) {
    gameSetup();
  }
  
  //Function draws the arrows on the screen
  oledDraw(left, x, y, bitmapWidth, bitmapHeight);
  oledDraw(down, x2, y2, bitmapWidth, bitmapHeight);
  oledDraw(up, x3, y3, bitmapWidth, bitmapHeight);
  oledDraw(right, x4, y4, bitmapWidth, bitmapHeight);
  
  //Updates LED screen
  OrbitOledUpdate();
  
  rgchReadAcclY[0] = chX0AddrY; //Sets the accelerometer value
  I2CGenTransmit(rgchReadAcclY, 2, READ, ACCLADDR); //Gets the data into the acclerometer
  dataY = (rgchReadAcclY[2] << 8) | rgchReadAcclY[1]; //Checks for change in the accelerometer value
    
  rgchReadAcclX[0] = chX0AddrX; //Sets the accelerometer value
  I2CGenTransmit(rgchReadAcclX, 2, READ, ACCLADDR); //Gets the data into the acclerometer
  dataX = (rgchReadAcclX[2] << 8) | rgchReadAcclX[1]; //Checks for change in the accelerometer value
  
  coolDown++; //Increases the cooldown   
   if(coolDown >=45){ //Whenever cooldown is greater than 45, the user can tilt again
     //UP 2
     if(dataY < -113 ) { //Tilt forward
       coolDown =0; //Resets cooldown
       if(orientation ==2 && position >epsilon || orientation2 ==2 && position2 >epsilon){ //If "hit", turn on the green LEDS
         hitLED();
         score++;
       }
       else{ //Else "miss", turn on the red LED
         digitalWrite(RED_LED,HIGH);
         tiltTimer =10;
         missHit=1;
         lives--;
       }
       fDirY = true;
     }
    
     //DOWN 1
     else if(dataY > 113 ) { //Tilt backward
       coolDown =0; //Resets cooldown
       if(orientation ==1 && position >epsilon||orientation2 ==1 && position2 >epsilon){ //If "hit", turn on the green LEDS
         hitLED();
         score++;
       }
       else{ //Else "miss", turn on the red LED
         digitalWrite(RED_LED,HIGH);
         tiltTimer =10;
         missHit=1;
         lives--;
       }
       fDirY = false;
     }
     else;
     
     //LEFT 0
     if(dataX < -113 ) { //Tilt the left
       coolDown =0; //Resets cooldown
       if(orientation ==0 && position >epsilon ||orientation2 ==0 && position2 >epsilon){ //If "hit", turn on the green LEDS
         hitLED();
         score++;
       }
       else{ //Else "miss", turn on red LED
         digitalWrite(RED_LED,HIGH);
         tiltTimer =10;
         missHit=1;
         lives--;
       }
       fDirX = true;
     }
      
     //RIGHT 3
     else if(dataX > 113 ) { //Tilt to the right
       coolDown = 0; //Resets cooldown
       if(orientation ==3 && position >epsilon||orientation2 ==3 && position2 >epsilon){ //If "hit", turn on the green LEDS
         hitLED();
         score++;
       }
       else{ //Else "miss", turn on red LED
         digitalWrite(RED_LED,HIGH);
         tiltTimer =10;
         missHit=1;
         lives--;
       }
       fDirX = false;
 
     }
     else;
    }
    
    //If the user misses an arrow
    if(position ==120 || position2==120){
      if(passFail ==0&& missHit!=1){ //Turns on the LED if they did not attempt to tilt the correct orientation
        digitalWrite(RED_LED,HIGH);
        tiltTimer=10;
        lives--;
      } 
      passFail=0;
      missHit=0;
    }
     
    tiltTimer --;
    
    //Turns off the LED after 10 loop iterations and prepares for the next tilt
    if(tiltTimer==0){
      digitalWrite(RED_LED,LOW);
      GPIOPinWrite(LED1Port, LED1, LOW);
      GPIOPinWrite(LED2Port, LED2, LOW);
      GPIOPinWrite(LED3Port, LED3, LOW);
      GPIOPinWrite(LED4Port, LED4, LOW);
    }
}

/*
* Function that turns on the green LEDs whenever the user correctly hits
* pre: user tilts properly
* post: turns on green LEDS
*/
void hitLED(){
  passFail =1; //Passes
  GPIOPinWrite(LED1Port, LED1, LED1);
  GPIOPinWrite(LED2Port, LED2, LED2);
  GPIOPinWrite(LED3Port, LED3, LED3);
  GPIOPinWrite(LED4Port, LED4, LED4);
  tiltTimer =10;
}

/*
* Function displays the screen when the game is over
* pre: user loses the game
* post: user chooses what to do afterwards
*/

//draw the text for the game over screen on OLED 
void gameOverMenu(){
  oledDraw(charT, textRow1, char1Y+3, bitmapWidth, bitmapHeight); //draw the word TILT
  oledDraw(charI, textRow1, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charL, textRow1, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow1, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charT, textRow2, char1Y+3, bitmapWidth, bitmapHeight); //draw the word TILT
  oledDraw(charI, textRow2, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charL, textRow2, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charTinv, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charG, textRow4, char1Y+3, bitmapWidth, bitmapHeight); //draw the word GAME
  oledDraw(charA, textRow4, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charM, textRow4, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charE, textRow4, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charO, textRow5, char1Y+3, bitmapWidth, bitmapHeight); //draw the word OVER
  oledDraw(charV, textRow5, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charE, textRow5, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charR, textRow5, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charS, textRow7, char1Y, bitmapWidth, bitmapHeight); //draw the word SCORE
  oledDraw(charC, textRow7, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(char0, textRow7, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charR, textRow7, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charE, textRow7, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charP, textRow10, char1Y, bitmapWidth, bitmapHeight); //draw the word PRESS
  oledDraw(charR, textRow10, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charE, textRow10, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charS, textRow10, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charS, textRow10, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charR, textRow11, char1Y, bitmapWidth, bitmapHeight); //draw the word RIGHT
  oledDraw(charI, textRow11, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charG, textRow11, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charH, textRow11, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow11, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charB, textRow12, char1Y, bitmapWidth, bitmapHeight); //draw the word BUTTN
  oledDraw(charU, textRow12, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow12, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow12, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charN, textRow12, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charT, textRow13, 9, bitmapWidth, bitmapHeight); //draw the word TO
  oledDraw(char0, textRow13, 15, bitmapWidth, bitmapHeight);
  
  oledDraw(charP, textRow14, char1Y+3, bitmapWidth, bitmapHeight); //draw the word PLAY
  oledDraw(charL, textRow14, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charA, textRow14, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charY, textRow14, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charA, textRow15, char1Y, bitmapWidth, bitmapHeight); //draw the word AGAIN
  oledDraw(charG, textRow15, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charA, textRow15, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charI, textRow15, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charN, textRow15, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(left, x, y, bitmapWidth, bitmapHeight);
  oledDraw(down, x2, y2, bitmapWidth, bitmapHeight);
  oledDraw(up, x3, y3, bitmapWidth, bitmapHeight);
  oledDraw(right, x4, y4, bitmapWidth, bitmapHeight);
  
  //switch statement to display score on OLED in game over screen (rightmost digit)
  switch(score/10) {
         case 9:
         oledDraw(char9, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 8:
         oledDraw(char8, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 7:
         oledDraw(char7, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 6:
         oledDraw(char6, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 5:
         oledDraw(char5, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 4:
         oledDraw(char4, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 3:
         oledDraw(char3, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 2:
         oledDraw(char2, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 1:
         oledDraw(char1, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         case 0:
         oledDraw(char0, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
         default:
         oledDraw(char0, textRow8, char2Y+3, bitmapWidth, bitmapHeight);
         break;
  }
  
  //switch statement to display score on OLED in game over screen (left from rightmost digit)
  switch(score - (score/10)*10) {
         case 9:
         oledDraw(char9, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 8:
         oledDraw(char8, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 7:
         oledDraw(char7, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 6:
         oledDraw(char6, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 5:
         oledDraw(char5, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 4:
         oledDraw(char4, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 3:
         oledDraw(char3, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 2:
         oledDraw(char2, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 1:
         oledDraw(char1, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         case 0:
         oledDraw(char0, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
         default:
         oledDraw(char0, textRow8, char3Y+3, bitmapWidth, bitmapHeight);
         break;
  }
  
  OrbitOledUpdate();
  oledReset();
  
  lBtn1 = GPIOPinRead(BTN1Port, BTN1);
  lBtn2 = GPIOPinRead(BTN2Port, BTN2);
  
  //determine user button input after "game over"
  
  if(lBtn1 == BTN1){
    endGame= false; 
    play = true; //restart game if user presses btn 1
    gameReset();
  }
  else if(lBtn2 == BTN2){
    endGame= false;
    play = false; //end game if user presses btn 2
    gameReset();
  }
  else;
}

void mainMenu() {
  
  lBtn1 = GPIOPinRead(BTN1Port, BTN1);
  if(lBtn1 == BTN1) {
    play = true;
    endGame = false;  //if btn1 is pressed, start the game
  }
  
  oledDraw(charT, textRow1, char1Y+3, bitmapWidth, bitmapHeight);  //draw the word TILT
  oledDraw(charI, textRow1, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charL, textRow1, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow1, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charT, textRow2, char1Y+3, bitmapWidth, bitmapHeight);  //draw the word TILT
  oledDraw(charI, textRow2, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charL, textRow2, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charTinv, textRow2, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charG, textRow4, char1Y, bitmapWidth, bitmapHeight); //draw the word GUIDE:
  oledDraw(charU, textRow4, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charI, textRow4, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charD, textRow4, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charGuideE, textRow4, char5Y, bitmapWidth, bitmapHeight);
  oledDraw(charCOLON, textRow4, char6Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charP, textRow6, char1Y, bitmapWidth, bitmapHeight); //draw the word PRESS
  oledDraw(charR, textRow6, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charE, textRow6, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charS, textRow6, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charS, textRow6, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charL, textRow7, char1Y+3, bitmapWidth, bitmapHeight); //draw the word LEFT
  oledDraw(charE, textRow7, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charF, textRow7, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow7, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charB, textRow8, char1Y, bitmapWidth, bitmapHeight); //draw the word BUTTN
  oledDraw(charU, textRow8, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow8, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow8, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charN, textRow8, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charT, textRow9, char2Y+3, bitmapWidth, bitmapHeight); //draw the word TO
  oledDraw(char0, textRow9, char3Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charM, textRow10, char1Y+3, bitmapWidth, bitmapHeight); //draw the word MAIN
  oledDraw(charA, textRow10, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charI, textRow10, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charN, textRow10, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charM, textRow11, char1Y+3, bitmapWidth, bitmapHeight); //draw the word MENU
  oledDraw(charE, textRow11, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charN, textRow11, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charU, textRow11, char4Y+3, bitmapWidth, bitmapHeight);
  
  oledDraw(charP, textRow13, char1Y, bitmapWidth, bitmapHeight); //draw the word PRESS
  oledDraw(charR, textRow13, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charE, textRow13, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charS, textRow13, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charS, textRow13, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charR, textRow14, char1Y, bitmapWidth, bitmapHeight); //draw the word RIGHT
  oledDraw(charI, textRow14, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charG, textRow14, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charH, textRow14, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow14, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charB, textRow15, char1Y, bitmapWidth, bitmapHeight); //draw the word BUTTN
  oledDraw(charU, textRow15, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow15, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow15, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charN, textRow15, char5Y, bitmapWidth, bitmapHeight);
  
  oledDraw(charT, textRow16, 9, bitmapWidth, bitmapHeight); //draw the word TO
  oledDraw(char0, textRow16, 15, bitmapWidth, bitmapHeight);
  
  oledDraw(charS, textRow17, char1Y, bitmapWidth, bitmapHeight); //draw the word START
  oledDraw(charT, textRow17, char2Y, bitmapWidth, bitmapHeight);
  oledDraw(charA, textRow17, char3Y, bitmapWidth, bitmapHeight);
  oledDraw(charR, textRow17, char4Y, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow17, char5Y, bitmapWidth, bitmapHeight);
  
 //Printing the static(unchanging) arrows on the bottom of the screen
 oledDraw(left, x, y, bitmapWidth, bitmapHeight);
 oledDraw(down, x2, y2, bitmapWidth, bitmapHeight);
 oledDraw(up, x3, y3, bitmapWidth, bitmapHeight);
 oledDraw(right, x4, y4, bitmapWidth, bitmapHeight);
  
  OrbitOledUpdate();
}

void gameText(){
  oledDraw(charT, textRow1, char1Y+3, bitmapWidth, bitmapHeight);  //draw the word TILT
  oledDraw(charI, textRow1, char2Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charL, textRow1, char3Y+3, bitmapWidth, bitmapHeight);
  oledDraw(charT, textRow1, char4Y+3, bitmapWidth, bitmapHeight);
 //Printing "LVL" under "TILT"
 oledDraw(charL, textRow2, char1Y+3, bitmapWidth, bitmapHeight);
 oledDraw(charV, textRow2, char2Y+3, bitmapWidth, bitmapHeight);
 oledDraw(charL, textRow2, char3Y+3, bitmapWidth, bitmapHeight);
 //Printing "HP" under "LVL"
 oledDraw(charH, textRow3, char1Y+3, bitmapWidth, bitmapHeight);
 oledDraw(charP, textRow3, char2Y+3, bitmapWidth, bitmapHeight);
 //Printing the static(unchanging) arrows on the bottom of the screen
 oledDraw(left, x, y, bitmapWidth, bitmapHeight);
 oledDraw(down, x2, y2, bitmapWidth, bitmapHeight);
 oledDraw(up, x3, y3, bitmapWidth, bitmapHeight);
 oledDraw(right, x4, y4, bitmapWidth, bitmapHeight);
 oledDraw(z, targetX[0], targetY[0], bitmapWidth, bitmapHeight);
}

//reset all values and reset OLED screen upon "game reset"
void gameReset(){
  fClearOled = true;
  
  targetX[0] = 100;
  targetX[1] = 100;
  
  targetY[0]=y;
  targetY[1]=y4;
  
  drawNew[0] = 0;
  drawNew[1] = 0;
  
  //reset values
  passFail =0;
  missHit =0;
  tiltTimer =0;
  coolDown =0;
  iterationCount=0;
  
  score=0;
  lives=10;
  i=0;
  
  d=rand()%4;
  r=rand()%4;
  
  z=left;
  a=right;
  
  fDirY =false;
  fDirX =false;
}

void gameSetup(){
  //Clears the screen and moves the cursors
    OrbitOledClear();
    OrbitOledMoveTo(0,0);
    OrbitOledSetCursor(0,0);
    fClearOled = false;

    //Enable I2C Peripheral
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralReset(SYSCTL_PERIPH_I2C0);
    
    //Set I2C GPIO pins 
    GPIOPinTypeI2C(I2CSDAPort, I2CSDA_PIN);
    GPIOPinTypeI2CSCL(I2CSCLPort, I2CSCL_PIN);
    GPIOPinConfigure(I2CSCL);
    GPIOPinConfigure(I2CSDA);
    
    //Setup I2C
    I2CMasterInitExpClk(I2C0_BASE, SysCtlClockGet(), false);
    
    //Initialize the Accelerometer
    GPIOPinTypeGPIOInput(ACCL_INT2Port, ACCL_INT2);
    
    rgchWriteAcclY[0] = chPwrCtlRegY; // Sets the pins that will read the accelerometer values
    rgchWriteAcclY[1] = 1 << 3; //Sets Accl in measurement mode
    I2CGenTransmit(rgchWriteAcclY, 1, WRITE, ACCLADDR); //Transmits the data of the accelerometer
    
    rgchWriteAcclX[0] = chPwrCtlRegX; // Sets the pins that will read the accelerometer values
    rgchWriteAcclX[1] = 1 << 3;	// sets Accl in measurement mode
    I2CGenTransmit(rgchWriteAcclX, 1, WRITE, ACCLADDR); //Transmits the data of the accelerometer
}

