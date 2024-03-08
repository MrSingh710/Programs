#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1,j=1,cont=0;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<char('A'+  ++cont -1)<<" ";
            j++;
        }
        i++;
        cout<< endl;
    }
}