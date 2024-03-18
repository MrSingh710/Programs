# include <iostream>
# include <algorithm>
using namespace std;

bool binaryFind(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            return true;
        }

        else if(arr[mid] < key) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

    }
    return false;
    
}

int main() {
    int size, arr[100], key;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements in the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to find: ";
    cin >> key;

    sort(arr, arr + size);

    if (binaryFind(arr, size, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
}