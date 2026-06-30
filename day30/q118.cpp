#include <iostream>
using namespace std;

int main() {
    string book[5];

    cout << "Enter 5 book names:\n";

    for(int i = 0; i < 5; i++) {
        cin.ignore();
        getline(cin, book[i]);
    }

    cout << "\n--- Library Books ---\n";
    for(int i = 0; i < 5; i++) {
        cout << book[i] << endl;
    }

    return 0;
}