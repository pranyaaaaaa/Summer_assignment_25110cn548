#include <iostream>
using namespace std;

void display(string name[], int marks[], int n) {
    cout << "\n--- Student Report ---\n";

    for(int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << "\tMarks: " << marks[i] << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[n];
    int marks[n];

    for(int i = 0; i < n; i++) {
        cout << "\nEnter student name: ";
        cin >> name[i];

        cout << "Enter marks: ";
        cin >> marks[i];
    }

    display(name, marks, n);

    return 0;
}