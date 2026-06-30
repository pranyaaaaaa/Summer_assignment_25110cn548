#include <iostream>
using namespace std;

int main() {
    int empID;
    string empName;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> empID;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, empName);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n--- Employee Details ---\n";
    cout << "ID: " << empID << endl;
    cout << "Name: " << empName << endl;
    cout << "Salary: " << salary << endl;

    return 0;
}