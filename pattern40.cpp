#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {

        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            char ch = 'A' + j - 1;
            cout << ch;
        }

        char ch = 'A' + i - 2;
        for (int l = 1; l <= i - 1; l++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }


    return 0;
}