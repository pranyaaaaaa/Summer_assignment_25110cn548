#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, sum = 0, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while(temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of powers of digits
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}