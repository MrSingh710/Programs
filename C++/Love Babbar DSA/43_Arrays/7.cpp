// Count 0's and 1's in an array

# include <iostream>
using namespace std;

void Count(int arr[], int size, int *zeroS, int *oneS) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            (*zeroS)++;
        } if(arr[i] == 1) {
            (*oneS)++;
        }
    }
}

int main() {
    int zeroS = 0;
    int oneS = 0;
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 2, 3, 1};
    int size = 15;

    Count(arr, size, &zeroS, &oneS);

    cout << "0s in the array: " << zeroS << endl;
    cout << "1s in the array: " << oneS << endl;

}
