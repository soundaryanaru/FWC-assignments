//----------------------Skeleton Code--------------------//
#include <WiFi.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

//    Can be client or even host   //
#ifndef STASSID
#define STASSID "Soundarya" // Add your network credentials
#define STAPSK  "nithya@123"
#endif

const char* ssid = STASSID;
const char* password = STAPSK;

int U,V,W,A;
void OTAsetup() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    delay(5000);
    ESP.restart();
  }
  ArduinoOTA.begin();
}

void OTAloop() {
  ArduinoOTA.handle();
}

//-------------------------------------------------------//
int U,V,W;
INT A,B,C,D;
void disp_7447(int D,int C,int B,int A);
{
	digitalwrite(2,A)
}
void setup(){
  OTAsetup();
  pinMode(2, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);

  //-------------------//
  // Custom setup code //
  //-------------------//
}

void loop() {
  OTAloop();
  U = digitalRead(6);
  V = digitalRead(7);
  W= digitalRead(8);
  A = (U&&V) || (U&&!W);
  disp_7447(int D,int C,int B,int A);
  delay(10);  // If no custom loop code ensure to have a delay in loop
  //-------------------//
  // Custom loop code  //
  //-------------------//
}
