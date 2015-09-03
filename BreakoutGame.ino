
int gameLevels[3][8][8] ={ { \
    {1, 1, 1, 1, 1, 1, 1, 1},  \
    {1, 1, 1, 1, 1, 1, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 0, 1, 1, 1, 1}, \
    {1, 1, 0, 0, 0, 0, 1, 1} \
},
{ \
    {0, 1, 0, 1, 0, 1, 0, 1},  \
    {1, 0, 1, 0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0, 1, 0, 1}, \
    {1, 0, 1, 0, 1, 0, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 0, 1, 1, 1, 1}, \
    {1, 1, 0, 0, 0, 1 , 1, 1} \
},
{ \
    {0, 0, 0, 0, 0, 0, 0, 0},  \
    {1, 0, 1, 0, 1, 0, 1, 0}, \
    {1, 0, 1, 0, 1, 0, 1, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 0, 1, 1, 1, 1}, \
    {1, 1, 0, 0, 0, 1, 1, 1} \
}

};

/*  {0, 1, 0, 1, 0, 1, 0, 1},  \
    {1, 0, 1, 0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0, 1, 0, 1}, \
    {1, 0, 1, 0, 1, 0, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 0, 1, 1, 1, 1}, \
    {1, 1, 0, 0, 0, 1, 1, 1} 
*/

/*Smiley Face for losing*/
int gameOverFace[8][8] = { \
  {1,1,0,0,0,0,1,1}, \
  {1,0,1,1,1,1,0,1}, \
  {0,1,0,1,1,0,1,0}, \
  {0,1,1,1,1,1,1,0}, \
  {0,1,1,0,0,1,1,0}, \
  {0,1,0,1,1,0,1,0}, \
  {1,0,1,1,1,1,0,1}, \
  {1,1,0,0,0,0,1,1}, \
};

/*Smiley Face for winning*/
int winFace[8][8] = { \
  {1,1,0,0,0,0,1,1}, \
  {1,0,1,1,1,1,0,1}, \
  {0,1,0,1,1,0,1,0}, \
  {0,1,1,1,1,1,1,0}, \
  {0,1,0,1,1,0,1,0}, \
  {0,1,1,0,0,1,1,0}, \
  {1,0,1,1,1,1,0,1}, \
  {1,1,0,0,0,0,1,1}, \
};

/*Display Number 1*/
int levelOne[8][8] = { \
  {1,1,1,1,0,1,1,1}, \
  {1,1,1,0,0,1,1,1}, \
  {1,1,1,1,0,1,1,1}, \
  {1,1,1,1,0,1,1,1}, \
  {1,1,1,1,0,1,1,1}, \
  {1,1,1,1,0,1,1,1}, \
  {1,1,1,1,0,1,1,1}, \
  {1,1,0,0,0,0,0,1}, \
};


/*Display Number 2*/
int levelTwo[8][8] = { \
  {1,1,0,0,0,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,0,0,0,0,1,1}, \
  {1,1,0,1,1,1,1,1}, \
  {1,1,0,1,1,1,1,1}, \
  {1,1,0,1,1,1,1,1}, \
  {1,1,0,0,0,0,1,1}, \
};

/*Display Number 3*/
int levelThree[8][8] = { \
  {1,1,0,0,0,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,0,0,0,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,0,0,0,0,1,1}, \
};


/*Display right arrow*/
int arrowPattern[8][8] = { \
  {1,1,1,1,1,1,1,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,1,1,1,1,0,1}, \
  {0,0,0,0,0,0,0,0}, \
  {1,1,1,1,1,1,0,1}, \
  {1,1,1,1,1,0,1,1}, \
  {1,1,1,1,1,1,1,1}, \
  {1,1,1,1,1,1,1,1}, \
};


/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/


// 2-dimensional array of row pin numbers:
const int row[8] = {16,12,18,13,5,19,7,2 };

// 2-dimensional array of column pin numbers:
const int col[8] = {9,8,4,17,3,10,11,6};

// 2-dimensional array of pixels:
int pixels[8][8];          

// Ball position:
int x = 3;
int y = 6;




//game
boolean gameEnded;
int level;

