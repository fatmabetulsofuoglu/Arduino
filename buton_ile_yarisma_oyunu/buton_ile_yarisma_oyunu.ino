#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int buton1 = 5;
int buton2 = 6;
int led1 = 4;
int led2 = 3;

void setup() {
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  lcd.begin();


}

void loop() {
  if (digitalRead(buton1) == HIGH) {
    digitalWrite(led1, HIGH);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("KIRMIZI TAKIM");
    delay(5000);
    lcd.clear();
    digitalWrite(led2, LOW);


  }
  else if (digitalRead(buton2) == HIGH) {
    digitalWrite(led2, HIGH);
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("YESIL TAKIM");
    delay(5000);
    lcd.clear();
    digitalWrite(led1, LOW);
  }
  else {
    lcd.setCursor(4, 0);
    lcd.print("ILK BILEN");
    lcd.setCursor(3, 1);
    lcd.print("KAZANIR  :)");
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }

}
