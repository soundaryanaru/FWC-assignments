#include <Arduino.h>
int W,V,U;
int A,B,C,D;


void disp_7474(int D,int C,int B,int A)
{
   digitalWrite(2,A);//lsb

}

void setup() {
  pinMode(2, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}


void loop()
{
   

  U = digitalRead(6);
  V = digitalRead(7);
  W= digitalRead(8);
  A = (U&&V) || (U&&!W);

disp_7474(D,C,B,A);
  
}




