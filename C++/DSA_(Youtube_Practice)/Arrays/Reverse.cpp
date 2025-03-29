# include <iostream>
using namespace std;

void Reverse(int arr[], int size)  {
    for (int i=0; i<size/2; i++) {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}

void printArr(int arr[], int size)  {
    cout<< "Reversed array: ";
    for (int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
}

int main()  {
    int n, arr[100];
    cout<< "Enter the size of the array:";
    cin>> n;
    cout<< "Enter the elements of the array:";
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    Reverse(arr, n);
    printArr(arr, n);
}