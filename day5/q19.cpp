#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime factors are: ";

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            cout << i << " ";
            num = num / i;
        }
    }

    return 0;
}