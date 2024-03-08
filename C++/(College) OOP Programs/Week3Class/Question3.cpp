// Jaspreet Singh 2022BCSE019
# include <iostream>
using namespace std;

int sum(int arr[], int n) {
    int sum=0;
    for (int i=0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}

float sum(float arr[], int n, int precision = 6) {
    float sum=0.0;
    for (int i=0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}

int main()  {
    int arr[100], n, temp;
    float arrDec[100];
    cout<< "Enter 1 if the elements of the array are in decimals: ";
    cin>> temp;

    if (temp!=1) {
        cout<< "Enter the size of the array: ";
        cin>> n;
        cout<< "Enter the elements in the array: ";
        for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
        cout<< "Sum of the elements of the array: " << sum(arr, n);
    }

    else if (temp==1) {
        cout<< "Enter the size of the array: ";
        cin>> n;
        cout<< "Enter the elements in the array: ";
        for (int i=0; i<n; i++) {
        cin>> arrDec[i];
    }
        cout<< "Sum of the elements of the array: " << sum(arrDec, n, 6);
    }
}