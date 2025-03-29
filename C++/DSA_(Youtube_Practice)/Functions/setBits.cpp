# include <iostream>
using namespace std;

int setBit(int n)  {
    int count=0;
    while (n!=0)  {
        if (n&1==1)
        count++;
        n=n>>1;
    }
    return count;
}

int main()  {
    int a, b;
    cout<< "Enter the two numbers:";
    cin>> a >> b;
    cout<< "Total number of set bits: ";
    cout<< setBit(a)+setBit(b);
}