int maxLevel =1;
int dx;
int dy;
int pointsCounter;
int leftCounter=0;
int rightCounter=0;
int speedOfBall;
int sp=0;
int  goDown;
int goDownCounter;


/*To indicate if start button is pressed*/
boolean start = false;

/*Variables to control time displaying patterns*/
int timeBetweenLevels;
int endLevelTime = 0;




/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/




void initGame()
{   
    speedOfBall = 1000;
    level = 0;
    getNewLevel();
    goDown = 10000;
    goDownCounter = 0;
    gameEnded = false;
}


/*====================================================================================================================================================================================*/


void getNewLevel()
{
  pointsCounter=0;

  for(int i=0;i<8;i++)
  {
     for(int j=0;j<8;j++)
     {
       pixels[i][j] = gameLevels[level][i][j];
       if( pixels[i][j] == 0)
       {
          pointsCounter++; 
       }
    } 
  }
  
  //Decrement for ball
  pointsCounter--;
  
  //Decrement for racket
  pointsCounter = pointsCounter - 4 + level;
  
  dy=-1;
  dx=1;
  
  speedOfBall = speedOfBall/2;  // Speeding the ball each level
  x = 3;
  y = 6;

}


/*====================================================================================================================================================================================*/


void infLoopHandle()
{
   for(int i=5;i>0;i--)
   {
     for(int j=0;j<8;j++)
     {
        pixels[i][j]=pixels[i-1][j];
     }
   } 
  
   for(int j=0;j<8;j++)
   {
      pixels[0][j]=1;
   }  
}


/*====================================================================================================================================================================================*/



void gameTick()
{
   int spx = x;
   int spy = y;
   sp = 0;
  
  if(y==7 )
  {
   gameEnded = true;
   start = false;
   level = 0; 
   gameOver();
   
  }
     
   if(y+dy<0 || y+dy>=8 )   //Reverse the direction of the ball Vertically
   {
      dy=-dy;
   }  
   
   
   //Managing the x-direction
   if(x+dx<0 || x+dx>=8  )   //Reverse the direction of the ball horizontally
   {
      dx=-dx;
       
   }
   
   if( pixels[y][x+dx] == 1 && pixels[y+dy][x] == 1 && pixels[y+dy][x+dx] == 0 )
   {
    // Serial.print("hello");
     if(y+dy<=5)
     {
       pixels[y+dy][x+dx] = 1;
       pointsCounter--;
     }
       dx=-dx;
       dy=-dy;
        
     if(x+dx>=0 && x+dx<8 && y+dy>=0 && y+dy<8 &&  pixels[y+dy][x+dx] == 1)
     {
       x+=dx;
       y+=dy;
       pixels[spy][spx]=1;
       pixels[y][x]=0;
      }
        return ;
       
   }
   
    if(pixels[y][x+dx] == 0)  
    {
      if(y<6)  // IF the led is on and not the ball or racket 
      {
         pixels[y][x+dx]=1;
         pointsCounter--;
      }
      
      dx=-dx;
          
    }
   
   
    /*Managing the Y-direction*/
    
    
    if(pixels[y+dy][x] == 0)
    {
      if(y<6)
      {
        pixels[y+dy][x] = 1;
        pointsCounter--;
      }
        dy=-dy;
    }
    
    // note diagonal is not handled
     
    if(x+dx>=0 && x+dx<8 && y+dy>=0 && y+dy<8 && pixels[y+dy][x+dx]==1)
    {
      x+=dx;
      y+=dy;
      pixels[spy][spx]=1;
      pixels[y][x]=0;
    }
    
}


/*====================================================================================================================================================================================*/


void left()
{
  leftCounter=0;
  if(pixels[7][0] == 0)
  {
     return ; 
  }
  
  for(int i=1;i<=7;i++)
  {
     pixels[7][i-1]=pixels[7][i]; 
  }
  
  pixels[7][7]=1;
  
  Serial.print("Helllo");
}


/*====================================================================================================================================================================================*/


void right()
{
  rightCounter=0;
  if(pixels[7][7]==0)
  {
     return ; 
  }
  for(int i=7;i>0;i--)
  {
     pixels[7][i]=pixels[7][i-1]; 
  }
  pixels[7][0]=1;
  
  start = true;
}


