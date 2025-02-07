//race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include "horse.h"

class Race{
  private:
    const int TRACK_LENGTH=15;
    const static int numHorses=5;
    Horse* horse[numHorses];
  public:
    Race();
    void run();
}; // end class def

#endif
