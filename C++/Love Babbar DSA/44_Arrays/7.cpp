// Union of 2 arrays (Duplicates)

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printVector(vector<int> c) {
    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << "     ";
    }
}

void unionOfVectors(vector<int> a, vector<int> b) {
     vector<int> c;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != INT_MIN) {
            c.push_back(a[i]);
        }
    }


    for(int i = 0; i < b.size(); i++) {
        if(b[i] != INT_MIN) {
            c.push_back(b[i]);
        } 
    }

    printVector(c);
    
}

void markDuplicates(vector<int> a, vector<int> b) {

    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                b[j] = INT_MIN;
            } 
            if(a[i] == a[i + 1]) {
                a[i] = INT_MIN;
            }
            if(b[j] == b[j + 1]) {
                b[j] = INT_MIN;
            }
        }
    }
    unionOfVectors(a, b);

}

int main()  { 
    vector<int> a{1, 2, 2, 4, 6, 8, 10};
    vector<int> b{3, 4, 4, 5, 6};

    markDuplicates(a, b);
    
}