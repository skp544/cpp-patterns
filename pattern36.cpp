#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;

    for (int i = 1; i <= n; i++) {

        int x;
        if (i % 2 == 0) {
            x = 1;
        }

        else {
            x = 0;
        }

        for (int j = 1; j <= i; j++) {

            cout << x << " ";
            if (x == 0) x = 1;
            else x = 0;

        }
        cout << endl;

    }


    return 0;
}