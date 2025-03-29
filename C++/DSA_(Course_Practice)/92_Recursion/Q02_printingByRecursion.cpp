#include <iostream>
using namespace std;

// Head Recursion
// void print(int arr[], int size) {

//     // base case
//     if(size == 0) {
//         return;
//     }

//     print(arr, size - 1);

//     cout << arr[size - 1] << "    ";

// }

// Tail Recursion
void print(int arr[], int size) {

    // base case
    if(size == 0) {
        return;
    }

    // 1 case solved
    cout << arr[0] << "    ";
    
    // Rest recursion will handle
    print(arr + 1, size - 1); 

}

// Tail Recursion 
void print(int arr[], int size, int i) {

    // base case
    if(i == size) {
        return;
    }

    // 1 case solved 
    cout << arr[i] << "    ";
    
    // Rest recursion will handle
    print(arr, size, ++i);      // i++ will not work because firstly i will send 0 and then increment it, so again and again 0 is copied in the function, so infinite loop will occur

}


int main()  {

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    print(arr, size);

    /* OR */    cout << endl;

    int i = 0;
    print(arr, size, i);

}