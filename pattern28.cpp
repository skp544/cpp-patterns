#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {

        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        for (int l = 1; l <= i - 1; l++) {
            cout << "*";
        }

        cout << endl;

    }

    return 0;
}