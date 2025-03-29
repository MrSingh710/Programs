#include<iostream>
using namespace std;

int main()
{
    int k, sum =0;
    cout << "Enter k: ";
    cin >> k;
    for(int i=0; i<k; i++)
    {
        sum += 2;
    }
    cout << sum-2;
}