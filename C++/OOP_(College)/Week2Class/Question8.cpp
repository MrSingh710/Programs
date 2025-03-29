#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Input: ";
    getline(cin, str);
    int count =1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == str[i+1]) count++;
        if(str[i] != str[i+1]) {
            cout << str[i] <<count;
            count = 1;
        }
    }
}