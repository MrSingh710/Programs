# include <iostream>
using namespace std;

void countnum(int n)  {
    for (int i=1; i<=n; i++) {
        cout<< i <<" ";
    } 
}

int main()  {
    int n;
    cout<< "Enter the number:";
    cin>> n;
    countnum(n);
}