/*====================================================================================================================================================================================*/


void dispalyArrow()
{   
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
       pixels[i][j] = arrowPattern[i][j];
    } 
  }
}

/*====================================================================================================================================================================================*/


void gameOver(){
   
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
       pixels[i][j] = gameOverFace[i][j];
    } 
  }
}

/*====================================================================================================================================================================================*/


void win(){
   
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
       pixels[i][j] = winFace[i][j];
    } 
  }
}

/*====================================================================================================================================================================================*/


void displayLevel(){

  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
      if(level == 0)
       pixels[i][j] = levelOne[i][j];
       
       else if(level == 1)
       pixels[i][j] = levelTwo[i][j];
       
       else if(level == 2)
       pixels[i][j] = levelThree[i][j];
    } 
  }

}


/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/


void setup() {

  Serial.begin(9600);
  pinMode(A1, INPUT);  

  // initialize the I/O pins as outputs
  // iterate over the pins:
  for (int i = 0; i < 8; i++) 
  {
    pinMode(col[i], OUTPUT);
    pinMode(row[i], OUTPUT);  
   
  }
  
   dy=-1;
   dx=1;
 
   dispalyArrow(); 
 
}

/*====================================================================================================================================================================================*/
/*====================================================================================================================================================================================*/


void loop() {

  leftCounter++;
  rightCounter++;
          
   /*Start the game when right button is pressed */
   if(rightCounter>=100 && map(analogRead(A0), 0, 1023, 0, 1) == 1 && start == false)
   {
       right();
            
       endLevelTime = millis();
       displayLevel();
       
       //Displaying Level One Number
       while(timeBetweenLevels - endLevelTime < 2500)
       {
         refreshScreen();
         timeBetweenLevels = millis();
         
       }
       
       initGame();
       endLevelTime = 0;
          
   }
         
                                               
                                               
                                                     /*------------------> When the Game starts <----------------*/

  if(start == true && !gameEnded)
  {
  
    /*In case of winning, we get to next level*/
    if(pointsCounter<=0)
    {
      if(endLevelTime == 0)
      {
        level++;
        win();
        if(level > 1){
          start = false;
          level = 0;  
      }
        endLevelTime =  millis();
      }
  
  
    /*Display the level Number*/
    if(timeBetweenLevels - endLevelTime > 5000)
    { 
      getNewLevel(); 
      endLevelTime = 0;
    }else if(timeBetweenLevels - endLevelTime > 2500)
    {
      timeBetweenLevels = millis();
      displayLevel();
   
     }else{
      timeBetweenLevels = millis();
     }
      

   /*During Playing the Game*/
 
  }else{
    sp++;
    goDownCounter++;
 
    if(goDownCounter>=goDown && y>=6)
    {   
      infLoopHandle();
      goDownCounter=0;
    }
  
    if(sp>=speedOfBall && gameEnded== false)
      gameTick();
     
 
    if(leftCounter>=100 && map(analogRead(A1), 0, 1023, 0, 1) == 1)
       left();
     
    if(rightCounter>=100 && map(analogRead(A0), 0, 1023, 0, 1) == 1)
       right();

   } 
 }
    
  // Draw the screen:
  refreshScreen();
  
}


/*====================================================================================================================================================================================*/


/*Display the Array pixels on the LED MATRIX*/
void refreshScreen() {
  
  for (int thisRow = 0; thisRow < 8; thisRow++) {
    // take the row pin (anode) high:
    digitalWrite(row[thisRow], HIGH);
    // iterate over the cols (cathodes):
    for (int thisCol = 0; thisCol < 8; thisCol++) {
      // get the state of the current pixel;
      int thisPixel = pixels[thisRow][thisCol];
     
      // when the row is HIGH and the col is LOW,
      // the LED where they meet turns on:
      digitalWrite(col[thisCol], thisPixel);
      // turn the pixel off:
      if (thisPixel == LOW) {
        digitalWrite(col[thisCol], HIGH);
      }
    }
    // take the row pin low to turn off the whole row:
    digitalWrite(row[thisRow], LOW);
  }
}
