# include <iostream>
using namespace std;

int Sum(int arr[], int n) {
    int sum=0;
    for (int i=0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}

int main()  {
    int n, arr[100];
    cout<< "Enter the size of the array:";
    cin>> n;
    cout<< "Enter the elements of the array:";
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    cout<< "Sum of all the elements: " <<Sum(arr, n); 
}