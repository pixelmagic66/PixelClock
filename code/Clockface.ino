ClockfaceWord clockface[] = {
  { {  0, 1, 2 },                0, alwaysOn },
  { {  6, 7 },                   1, alwaysOn },
  { { 20, 19, 18, 17 },          2, fiveMinute },
  { { 15, 14, 13, 12 },          3, tenMinute },
  { { 22, 23, 24, 25, 26 },      4, quarter },
  { { 29, 30, 31, 32 },          5, past },
  { { 42, 41, 40, 39 },          6, before },
  { { 96, 97, 98 },              7, wholeHour },
  { { 37, 36, 35, 34 },          8, halfHour },
  { { 102 },                     9, firstMinute },
  { { 101 },                    10, secondMinute },
  { { 100 },                    11, thirdMinute },
  { { 99 },                     12, fourthMinute },
  { { 88, 89, 90 },             13, isOneActive },
  { { 47, 48, 49 ,50 },         14, isTwoActive },
  { { 65, 64, 63, 62 },         15, isThreeActive },
  { { 87, 86, 85, 84 },         16, isFourActive },
  { { 91, 92, 93, 94 },         17, isFiveActive },
  { { 51, 52, 53 },             18, isSixActive },
  { { 67, 68, 69, 70, 71 },     19, isSevenActive },
  { { 44, 45, 46, 47 },         20, isEightActive },
  { { 71, 72, 73, 74, 75 },     21, isNineActive },
  { { 58, 57, 56, 55 },         22, isTenActive },
  { { 62, 61, 60 },             23, isElevenActive },
  { { 82, 81, 80, 79, 78, 77 }, 24, isTwelveActive }
};

bool alwaysOn(int hour, int minute) {
  return true;
}

bool firstMinute(int hour, int minute) {
  return (minute % 5) > 0;
}

bool secondMinute(int hour, int minute) {
  return (minute % 5) > 1;
}

bool thirdMinute(int hour, int minute) {
  return (minute % 5) > 2;
}

bool fourthMinute(int hour, int minute) {
  return (minute % 5) > 3;
}

bool fiveMinute(int hour, int minute) {
  switch(minute) {
    case  5: case  6: case  7: case  8: case  9:
    case 25: case 26: case 27: case 28: case 29:
    case 35: case 36: case 37: case 38: case 39:
    case 55: case 56: case 57: case 58: case 59:
      return true;
  }

  return false;
}

bool tenMinute(int hour, int minute) {
  switch(minute) {
    case 10: case 11: case 12: case 13: case 14:
    case 20: case 21: case 22: case 23: case 24:
    case 40: case 41: case 42: case 43: case 44:
    case 50: case 51: case 52: case 53: case 54:
      return true;
  }

  return false;
}

bool quarter(int hour, int minute) {
  switch(minute) {
    case 45: case 46: case 47: case 48: case 49:
    case 15: case 16: case 17: case 18: case 19:
      return true;
  }

  return false;  
}

bool past(int hour, int minute) {
  if ((minute >= 5) && (minute < 20)) return true;
  if ((minute >= 35) && (minute < 45)) return true;
  return false;
}

bool before(int hour, int minute) {
  if ((minute >= 20) && (minute < 30)) return true;
  if ((minute >= 45) && (minute < 60)) return true;
  return false;
}

bool wholeHour(int hour, int minute) {
  return minute < 5;
}

bool halfHour(int hour, int minute) {
  return ((minute >= 20) && (minute < 45));
}

bool isHourActive(int testHour, int hour, int minute) {
  int previousHour = testHour - 1;
  if (previousHour < 0) previousHour = 11;

  // 0 - 19 huidig uur
  // 20 - 60 vorig uur
  if ((minute < 20) && (testHour == hour)) return true;
  if ((minute >= 20) && (previousHour == hour)) return true;

  return false;
}

bool isOneActive(int hour, int minute)    { return isHourActive( 1, hour, minute); }
bool isTwoActive(int hour, int minute)    { return isHourActive( 2, hour, minute); }
bool isThreeActive(int hour, int minute)  { return isHourActive( 3, hour, minute); }
bool isFourActive(int hour, int minute)   { return isHourActive( 4, hour, minute); }
bool isFiveActive(int hour, int minute)   { return isHourActive( 5, hour, minute); }
bool isSixActive(int hour, int minute)    { return isHourActive( 6, hour, minute); }
bool isSevenActive(int hour, int minute)  { return isHourActive( 7, hour, minute); }
bool isEightActive(int hour, int minute)  { return isHourActive( 8, hour, minute); }
bool isNineActive(int hour, int minute)   { return isHourActive( 9, hour, minute); }
bool isTenActive(int hour, int minute)    { return isHourActive(10, hour, minute); }
bool isElevenActive(int hour, int minute) { return isHourActive(11, hour, minute); }
bool isTwelveActive(int hour, int minute) { return isHourActive( 0, hour, minute); }
