// Sort 0's and 2's

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& a) {
    for(auto value: a) {        // for each loop
        cout << value << "    ";
    }
}

void sort(vector<int>& a) {
    int i = 0;
    int start = i;
    int end = a.size() - 1;
    while(start < end - 1) {

        if(a[start] == 0) {
            start++;
        }
        if(a[end] == 1) {
            end--;
        }
        if(a[start] == 1 && a[end] == 0) {
            swap(a[start], a[end]);
            start++;
            end--;
        }

    }

}

int main() {
    vector<int> a{0, 0, 1, 1, 1, 1, 0, 0, 1, 1};

    sort(a);

    printVector(a);   

}