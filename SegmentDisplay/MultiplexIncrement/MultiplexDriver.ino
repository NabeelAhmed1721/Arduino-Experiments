void createMultiplexDigit(int reqNumber) {
  String reqNumberStr = String(reqNumber);
  int segmentsNeeded = reqNumberStr.length();

  int reqNumberArray[segmentsNeeded];

  for (int x = 0; x < segmentsNeeded; x++) {
    reqNumberArray[(segmentsNeeded-1)-x] = String(reqNumberStr.charAt(x)).toInt(); // create Array
  }


  for (int x = 0; x < segmentsNeeded; x++) {
    digitalWrite(segments[x], LOW);
    int s = reqNumberArray[x];

    createDigit(s);
    delay(multiplexDelay);
    digitalWrite(segments[x], HIGH);
    destroyAllDigits();
  }
}
