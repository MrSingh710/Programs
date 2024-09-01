#include <iostream>
#include <limits.h>
using namespace std;

void maximum(int arr[], int size, int& maxi) {

    if(size == 0) {
        return;
    }

    maxi = max(maxi, arr[8 - size]);

    maximum(arr, size - 1, maxi);

}

void minimum(int arr[], int size, int& mini) {

    if(size == 0) {
        return;
    }

    mini = min(mini, arr[8 - size]);

    minimum(arr, size - 1, mini);

}


int main() {

    int size = 8;
    int arr[size] = {10, 30, 21, 44, 32, 6, 19, 66};

    int maxi = INT_MIN;
    int mini = INT_MAX;

    maximum(arr, size, maxi);
    minimum(arr, size, mini);

    cout << "Maximum element in the array: " << maxi << endl;
    cout << "Minimum element in the array: " << mini << endl;

}
