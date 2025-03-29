# include <iostream>
using namespace std;

int getMax(int arr[], int n) {
    int Max=arr[0];
    for (int i=1; i<n; i++) {
        if (Max<arr[i]) {
            Max=arr[i];
        }
        //Max=max(Max, arr[i]);
    }
    return Max;
}

int getMin(int arr[], int n) {
    int Min=arr[0];
    for (int i=1; i<n; i++) {
        if (Min>arr[i]) {
            Min=arr[i];
        }
        //Min=min(Min, arr[i]);
    }
    return Min;
}

int main()  {
    int n;
    cout<<"Enter the size of the array:";
    cin>> n;
    cout<< "Enter the numbers in the array" <<endl;
    int arr[100];
    for (int i=0; i<n; i++)  {
        cin>> arr[i];
    }
    cout<< "Maximum value: " << getMax(arr, n) <<endl;
    cout<< "Minimum value: " << getMin(arr, n) <<endl;
    

}