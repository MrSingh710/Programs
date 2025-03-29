#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class node{
    public:
    int data;
    node * left, *right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> minmax(vector<int> arr, int n){
    int lvl = 0;
    int mi = INT_MAX,ma = INT_MIN;
    
    while(1<<lvl < n){
        for(int j = lvl!=0?1<<(lvl-1):0;j<1<<(lvl);j++){
            mi = min(mi,arr[j]);
            ma = max(ma,arr[j]);
        }
        lvl++;
    }
    for(int i = 1<<(lvl-1);i < n;i++){
        mi = min(mi,arr[i]);
        ma = max(ma,arr[i]);
    }
    return {mi,ma};
}

 void print(node * head){
    if(head == NULL)return;

    cout<<head->data<<" ";
    print(head->left);
    print(head->right);
}

int main(){
    vector<int> arr = {1,2,3,4,5,5,6,8,12,42};
    int s = arr.size();
    vector<int> a = minmax(arr,s);
    cout<<a[0]<<" "<<a[1];
}