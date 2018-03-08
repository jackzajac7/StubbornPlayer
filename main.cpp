//Aero Zajac
#include "SecretDoor/SecretDoor.h"
#include <iostream>

int main()
{
        SecretDoor game;
        char repeat='y'; 
        int dubs=0; //# wins
        int num_played=0; //# times played
        char guess1; 
        char guess2;


        do {
                if(repeat != 'n' && repeat != 'N') {
                        if(repeat == 'y' || repeat == 'Y') { //will only play again if user enters y/Y

                                game.newGame();
                                std::cout<< "Which door do you choose? (A/B/C) ";
                                std::cin>>guess1;
                                if(guess1 == 'a' || guess1 == 'A') { //checking users answers and opening user specified door
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
                                        std::cout<<"It is not behind door C."<<std::endl; //checks users answer and prints a statement based off of it
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


                                if(game.isWinner() == true) { //if the user wins both # of times played and # of wins is inreased by 1
                                        std::cout<< "You won." <<std::endl;
                                        num_played++;
                                        dubs++;
                                }
                                else {
                                        std::cout<< "You lose." <<std::endl; //only # of times played increases if they lose
                                        num_played++;
                                }

                                std::cout<< "Play again? (Y/N) ";
                        }
                        else {
                                std::cout<<repeat<<" is not a valid response. Please choose from (Y/N)."<<std::endl;
                        }
                        std::cin>>repeat;
                }
                else if(repeat == 'n' || repeat == 'N') {
                        double percent=((double) dubs/(double) num_played)*100; //casting double onto integers inorder to calculate the percentage
                        std::cout<< "You won "<<percent<<"% of the time, it's time to give up!" <<std::endl;
                        return 0;
                }

        } while((repeat != 'n' || repeat != 'N'));

        

        return 0;
}
