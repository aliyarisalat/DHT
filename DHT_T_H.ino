
#include <DHT.h>

DHT dht(3,DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
 }

void loop() {
  // put your main code here, to run repeatedly:
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.println(""Humidity: " + String(h) + " % ");
  Serial.println(""Temperature: " + String(t) + " *C "); 
  Serial.println(""Temperature: " + String(t) + " *F "); 
  Serial.println(""Temperature: " + String(t) + " *K "); 

  delay(1000);

}
