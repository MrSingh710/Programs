#include <iostream>
using namespace std;

void permutations(string &str, int i) {
    if(i >= str.length()) {
        cout << str << endl;
        return;
    }
    
    // Swapping
    for(int j = i; j < str.length(); j++) {
        // Swap
        swap(str[i], str[j]);

        // Recursion Call
        permutations(str, i + 1);

        // Backtracking (to recreate the original)
        swap(str[i], str[j]);
    }    

}


int main() {

    string str = "abc";
    permutations(str, 0);

}