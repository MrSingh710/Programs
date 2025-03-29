#include<iostream>
using namespace std;

int main()
{
    int a[] = {5,8,2,3,4,9,11};
    cout << "{ ";
    for(int j=0; j<7;j++)
    {
        cout << a[j] << " ";
    }
    cout << "}"<<endl;
    for(int i=0; i<7; i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    cout << "2nd Largest: " << a[5] << " " << "& 2nd smallest : " << a[1];
}