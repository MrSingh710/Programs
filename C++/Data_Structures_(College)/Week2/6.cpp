#include<iostream>
#include<algorithm>
using namespace std;

int firstLinearFind(int arr[], int size, int key) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }    
    }
    return -1;

}

int lastLinearFind(int arr[], int size, int key) {

    for(int i = size - 1; i > 0; i--) {
        if(arr[i] == key) {
            return i;
        }    
    }
    return -1;

}

int main()  {
    int size, arr[100], key;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key value: ";
    cin >> key;

    sort(arr, arr + size);

    cout << "First occurance of the key: " << firstLinearFind(arr, size, key) << endl;
    cout << "Last occurance of the key: " << lastLinearFind(arr, size, key) << endl;
    
}