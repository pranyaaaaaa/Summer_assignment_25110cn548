#include <iostream>
using namespace std;

int main() {
    int secret = 7, guess;

    cout << "Guess the number (1-10): ";
    cin >> guess;

    if(guess == secret)
        cout << "Correct Guess!";
    else
        cout << "Wrong Guess! The number was " << secret;

    return 0;
}