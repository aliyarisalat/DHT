
#include <DHT.h>

DHT dht (2,DHT11);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h=dht.readHumidity();
  float t=dht.readTemperature();

  Serial.print("Current humidity: ");
  Serial.print(h);
  Serial.println(" % ");
  Serial.print(" temperature: ");
  Serial.print(t);
  Serial.println(" *C ");
  delay(500);
}
  
