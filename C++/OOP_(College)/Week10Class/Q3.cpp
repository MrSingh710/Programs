#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v={1,2,3,4,5,6,7,8,9};
    int x;
    cout<<"Enter the place you want to shift: ";
    cin>>x;
        for (int i = 0; i < x-1 ; ++i) {
            v.push_back(v[i]);
        }
        v.erase(v.begin(),v.begin()+x);
    for(auto &i:v){
        cout<<i<<" ";
    }
    return 0;
}