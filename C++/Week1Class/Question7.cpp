# include <iostream>
using namespace std;

int main()  {
    int n, count=0, temp;
    cout<< "Enter the number to check if it is prime: ";
    cin>> n;
    temp=n;
    for(int i=2; i<n; i++) {
        temp=n%i;
        if (temp==0) {
            count++;
        }
    }
    if (count==0) {
        cout<< "True";
    }
    else 
    cout<< "False";
}