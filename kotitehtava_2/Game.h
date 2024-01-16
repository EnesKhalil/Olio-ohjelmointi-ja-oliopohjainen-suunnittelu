#ifndef GAME_H
#define GAME_H
#include <cstdlib>

using namespace std;

class Game{
private:
    int maxNumber, playerGuess, randomNumber, numOfGuesses;

public:
    Game(int a){
        maxNumber = a;
    }
    void play(){

        srand(time(0));
        randomNumber = rand() % maxNumber;

        cout<< "GAME CONSTRUCTOR: object initialized with "<< maxNumber <<" as a maximum value."<< endl;
        while(randomNumber != playerGuess){

            cout<< "Give your guess between 1-"<< maxNumber<< endl;
            cin>> playerGuess;
            if(playerGuess > randomNumber){
                cout<< "Your guess is too big"<< endl;
            }
            else if(playerGuess < randomNumber){
                cout<< "Your guess is too small"<< endl;
            }
            if(playerGuess == randomNumber){
                printGameResult();
                break;
            }
            numOfGuesses++;
        }
    }
    void printGameResult(){
        cout<<"Your guess is right = "<< playerGuess<< " with "<< numOfGuesses<< " guesses."<< endl;
        cout<<"GAME DESTRUCTOR: object cleared from stack memory."<< endl;


    }

};
#endif // GAME_H
