# CS121HorseRaceOOP

## horse.h and race.h
Follow HorseRaceOOP.svg

## horse.cpp
```
include iostream
include random
include horse.h
```
```
Horse:Horse():
  Horse::Position=0
  Horse::trackLength=15
  Horse::id=0
```
```
void Horse::init(int id, int trackLength):
  Horse::position=0
  Horse::id=id
  Horse::trackLength=trackLength
```
```
void Horse::advance():
  random_device
  randnum (0-1)
  Horse::position+randnum
```
```
void Horse::printLane():
  for(i=0; i<trackLength; i++):
    if(Horse::position==i):
      print id
    else:
      print "."
  print endl
```
```
bool Horse::isWinner():
  bool win = false
  if(Horse::positon==Horse::trackLength):
    print "Horse " id " Wins!!!"
    win =  true
  return win
```
##race.cpp
```
include iostream
include horse.h
include race.h
```
```
Race::Race():
  Race::TRACK_LENGTH
  RACE::numHorses
  for(i=0; i<numHorses;i++):
    Race::horse[i]
    Race::horse[i].init(i,TRACKLENGTH)
```
```
void Race::run():
  bool keepGoing=true
  while(keepGoing):
    for(i=0; i<numHorses;i++):
      Race::horse[i].advance()
      Race::horse[i].printLane()
      if(Race::horse[i].isWinner()):
        keepGoing=false
    print press enter for another turn
    input enter
```
## main.cpp
```
include iostream
include horse.h
include race.h
```
```
int main():
  Race r
  r.run()
  return 0
```
