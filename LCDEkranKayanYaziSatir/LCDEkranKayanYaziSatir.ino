#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);       //lcd'yi tanımlıyoruz

void setup(){
 lcd.begin();
 
}

void loop()
{
 for(int i=0;i<10;i++)
{


 for (int sayi=0; sayi<=10; sayi++)
 {

 }
lcd.clear();
delay(250);
lcd.setCursor(1,0);
lcd.print("Kod no: ");
lcd.setCursor(1,1);
lcd.print("1234");
delay(3000);

lcd.clear();
delay(250);
lcd.setCursor(1,0);
lcd.print("Malzeme ismi: ");
lcd.setCursor(1,1);
lcd.print("Oyuncak");
delay(3000);

lcd.clear();
delay(250);
lcd.setCursor(1,0);
lcd.print("Gelis Tarihi:  ");
lcd.setCursor(1,1);
lcd.print("10-02-2019");
delay(3000);





}
  
}
