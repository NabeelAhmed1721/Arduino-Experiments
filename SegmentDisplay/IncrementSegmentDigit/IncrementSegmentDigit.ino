int pins[] = {13, 12, 11, 10, 9, 8, 7}; // sorted from A - G for model 5641AS

// int pA = 13;

void setup() {
  for (int x = 0; x < 7; x++ ) {
    pinMode(pins[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x <= 9; x++ ) {
    createDigit(x);
    delay(500);
    destroyAllDigits();
  }
}
