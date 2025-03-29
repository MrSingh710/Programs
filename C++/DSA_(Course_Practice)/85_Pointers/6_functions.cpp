#include <iostream>
using namespace std;

void print(int arr[]) {
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << "   ";
    }
    cout << endl;
}

void solve(int arr[]) {
    //cout << "Size inside solve function: " << sizeof(arr) << endl;

    cout << "arr: " << arr << endl;
    cout << "&arr: " << &arr << endl;

    arr[0] = 50;

}

int main()  {
    int arr[10] = {1, 2, 3, 4};
    cout << "Size of array outside solve function: " << sizeof(arr) << endl;

    cout << "arr: " << arr << endl;
    cout << "&arr: " << &arr << endl;

    cout << "Printing the elements of array before calling solve function:- " << endl;
    print(arr);

    solve(arr);

    cout << "Printing the elements of array after calling solve function:- " << endl;
    print(arr);
    
}