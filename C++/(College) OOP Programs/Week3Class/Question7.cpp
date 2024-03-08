// Jaspreet Singh 2022BCSE019
#include<iostream>
#include<string>
using namespace std;

string concat(string s1, string s2, int max_size = 50, char filler = ' '){
    return s1+s2;
}

string concat(string s, int i, int max_size = 50, char filler = ' '){
    return s + to_string(i);
}

int main() {
    string str1 = "My name is ";
    string str2 = "Jaspreet ";
    int number = 7;

    cout << "Concatenation of 2 strings: " << concat(str1, str2) << endl;
    cout << "Concatenation of a string and an integer: " << concat(str2, number) << endl;

    return 0;
}