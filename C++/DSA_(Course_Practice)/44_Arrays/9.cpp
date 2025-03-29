// Triplet Sum

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


void tripletSum(vector<int> a, int sum) {
    int ans = 0;
    for(int i = 0; i < a.size(); i++) {             // To find all
        for(int j = i + 1; j < a.size(); j++) {     // the pairs possible
            for(int k = j + 1; k < a.size(); k++) {
                ans = a[i] + a[j] + a[k];
                if(ans == sum) {
                    cout << "Triplet having the sum: " << a[i] << ", " << a[j] << " and " << a[k] << endl;
                } 
            }
        }
    }
}


int main() {
    vector<int> a{10, 20, 30, 40, 50};
    int sum = 80;

    tripletSum(a, sum);

}