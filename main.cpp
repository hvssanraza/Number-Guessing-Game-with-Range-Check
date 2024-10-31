#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    srand(time(0));
    int secretNumber = rand() % 20 + 1;
    int guess;

    while (true) {
        cout<<"Enter a random Number (1-20) (-1 to Quit): "<<endl;
        cin>>guess;

        if (guess==-1)
            {
            cout<<"You chose to Quit, Game Over!"<<endl;
            return 0;
        }
        if (guess == secretNumber)
        {
            cout<<"Congrats! You have guessed the Correct Number!"<<endl;
            break;
        }
        else if (guess > secretNumber) {
            cout<<"Entered Number is High, Better Luck Next Time!"<<endl;
            cout<<"Secret Number was: "<<secretNumber<<endl;
            break;
        }
        else {
            cout<<"Entered Number is Low, Better Luck Next Time!"<<endl;
            cout<<"Secret Number was: "<<secretNumber<<endl;
            return 0;
        }
    }
    return 0;
}
