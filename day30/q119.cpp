#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    string name[n];
    float salary[n];

    for(int i = 0; i < n; i++) {
        cout << "\nEnter employee name: ";
        cin >> name[i];

        cout << "Enter salary: ";
        cin >> salary[i];
    }

    cout << "\n--- Employee Details ---\n";
    for(int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << "\tSalary: " << salary[i] << endl;
    }

    return 0;
}