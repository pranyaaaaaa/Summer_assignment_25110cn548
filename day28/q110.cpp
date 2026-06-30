#include <iostream>
using namespace std;

int main() {
    string name;
    int accNo;
    float balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "\n--- Account Details ---\n";
    cout << "Account Number: " << accNo << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;

    return 0;
}