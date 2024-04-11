//  Declaration, initialisation and
//   printing of vector of vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr;

    vector<int> a{1, 2, 3};
    vector<int> b{2, 4, 6, 4, 8};
    vector<int> c{1, 3};
    vector<int> d{1, 3, 6, 7};

    // Pushing vector of type int in the vector
    arr.push_back(a);   
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);

    cout << arr.size() << "   ";
    
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}