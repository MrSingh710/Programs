#include<iostream>
using namespace std;

int main()
{
    int k;
    cout << "Enter k: ";
    cin >> k;
    int ans = 1;
    for(int i=0; i<k; i++)
    {
        ans = ans*2;
    }
    cout << "Power of 2 is: " << ans;
}