#include <iostream>
#include <limits.h>
using namespace std;

void maximum(int arr[], int size, int& maxi) {

    if(size == 0) {
        return;
    }

    maxi = max(maxi, arr[0]);

    maximum(arr + 1, size - 1, maxi);

}

int maxim(int arr[], int size) {

    if(size == 0) {
        return INT_MIN;
    }

    // Recursive call to find the maximum in the rest of the array
    int rest_max = maxim(arr, size - 1);

    // Return the maximum between the last element and the maximum of the rest
    return max(arr[size - 1], rest_max);
}


void minimum(int arr[], int size, int& mini) {

    if(size == 0) {
        return;
    }

    mini = min(mini, arr[0]);

    minimum(arr + 1, size - 1, mini);

}

int minim(int arr[], int size) {
    if(size == 0) {
        return INT_MAX;
    }

    // Recursive call to find the minimum in the rest of the array
    int rest_min = minim(arr, size - 1);

    // Return the minimum between the last element and the minimum of the rest
    return min(arr[size - 1], rest_min);

}


int main() {

    int arr[] = {10, 30, 21, 99, 65, 4, 1, 88};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxi = INT_MIN;
    int mini = INT_MAX;

    maximum(arr, size, maxi);
    minimum(arr, size, mini);

    cout << "Maximum element in the array: " << maxi << endl;
    cout << "Minimum element in the array: " << mini << endl << endl;


    cout << "Maximum element in the array: " << maxim(arr, size) << endl;
    cout << "Minimum element in the array: " << minim(arr, size) << endl;

}
