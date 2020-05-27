/*    Title - Interfacing 7 Segment Display 
 *    by Anukul Anand   
 *    27-05-2020
 *    "@breathelesselectronics"
 *    
 *    Connections......->  ARDUINO DIGITAL PINS       7 SEGMENT DISPLAY PINS
 *                                2                -            A
 *                                3                -            B
 *                                4                -            C
 *                                5                -            D
 *                                6                -            E
 *                                7                -            F
 *                                8                -            G
 */

//Define pin numbers for connection
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;

void setup() {

  // SET DIGITAL PINS AS OUTPUT
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {

  // To display 0
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);

  delay(1000);  //delay 1 second
  
  // To diplay 1
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);

  delay(1000); //delay 1 second
  
  // To diplay 2
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);

delay(1000); //delay 1 second
  
  // To diplay 3
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);

delay(1000);  //delay 1 second
  
  // To diplay 4
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);

delay(1000);  //delay 1 second
  
  // To diplay 5
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);

delay(1000);  //delay 1 second
  
  // To diplay 6
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);

delay(1000);  //delay 1 second
  
  // To diplay 7
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);

delay(1000);  //delay 1 second
  
  // To diplay 8
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);

delay(1000);  //delay 1 second
  
  // To diplay 9
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);

delay(1000);  //delay 1 second

}
