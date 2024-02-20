
long rastgelesayi;

void setup() {
 Serial.begin(9600);
 randomSeed(100);
// randomSeed(200);
 Serial.println("SAYILAR");
}

void loop() {

  rastgelesayi = random(1,100);
  Serial.println(rastgelesayi);
  delay(100);

}
