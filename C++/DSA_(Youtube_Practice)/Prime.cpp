# include <iostream>
using namespace std;
int main()  {
    int n, i=2, rem, temp=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(i<n) {
        rem=n%i;
        if (rem==0) {
            temp++;
        }
        i++;
    }
    if (temp==0) {
        cout<<"The number is prime"<<endl;
    }
    else {
        cout<<"The number is not prime"<<endl;
    }
}