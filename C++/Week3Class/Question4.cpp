// Jaspreet Singh 2022BCSE019
#include<iostream>
#include<string>
using namespace std;

int toi(int arr[], int a){
    for(int i=0;i<4;i++){
        if(arr[i]==a)
        return a;}}

string tyi(string arr[],string str){
    for(int i=0;i<3;i++){
        if(arr[i]==str)
        return str;
    }

}

    int main(){
    int key=56, arr[4]={34,56,78,98};
    string str[3]={"Prateet","Inderpal", "Jaspreet"};
    string str1="Jaspreet";
    cout<<"key element in the array is :"<< toi(arr,key)<<endl;
    cout<<"Key string in the array is : "<<tyi(str,str1)<<endl;
    return 0;

}