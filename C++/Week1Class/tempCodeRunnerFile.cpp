# include <iostream> 
using namespace std;

int main ()  {
    int n=710, guess, temp=0;
    cout<< "Guess the secret number in 10 chances: ";
    
    for (int i=0; i<10; i++) {
        temp++;
        cin>> guess;
        if (guess<0) {
            cout<< "It's a positive number" <<endl;
            continue;
        }
        else if (guess>0 && guess<=500) {
            cout<< "Guess is too low" <<endl;
            continue;
        }
        else if (guess>500 && guess<=650) {
            cout<< "Guess is low" <<endl;
            continue;
        }
        else if (guess>650 && guess<=700) {
            cout<< "Guess is close" <<endl;
            continue;
        }
        else if (guess>700 && guess<710) {
            cout<< "Guess is too close" <<endl;
            continue;
        }
        else if (guess==710) {
            cout<< "You found the secret number!!!";
            break;
        }
        else if (guess>710 && guess<=720) {
            cout<< "Guess is too close" <<endl;
            continue;
        }
        else if (guess>720 && guess<=750) {
            cout<< "Guess is close" <<endl;
            continue;
        }
        else if (guess>750 && guess<=1000) {
            cout<< "Guess is high" <<endl;
            continue;
        }
        else if (guess>1000) {
            cout<< "Guess is very high" <<endl;
            continue;
        }
    }
    if (temp>=10) {
        cout<< "Your guess limits are exhausted";
    }
}