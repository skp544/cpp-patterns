#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}