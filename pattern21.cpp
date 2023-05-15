#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {

        for (int k = 1; k <= i - 1; k++) {
            cout << " ";
        }

        for (int j = n - i + 1; j > 0; j--) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}