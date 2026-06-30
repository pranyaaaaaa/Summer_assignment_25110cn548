#include <iostream>
using namespace std;

int main() {
    int n, choice, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1. Sum of Array";
    cout << "\n2. Find Maximum";
    cout << "\nEnter choice: ";
    cin >> choice;

    if(choice == 1) {
        for(int i = 0; i < n; i++)
            sum += arr[i];
        cout << "Sum = " << sum;
    }
    else if(choice == 2) {
        int max = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > max)
                max = arr[i];
        }
        cout << "Maximum = " << max;
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}