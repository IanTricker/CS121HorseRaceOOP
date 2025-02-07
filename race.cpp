// race.cpp
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){
  Race::TRACK_LENGTH;
  Race::numHorses;
  for(int i=0;i<numHorses;i++){
    Race::horse[i];
    Race::horse[i].init(i,TRACK_LENGTH);
  } // end for loop
} // end constructor

void Race::run(){

  bool keepGoing=true;

  while(keepGoing){
    for(int i=0;i<numHorses;i++){
      Race::horse[i].advance();
      Race::horse[i].printLane();
      if(Race::horse[i].isWinner()){
        keepGoing=false;
      } // end isWinner
    } // end for loop
    std::cout << "Press enter for another turn";
    std::cin.get();
  } // end keepGoing 
} // end run
