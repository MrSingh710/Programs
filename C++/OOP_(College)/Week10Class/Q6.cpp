#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int c = 0;
    v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = v.size();

    for (int i = 0; i < n; i++) {
        int b = 0; // Initialize b for each element
        if (v[i] == 1 || v[i] == 2) {
            c++;
        } else {
            for (int j = 2; j < v[i]; j++) {
                if (v[i] % j == 0) {
                    b = 1;
                    break; // Exit the loop if the number is not prime
                }
            }
            if (b == 0) {
                c++;
            }
        }
    }
    cout << c << endl;

    return 0;
}