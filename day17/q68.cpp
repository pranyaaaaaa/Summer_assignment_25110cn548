#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {20, 40, 60, 80};

    int n = 5, m = 4;

    cout << "Common Elements: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
