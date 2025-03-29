# include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size-1;
    int mid = (start+end)/2;
    while (start <= end) {
        if (arr[mid]==key) {
        return mid;
    }
        if (arr[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main()  {
    // Arrays should be in monotonic way for binary search
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    cout<< "Index of 8 in even array: " << binarySearch(even, 6, 8) <<endl;
    cout<< "Index of 4 in even array: " << binarySearch(even, 6, 4) <<endl;
    cout<< "Index of 12 in even array: " << binarySearch(even, 6, 12) <<endl;
    cout<< "Index of 20 in even array: " << binarySearch(even, 6, 20) <<endl;
    cout<< "Index of 11 in odd array: " << binarySearch(odd, 5, 11) <<endl;
    cout<< "Index of 16 in odd array: " << binarySearch(odd, 5, 16) <<endl;
}