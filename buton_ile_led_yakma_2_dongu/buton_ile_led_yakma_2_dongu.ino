int button = 2;
int ledler[] = {3, 4, 5, 6};
int sayac = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledler[i], OUTPUT);
  }
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    if (sayac < 4) {
        sayac = sayac + 1;
    } else {
        sayac = 0;
    }
}
  for (int i = 0; i < 4; i++) {
    if (i == sayac - 1) {
        digitalWrite(ledler[i], HIGH);
    } else {
        digitalWrite(ledler[i], LOW);
    }
}

  delay(200);
}
