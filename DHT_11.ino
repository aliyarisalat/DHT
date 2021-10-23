
# include<LiquidCrystal.h>
# include<DHT.h>
LiquidCrystal lcd(12,11,6,5,4,3);
DHT dht(13,DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t_c = dht.readTemperature();
  float t_f = dht.readTemperature(true);
  float t_k = t_c + 273.15;
  lcd.setCursor(0,1);
  lcd.print(" Humidity ");
  lcd.print(Temperature);

  lcd.print(millis(1/1000);
  Serial.println(" Humidity = " + String(h) + %);
  Serial.println(" Temperature = " + String(t_c) + " \xc2\xb0 c");
  Serial.println(" Temperature = " + String(t_f) + " \xc2\xb0 F");
  Serial.println(" Temperature = " + String(t_k) + "k\n ");
  delay(1000);
}
