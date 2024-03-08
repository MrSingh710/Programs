// Implement intersection of two arrays.

# include <iostream>
using namespace std;

void printArray (int arr3[], int n3) {
    for(int i = 0; i < n3; i++) {
        cout << arr3[i] << "     ";
    }
}

void intersectionOfArrays (int arr1[], int n1, int arr2[], int n2) {
    int k = 0, arr3[100];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
            }
        }
    }

    cout << "Intersected elements are: ";
    printArray(arr3, k);

}

int main() {
    int n1, n2, arr1[100], arr2[100];

    cout << "Enter the size of the first array: ";
    cin >> n1;

    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;

    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    intersectionOfArrays(arr1, n1, arr2, n2);
    
}