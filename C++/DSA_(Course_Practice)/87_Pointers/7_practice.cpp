#include <iostream>
using namespace std;

int* solve() {
    int a = 25;
    int* ans = &a;
    return ans;
}

int main() {
    int* ans = solve();

    cout << ans << endl;
    
}