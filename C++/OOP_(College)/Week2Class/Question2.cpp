#include <iostream>
using namespace std;

void remove(int arr[], int n, int num);

int main()  {
    int n, arr[100], num;
    cout<< "Enter the number of integers to be entered: ";
    cin>> n;
    cout<< "Enter the integers: ";
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    cout<< "Enter the integer to be deleted: ";
    cin>> num;
    remove(arr, n, num);

}

void remove(int arr[], int n, int num) {
    int pos;
    for (int i=0; i<n; i++) {
        if (arr[i]==num) {
            pos=i;
        }
    }
    cout<< "Rearrranged array: ";
    for (int j=0; j<n; j++) {
        if (pos!=j)
        cout<< arr[j] << "  ";
    }
}