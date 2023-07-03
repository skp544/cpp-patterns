#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {
        int count = 1;
        for (int j = 1; j <= n - i + 1; j++) {
            cout << count;
            count++;
        }

        for (int k = 1; k <= i - 1; k++) {
            cout << "**";
        }

        for (int l = n - i + 1; l > 0; l--) {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}