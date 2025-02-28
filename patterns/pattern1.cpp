#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number: ";
    cin >> n;

    // Upper part of the diamond
    for (int i = 1; i <= n; i += 2) { // Loop for odd numbers from 1 to n
        // Print leading spaces
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < i; j++) {
            cout << "*";
           
        }
        cout << endl; // Move to the next line
    }

    // Lower part of the diamond
    for (int i = n - 2; i > 0; i -= 2) { // Loop for odd numbers from n-2 to 1
        // Print leading spaces
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}


