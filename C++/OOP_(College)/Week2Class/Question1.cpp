#include <iostream>
using namespace std;

int f_arr(int arr[], int n) {
    int count=0, maxCount=0, value=0;
    for (int i=0; i<n; i++) {
        
        for (int j=0; j<n; j++) {
            if (arr[i]==arr[j]) {
                count++;
                if (count>maxCount) {
                    maxCount=count;
                    value=arr[i];
                }
            }
        }
        count=0;
    }
    return value;
}

int main()  {
    int n, arr[6];
    cout<< "Enter the size of the array: ";
    cin>> n;
    cout<< "Enter the integers: ";
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    cout<< "Mode = " << f_arr(arr, n);
}