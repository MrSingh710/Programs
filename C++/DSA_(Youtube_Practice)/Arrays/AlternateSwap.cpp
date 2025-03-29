# include <iostream>
using namespace std;

void AltSwap(int arr[], int size)  {
    for (int i=0; i+1<size; i+=2) {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        //swap(arr[i]=arr[i+1];)
    }
}

void printArr(int arr[], int size)  {
    cout<< "Alternate swapped array: ";
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
    AltSwap(arr, n);
    printArr(arr, n);
}