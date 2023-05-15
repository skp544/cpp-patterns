#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }

        int num = i;
        for (int k = 1; k <= n - i + 1; k++) {
            cout << num;
            num++;
        }

        cout << endl;
    }


    return 0;
}