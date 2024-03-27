// Missing elements from an array with duplicates
// (By sorting + swapping method)


#include <iostream>
#include <vector>
using namespace std;


// Sorting + Swapping Method
int missingElement(vector<int> arr) {
    int i = 0;
    while(i < arr.size()) {
        
        if(arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
        else {
            i++;
        }
    }
    
    cout << "Missing Elements:   "; 
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] - 1 != i) {
            cout << i + 1 << "   ";
        }
    }
}


int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    missingElement(arr);

}