#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); //Mahdollistaa random luvun vaihtuvuuden.
    int guess, randomized = (rand() % 20)+1;

    //Lukujen guess
    while(1) {
        cout<<"Guess the number ";
        cin>>guess;

        if(guess < randomized) {
            cout<<"Number is bigger\n";
        }else if(guess > randomized) {
            cout<<"Number is smaller\n";
        }else{
            cout<<"YAY! Correct!\n";
            break;
        }
    }
    return 0;
}
