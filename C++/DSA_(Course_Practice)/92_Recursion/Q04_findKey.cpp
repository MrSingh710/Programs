#include <iostream>
#include <vector>
using namespace std;

// Only finding present or not
// bool findKey(string& str, char key, int i) {

//     if(i >= str.length()) {
//         return false;
//     }

//     if(str[i] == key) {
//         return true;
//     }
//     return findKey(str, key, i + 1);

// }



// Finding the exact index

// int findKey(string& str, char& key, int& i) {

//     if(i >= str.length()) {
//         return -1;
//     }

//     if(str[i] == key) {
//         return i;
//     }
//     return findKey(str, key, ++i);

// }

// int findKey(string str, char key) {

//     if(str.length() == 0) {
//         return -1;
//     }

//     if(str[str.length() - 1] == key) {
//         return str.length() - 1;
//     }
//    str.pop_back();

//     return findKey(str, key);

// }



// Printing all the indices of all the occurances

// void findKey(string& str, char& key, int& i) {

//     if(i >= str.length()) {
//         return;
//     }

//     if(str[i] == key) {
//         cout << i << "  ";
//     }
//     findKey(str, key, ++i);

// }

// void findKey(string str, char key) {

//     if(str.length() == 0) {
//         return;
//     }

//     if(str[str.length() - 1] == key) {
//         cout << str.length() - 1 << "   ";
//     }
//     str.pop_back();

//     findKey(str, key);

// }



// Storing all the indices of all the occurances

void findKey(string& str, char& key, int& i, vector<int>& ans) {

    if(i >= str.length()) {
        return;
    }

    if(str[i] == key) {
        ans.push_back(i);
    }
    findKey(str, key, ++i, ans);

}

void findKey(string str, char key, vector<int>& ans) {

    if(str.length() == 0) {
        return;
    }

    if(str[str.length() - 1] == key) {
        ans.push_back(str.length() - 1);
    }
    str.pop_back();

    findKey(str, key, ans);

}


int main() {

    string str = "Jaspreet Singh";
    char key = 'e';
    vector<int> ans;
    int i = 0;

    // findKey(str, key, ans);
    findKey(str, key, i, ans);

    if(ans.empty()) {
        cout << "Key not found";
    }
    else {
        cout << "Key found at: ";
        for(auto value: ans) {
            cout << value << "  ";
        }
    }
    
}
