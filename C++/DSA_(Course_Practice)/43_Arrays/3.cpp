# include <iostream>
using namespace std;

int main() {
    int arr[5];
    // Taking input in an array 
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Doubles: ";
    for (int i = 0; i < 5; i++) {
        cout << 2*arr[i] << "  ";
    }
}