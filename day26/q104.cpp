#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "Q1. What is the capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n";
    cin >> answer;

    if(answer == 1)
        score++;

    cout << "Q2. How many days are there in a week?\n";
    cout << "1. 5\n2. 7\n3. 10\n";
    cin >> answer;

    if(answer == 2)
        score++;

    cout << "Your Score = " << score << "/2";

    return 0;
}