#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Printing stars
        for (int j = 1; j <= 2*i-1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half of the diamond (excluding the center row)
    for (int i = n; i >= 1; i--) {
        // Printing spaces
        for (int j = 1; j <= (n - i); j++)
            cout << " ";

        // Printing stars
        for (int j = 1; j <= 2*i-1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
 