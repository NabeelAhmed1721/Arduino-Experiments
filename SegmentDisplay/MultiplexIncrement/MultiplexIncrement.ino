int segments[] = {6, 5, 4, 3}; // dislay segments

int pins[] = {13, 12, 11, 10, 9, 8, 7}; // sorted from A - G for model 5641AS


int multiplexDelay = 5; // 5 ms

void setup() {
  for (int x = 0; x < 4; x++ ) {
    pinMode(segments[x], OUTPUT);
    digitalWrite(segments[x], HIGH);
  }

  for (int x = 0; x < 7; x++ ) {
    pinMode(pins[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
//  for (int x = 0; x <= 9999; x++ ) {
//      createMultiplexDigit(x);
//  }

createMultiplexDigit(7210);
  //  for (int x = 0; x <= 9; x++ ) {
  //    createDigit(x);
  //    delay(600);
  //    destroyAllDigits();
  //  }
}
