#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,1,3,7,8,8,9,13,15,25};
    cout << "{ ";
    for(int j=0; j<10;j++)
    {
        cout << a[j] << " ";
    }
    cout << "}"<<endl;
    cout << "{ ";
    for(int i=0; i<10;i++)
    {
        if(a[i] == a[i+1]) 
        {
            cout << a[i] << " ";
            i=i+1;
        } 
        else 
        {
            cout << a[i] << " ";
        }
    }
    cout << "}";
}