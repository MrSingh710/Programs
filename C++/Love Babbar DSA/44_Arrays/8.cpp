// Pair Sum

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


void pairSum(vector<int> a, int sum) {
    int ans = 0;
    for(int i = 0; i < a.size(); i++) {             // To find all
        for(int j = i + 1; j < a.size(); j++) {     // the pairs possible
            ans = a[i] + a[j];
            if(ans == sum) {
                cout << "Pair having the sum: " << a[i] << " and " << a[j] << endl;
            } 
        }
    }
}


int main() {
    vector<int> a{1, 3, 5, 7, 2, 4, 6};
    int sum = 9;

    pairSum(a, sum);

}