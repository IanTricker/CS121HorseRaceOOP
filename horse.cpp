// horse.cpp
#include <iostream>
#include <random>
#include "horse.h"

Horse::Horse(){
  Horse::position=0;
  Horse::trackLength=15;
  Horse::id=0;
} // end constructor

void Horse::init(int id, int trackLength){
  Horse::position=0;
  Horse::id=id;
  Horse::trackLength=trackLength;
} // end init

void Horse::advance(){
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0,1);
  Horse::position=Horse::position+dist(rd);
} // end advance

void Horse::printLane(){
  for(int i=0;i<trackLength;i++){
    if(Horse::position==i){
      std::cout << id;
    } // end if
    else{
      std::cout << ".";
    } // end else
  } // end for loop
  std::cout << std::endl;
} // end printLane

bool Horse::isWinner(){
  bool win = false;
  if(Horse::position==Horse::trackLength){
    std::cout << "Horse " << Horse::id << " WINS!!!" << std::endl;
    win = true;
  }// end if
  return win;
} // end isWinner
