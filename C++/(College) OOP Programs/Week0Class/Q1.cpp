#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the rhombus: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j)
            cout << " ";

        if (i == 1 || i == n) {
            for (int j = 1; j <= n; ++j)
                cout << "*";
        } else {
            for (int j = 1; j <= n; ++j)
                cout << ((j == 1 || j == n) ? "*" : " ");
        }

        cout << endl;
    }

    return 0;
}