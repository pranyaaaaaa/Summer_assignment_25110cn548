#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    int n = 3, m = 3;
    int c[n + m];

    for (int i = 0; i < n; i++)
        c[i] = a[i];

    for (int i = 0; i < m; i++)
        c[n + i] = b[i];

    cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++)
        cout << c[i] << " ";

    return 0;
}