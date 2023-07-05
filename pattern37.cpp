#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }

        for (int l = i; l > 0; l--) {
            cout << l;
        }

        cout << endl;
    }


    return 0;
}