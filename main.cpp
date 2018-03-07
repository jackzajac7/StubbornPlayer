//Aero Zajac
#include "SecretDoor/SecretDoor.h"
#include <iostream>

int main()
{
        SecretDoor game;
        char repeat='y'; 
        int dubs=0;
        int num_played;
        char guess1; 
        char guess2;


        do {
                if((repeat == 'y' || repeat == 'Y')) {

                        game.newGame();
                        std::cout<< "Which door do you choose? (A/B/C) ";
                        std::cin>>guess1;
                        if(guess1 == 'a' || guess1 == 'A') {
                                game.guessDoorA();
                        }
                        else if(guess1 == 'b' || guess1 == 'B') {
                                game.guessDoorB();
                        }
                        else if(guess1 == 'c' || guess1 == 'C') {
                                game.guessDoorC();
                        }
                        else {
                                std::cout<<guess1<<" is not a valid response. Please choose from (A/B/C)."<<std::endl;
                        }


                        if(game.isAopen()) {
                                std::cout<<"It is not behind door C."<<std::endl;
                        }
                        else if(game.isBopen()) {
                                std::cout<< "It is not behind door B." <<std::endl;
                        }
                        else if(game.isCopen()) {
                                std::cout<< "It is not behind door A." <<std::endl;
                        }


                        std::cout<< "which door do you choose? (A/B/C) ";
                        std::cin>>guess2;
                        if(guess2 == 'a' || guess2 == 'A') {

                                game.guessDoorA();
                        }
                        else if(guess2 == 'b' || guess2 == 'B') {
                                game.guessDoorB();
                        }
                        else if(guess2 == 'c' || guess2 == 'C') {
                                game.guessDoorC();
                        }
                        else {
                                std::cout<<guess2<<" is not a valid response. Please choose from (A/B/C)."<<std::endl;
                        }


                        if(game.isWinner() == true) {
                                std::cout<< "You won." <<std::endl;
                                num_played++;
                                dubs++;
                        }
                        else {
                                std::cout<< "You lose." <<std::endl;
                                num_played++;
                        }

                        std::cout<< "Play again? (Y/N) ";
                }
                else {
                        std::cout<<repeat<<" is not a valid response. Please choose from (Y/N)."<<std::endl;
                }
                std::cin>>repeat;


        } while((repeat != 'n' || repeat != 'N'));

        std::cout<< "You won "<<(dubs/num_played)*100<<"% of the time, it's time to give up!" <<std::endl;

        return 0;
}
