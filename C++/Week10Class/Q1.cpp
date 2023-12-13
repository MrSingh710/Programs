#include<iostream>
using namespace std;

template<typename T, int n>
T add(T arr[]){
    T s = 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }
    return s/n;
}

int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Average: " << add<int, 3>(arr) << endl;
    return 0;
}