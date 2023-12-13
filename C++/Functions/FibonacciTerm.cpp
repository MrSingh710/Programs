# include <iostream>
using namespace std;

int fibo(int n)  {
    int first=0;
    int sec=1;
    if (n>1) {
        for (int i=3; i<n; i++) {
        int num=first+sec;
        first=sec;
        sec=num;
        }
    return first+sec;
    }
    if (n==1) {
        return 0;  
    }
}

int main()  {
    int n;
    cout<< "Enter the nth term to be printed:";
    cin>> n;
    cout<< "nth term:" << fibo(n);
}