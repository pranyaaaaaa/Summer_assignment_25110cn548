#include <iostream>
using namespace std;

int main() {
    long long num, largestPrime = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (long long i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}