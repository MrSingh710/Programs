#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str;
    //cin >> str;     // Delimiter is space, tab and enter
    getline(cin, str);  // Delimiter is enter only

    cout << str << endl;
}