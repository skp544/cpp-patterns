#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    cout << "Printing Patterns: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}