# include <iostream>
# include <cstring>
using namespace std;

int main() {

    // Every element is initialised with 0
    int crr[10] = {0};
    for (int i = 0; i < 10; i++) {
        cout << crr[i] << "  ";
    }
    cout << endl;

    // arr[0] will get 1 and rest will get 0
    int arr[10] = {1};
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    // When nothing is initialised
    int brr[10];
    for (int i = 0; i < 10; i++) {
        cout << brr[i] << "  ";
    }
    
    
    // memset() function is used to copy a character in an array
    //memset(arr, ch, sizeof(arr));
    

    
}