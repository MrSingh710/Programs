// Union of 2 arrays (No duplicates)

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> c) {
    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << "     ";
    }
}

void unionOfVectors(vector<int> a, vector<int> b) {
    vector<int> c;

    for(int i = 0; i < a.size(); i++) {
        c.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++) {
        c.push_back(b[i]);
    }

    printVector(c);
    
}


int main()  { 
    vector<int> a{1, 3, 5, 7, 9};
    vector<int> b{2, 4, 6, 8};

    unionOfVectors(a, b);

}
