#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {   
    for(int i = 1; i < n ; i++) {
        int swapped = 0;

        for(int j = 0; j < n - i; j++) {

            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
 
        }
        if(swapped == 0) {
            break;
        }
    }
  
}
