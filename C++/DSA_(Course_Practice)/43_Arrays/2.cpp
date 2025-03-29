# include <iostream>
using namespace std;

int main() {

    // Array initialisation
    int arr[] = {2, 3, 4, 6, 7};    // Successful
    int brr[5] = {10, 13, 14, 16, 17};   // Successful
    int crr[10] = {2, 3, 4, 6, 7};  // Successful (Remaining elements are initialised with zero)
    //int drr[4] = {2, 3, 4, 6, 7}; // Error (As 1 memory location is not allocated)

    cout << arr[0] << endl;

    for (int i = 0; i < 5; i++) {
        cout << brr[i] << endl;
    }

    
} 