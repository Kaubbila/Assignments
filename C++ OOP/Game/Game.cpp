#include "Game.h"
#include <iostream>
#include <ctime>
using namespace std;

Game::Game(int a) {

    maxNumber = a;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}

Game::~Game(){
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play(){

    std::srand(time(0));
    randomNumber = (std::rand() % maxNumber) + 1;

    while(playerGuess != randomNumber) {

        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;

        if(playerGuess < randomNumber) {
            cout<<"Your guess is too small"<<endl;


        } else if(playerGuess > randomNumber){
            cout<<"Your guess is too big"<<endl;


        } else {

            printGameResult();
        }
    }
}

void Game::printGameResult(){

    cout<<"Your guess is right = "<<randomNumber<<endl;
    cout<<"You guessed the right answer = "<<playerGuess<<" with "<<numOfGuesses<<" guesses"<<endl;
}
