
long analodeger;

void setup() {
 Serial.begin(9600);
 Serial.println("Sayılar");
}

void loop() {

  analodeger = analogRead(A0);
  Serial.println(analodeger);
  delay(100);

}
