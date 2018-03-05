//Aero Zajac
#include "SecretDoor/SecretDoor.h"
#include <iostream>

int main()
{
  SecretDoor game;
  int repeat=0;
  int dubs=0;

  std::cout<< "How many times would you like to play?" <<std::endl;
  std::cin>>repeat;
  std::cout<< "Let's play!" <<std::endl;

  while(repeat > 0) {

  	game.newGame();
  	game.guessDoorC();
  	game.guessDoorC();
  	if(game.isWinner() == true) {

  		dubs++;

  	}

  }

  std::cout<< "You only won "<<dubs<<", it's time to give up!" <<std::endl;
    
  return 0;
}
