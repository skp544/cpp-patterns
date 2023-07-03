#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        int num = 1;
        for (int k = 1; k <= i; k++) {
            cout << num;
            num++;
        }

        for (int l = i - 1; l > 0; l--) {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}

