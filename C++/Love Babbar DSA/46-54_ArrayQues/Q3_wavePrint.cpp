#include <iostream>
#include <vector>
using namespace std;

/**
 * Prints the matrix in a wave pattern.
 *
 * This function prints the elements of the matrix in a wave pattern,
 * where it prints the elements column-wise alternatively from top to bottom
 * and bottom to top.
 *
 * @param vec The matrix represented as a vector of vectors.
 *
 * @returns None
 */
void wavePrintMatrix(vector<vector<int>> vec) {
    int col = vec[0].size();
    for(int i = 0; i < col; i++) { 
         
        if(i % 2 == 0) {
            for(int j = 0; j < vec.size(); j++ ) {
                cout << vec[j][i] << "   ";
            }  
        }
        else {
            for(int j = vec.size() - 1; j >= 0; j-- ) {
                cout << vec[j][i] << "   "; 
            }  
        }
    }       
}


int main() {
    
    vector<vector<int>> vec;
    
    vector<int> a{1, 2, 3, 4};
    vector<int> b{5, 6, 7, 8};
    vector<int> c{9, 10, 11, 12};
    vector<int> d{13, 14, 15, 16};

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);

    wavePrintMatrix(vec);

}
