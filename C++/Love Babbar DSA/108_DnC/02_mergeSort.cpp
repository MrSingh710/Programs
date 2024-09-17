// Merge Sort

#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

void merge(int arr[], int s, int mid, int e) {

    int n1 = mid - s + 1;   // Left array starts from s and ends at mid, so len = mid - s + 1
    int n2 = e - mid;       // Right array starts from mid + 1 and ends at e, so len = e - (mid + 1) + 1

    // Copy arr[] into left and right arrays for later use
    int* left = new int[n1];
    int* right = new int[n2];

    int k = s;      // Left array starts from s
    for(int i = 0; i < n1; i++) {
        left[i] = arr[k];
        k++;
    }   
    k = mid + 1;    // Right array starts from mid + 1
    for(int j = 0; j < n2; j++) {
        right[j] = arr[k];
        k++;
    }   


    int i = 0;
    int j = 0;
    k = s; 

    // Merging left and right arrays into a sorted array(Merge two sorted arrays)
    while(i < n1 && j < n2) {
        if(left[i] < right[j]) {
            arr[k] = left[i];
            i++; 
            k++;               
        }
        else {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while(i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }   

    while(j < n2) {
        arr[k++] = right[j++];
    } 

}

void mergeSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    int mid = (s + e)/2;
    
    // Sorts left part
    mergeSort(arr, s, mid);

    // Sorts right part       
    mergeSort(arr, mid + 1, e); 

    // Merges above 2 sorted array
    merge(arr, s, mid, e);     
    
}


int main() {
    int arr[] = {2, 2, 3, 6, 4, 6, 7, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    print(arr, n);

}