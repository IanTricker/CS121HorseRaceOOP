#include <iostream>
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

void advance(){

} // end advance
