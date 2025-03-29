// Intersection of vectors

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> c) {
    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << "     ";
    }
}


void intersectOfVectors(vector<int> a, vector<int> b) {
    vector<int> c;

    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                c.push_back(a[i]);
            }
        }
    }

    printVector(c);

}


int main()  { 
    vector<int> a{1, 2, 3, 4, 6, 8};
    vector<int> b{3, 4, 9, 10};

    intersectOfVectors(a, b);

}