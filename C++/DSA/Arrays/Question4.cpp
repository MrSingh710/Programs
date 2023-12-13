#include <iostream>
using namespace std;
int sec_lar(int arr[], int n) {
    int Max;
    for (int i=0; i<n; i++) {
        Max=max(Max, arr[i]);
    }
    return-2;
}

int sec_smal(int arr[], int n) {
    int Min;
    for (int i=0; i<n; i++) {
        Min=min(Min, arr[i]);
    }
    return+1;
}

int main()  {
    int n, arr[100];
    cout<< "Enter the number of integers to be entered: ";
    cin>> n;
    cout<< "Enter the integers: ";
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    cout<<  "Second Largest: "<<sec_lar(arr, n);
    cout<<  "Second Smalles: "<<sec_smal(arr, n);
}