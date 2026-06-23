#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter character to find frequency: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch)
            count++;
    }

    cout << "Frequency of " << ch << " = " << count;

    return 0;
}