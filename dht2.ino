#include "dht.h"


#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  //Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
   //ThingSpeak.begin();
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print(" ");
    Serial.print(DHT.humidity);
  Serial.print(" ");
  Serial.print(" ");
   Serial.print(DHT.temperature); 
   Serial.println(" ");
    delay(20000);
 
  
 
}// end loop() 
