#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()  {
    string s1,s2;
    cin>>s1;
    int n=s1.length();
    int count=0;
    cout<<"Enter string you want to count: ";
    cin>>s2;
    for(int i=0;i<n;i++) {
        if(s1[i] == s2[0]) {
            count++;
        }
    }
    cout<<count;
}