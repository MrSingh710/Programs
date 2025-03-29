#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name: ";

    //cin >> name;
    cin.getline(name, 100);     // For taking inputs with space 

    cout << "Your name: " << name << endl;

    // For checking null character at the end of the characters
    for(int i = 0; i < 6; i++) {
        cout << "Index " << i << ": " << name[i] << endl;
    }
    cout << "ASCII value at index 5: " << (int)name[5] << endl;

    // // Taking individual inputs
    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin >> ch[2];


    // cout << ch[0] << ch[1] << ch[2] << endl;

}