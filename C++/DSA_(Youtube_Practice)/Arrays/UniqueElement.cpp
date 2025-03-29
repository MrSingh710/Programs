# include <iostream>
using namespace std;

int Unique(int arr[], int n)  {
    int unique, count=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            unique=arr[i];
            if (arr[i]==arr[j]) {
                count++;
            }
        }
        if (count==1) {
            return unique;
        }
    }
}

int main()  {
    int n, arr[100];
    cout<< "Enter the size of the array:";
    cin>> n;
    cout<< "Enter the elements of the array:";
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    cout<< "Unique Element: " << Unique(arr, n);
}