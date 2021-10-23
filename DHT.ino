#include <LiquidCrystal.h>
#include <DHT.h>

LiquidCrystal lcd(2,3,4,5,6,7);
DHT dht(8,DHT11);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
  dht.begin();
 }

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  lcd.setCursor(0,0);
  lcd.print(h);
  Serial.println(""Humidity: " + String(h) + " % ");

  lcd.setCursor(0,1);
  lcd.print(t);
  Serial.println(""Temperature: " + String(t) + " *C "); 

  delay(1000);

}
