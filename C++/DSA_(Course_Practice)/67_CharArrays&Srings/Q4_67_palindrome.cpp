#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(char st[]) {
    int i = 0;
    int j = strlen(st) - 1;
    while(i <= j)  {
        if(st[i] != st[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char st[100];
    cout << "Enter the string: ";
    cin >> st;

    bool answer = palindrome(st);
    
    if(answer == 0) {
        cout << "String is not a palindrome" << endl;
    }
    else {
        cout << "String is a palindrome" << endl;
    }
}