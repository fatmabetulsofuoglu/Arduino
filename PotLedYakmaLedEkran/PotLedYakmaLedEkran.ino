#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int deger=0;
int led=3;
 
int pot=A0;
void setup() {
 pinMode(3,OUTPUT);
 lcd.begin();
  Serial.begin(9600);
  Serial.println("Potansiyometre ile led yakma");
  delay(300);

}

void loop() {
  deger=analogRead(pot);
float gerilim=(5.00/1024.00)*deger;
 analogWrite(3, deger);
 
 Serial.print("Analog Deger: ");
 Serial.println(deger);
 Serial.print("Digital Deger:");
 Serial.println(gerilim);
 
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Analog:");
  lcd.print(deger);
  lcd.setCursor(2,1);
  lcd.print("Digital:");
  lcd.print(gerilim);
 delay(500);
}
