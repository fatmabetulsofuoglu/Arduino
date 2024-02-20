#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 

void setup() {
 
  lcd.begin();
}

void loop() {
  
  int i;  
  for(i=17; i>0; i-=2)
{
lcd.setCursor(i,0);
lcd.print("GALiBi");
delay(500);
lcd.setCursor(i,1);
lcd.print(" ");
  lcd.clear();
}


  
  for(i=17; i>0; i-=2)
{
lcd.setCursor(i,0);
lcd.print("VAKFI");
delay(500);
lcd.setCursor(i,1);
lcd.print(" ");
  lcd.clear();


  
}
  for(i=17; i>0; i-=2)
{
  
  lcd.setCursor(i,0);
  lcd.print("TEKNOLOJi");
  delay(500);
  lcd.setCursor(i,1);
  lcd.print("");
  lcd.clear();
  
}
  for(i=17; i>0; i-=2)
{
  
  lcd.setCursor(i,0);
  lcd.print("ATOLYESiNE");
  delay(500);
  lcd.setCursor(i,1);
  lcd.print("");
  lcd.clear();
}
  for(i=17; i>0; i-=2)

{

  lcd.setCursor(i,0);
  lcd.print(" HOS GELDiNiZ" );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
}
  for(i=17; i>0; i-=2)

{
  lcd.setCursor(i,0);
  lcd.print(" UZAKTAN" );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
}
  for(i=17; i>0; i-=2)

{
  lcd.setCursor(i,0);
  lcd.print(" EGiTiM" );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
}
   for(i=17; i>0; i-=2)

{
  lcd.setCursor(i,0);
  lcd.print(" YAPIYORUZ " );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
} 
  for(i=17; i>0; i-=2)

{
   lcd.setCursor(i,0);
  lcd.print(" LUTFEN " );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
  
}

  for(i=17; i>0; i-=2)

{
   lcd.setCursor(i,0);
  lcd.print(" ViDEOLARIMIZI " );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
}
  for(i=17; i>0; i-=2)

{
   lcd.setCursor(i,0);
  lcd.print(" iZLEYiNiZ" );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
  
}
  for(i=17; i>0; i-=2)

{
   lcd.setCursor(i,0);
  lcd.print(" --->   ---> " );
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
  lcd.clear();
  
}

}
