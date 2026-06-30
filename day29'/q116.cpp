#include <iostream>
using namespace std;

int main() {
    string itemName;
    int quantity;
    float price;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, itemName);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: ";
    cin >> price;

    cout << "\n--- Inventory Details ---\n";
    cout << "Item Name: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: " << price << endl;
    cout << "Total Value: " << quantity * price << endl;

    return 0;
}