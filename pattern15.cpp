#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}