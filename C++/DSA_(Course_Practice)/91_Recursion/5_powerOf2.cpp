#include <iostream>
using namespace std;

int powerOf2(int n) {

    if(n == 0) {
        return 1;
    }

    int ans = 2 * powerOf2(n - 1);

    return ans;

}


int main() {

    int n;
    cout << "Enter the 2's power: ";
    cin >> n;

    cout << "2^" << n << " = " << powerOf2(n) << endl;

}