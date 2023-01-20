#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void guessNumber();

int main()
{
    guessNumber();
    return 0;
}

void guessNumber(){

    srand(time(0)); //Mahdollistaa random luvun vaihtuvuuden kellonajan vaihtelulla.
    int guess, randomized = (rand() % 20)+1;

    while(1) {
        cout<<"Guess the number ";
        cin>>guess;

        if(guess < randomized) {
            cout<<"Number is bigger\n";
        }else if(guess > randomized) {
            cout<<"Number is smaller\n";
        }else{
            cout<<"Yay! Correct!\n";
            break;
        }
    }
}
