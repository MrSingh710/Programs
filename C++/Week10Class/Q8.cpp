#include <iostream>
#include <vector>
using namespace std;

template<typename t>
bool isPalindrome(vector<t> v){
    int i = 0, j = v.size()-1;
    while(i < j){
        if(v[i] != v[j]){
            return 0;
        }
        i++;j--;
    }
    return 1;
}

int main(){
    vector<char> palindromeVec = {'r', 'a', 'c', 'e', 'c', 'a', 'r'};
    vector<char> nonPalindromeVec = {'h', 'e', 'l', 'l', 'o'};

    cout << "Is palindrome: " << isPalindrome(palindromeVec) << endl;
    cout << "Is palindrome: " << isPalindrome(nonPalindromeVec) << endl;

    return 0;
}