#include <iostream>
using namespace std;

int partition(int a[], int start, int end) {
    int pivot = end;
    int i = start - 1;
    int j = start;
    
    for( ; j < pivot; j++) {
        if(a[j] < a[pivot]) {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[pivot]);
    return i;
}

void quickSort(int a[], int start, int end) {
    if(start >= end) {
        return;
    }
    int p = partition(a, start, end);
    
    quickSort(a, start, p - 1);
    quickSort(a, p + 1, end); 
}