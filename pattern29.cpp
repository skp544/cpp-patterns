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

        for (int j = i; j <= n; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}