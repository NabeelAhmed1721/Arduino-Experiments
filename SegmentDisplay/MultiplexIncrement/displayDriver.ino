void createDigit(int number) {
  if (number >= 0 && number <= 9) {
    switch (number) {
      case 0:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        break;
      case 1:
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        break;
      case 2:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(7, HIGH);
        break;
      case 3:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(7, HIGH);
        break;
      case 4:
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        break;
      case 5:
        digitalWrite(13, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        break;
      case 6:
        digitalWrite(13, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        break;
      case 7:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        break;
      case 8:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        break;
      case 9:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        break;
    }
  }
}

void destroyDigit(int number) {
  if (number >= 0 && number <= 9) {
    switch (number) {
      case 0:
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        break;
      case 1:
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        break;
      case 2:
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(7, LOW);
        break;
      case 3:
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        digitalWrite(7, LOW);
        break;
      case 4:
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        break;
      case 5:
        digitalWrite(13, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        break;
      case 6:
        digitalWrite(13, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        break;
      case 7:
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        break;
      case 8:
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        break;
      case 9:
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        break;
    }
  }
}

void destroyAllDigits() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
}
