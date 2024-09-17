// Merge two sorted arrays

#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

void merge(int arr1[], int n1, int arr2[], int n2) {
    int arr[n1 + n2];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            i++; 
            k++;               
        }
        else {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    for(; j < n2; j++) {
        arr[k] = arr2[j];
        k++;
    }

    for(; i < n1; i++) {
        arr[k] = arr1[i];
        k++;
    }
    
    print(arr, n1 + n2);    

}


int main() {
    int arr1[] = {2, 4, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
 
    int arr2[] = {3, 5, 7, 9, 11};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1, n1, arr2, n2);

}