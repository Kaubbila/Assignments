#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game (int maxnum);

int main()
{
    int number;
    cout<<"Give upper limit: ";
    cin>>number;
    int guesses = game(number);
    cout<<"\nguesses: "<<guesses<<"\n";
    return 0;
}

int game (int maxnum){

    srand(time(0)); //Mahdollistaa random luvun vaihtuvuude kellonajan vaihtuduuden mukaan.
    int guess,guesses=0, randomized = (rand() % maxnum)+1;

    while(1) {
        cout<<"Guess the number ";
        cin>>guess;
        guesses = guesses + 1;

        if(guess < randomized) {
            cout<<"Number is bigger\n";
        }else if(guess > randomized) {
            cout<<"Number is smaller\n";
        }else{
            cout<<"Yay! Correct!\n";
            break;
        }
    }
    return guesses;
}
