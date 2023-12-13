#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v={1,3,5,7,9,11,32,67,34,8,43,23};
    int p;
    cout<<"Enter the number at which you want to replace: ";
    cin>>p;
    int x;
    cout<<"Enter the number you want to put in its place: ";
    cin>>x;
    for(auto i=v.begin();i!=v.end();++i){
        if(*i==p) *i=x;
    }
    for(auto j=v.begin();j!=v.end();++j){
        cout<<*j<<endl;
    }      
}