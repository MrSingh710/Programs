# include <iostream>
using namespace std;

bool linearFind(int arr[], int size, int key) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return true;
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

    if (linearFind(arr, size, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
}