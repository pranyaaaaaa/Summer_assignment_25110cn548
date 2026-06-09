#include <iostream>
using namespace std;

int rev = 0;

void reverseNumber(int n) {
    if (n == 0)
        return;

    rev = rev * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverseNumber(n);

    cout << "Reversed number = " << rev;
    return 0;
}