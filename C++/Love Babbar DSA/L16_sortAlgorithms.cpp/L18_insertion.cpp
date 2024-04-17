#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    
    for(int i = 1; i < n; i++) {        // i does not starts from 0 as 0th index element is assumed to
        int temp = arr[i];               // be already sorted
        int j = i - 1;
        for( ; j >= 0; j--) {     
            
            if(temp < arr[j]) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }

        }
         
        arr[j + 1] = temp;
        
    }

}