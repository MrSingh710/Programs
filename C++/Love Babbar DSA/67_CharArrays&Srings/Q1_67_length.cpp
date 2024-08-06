#include <iostream>
#include <string.h>
using namespace std;

int getLength(char st[]) {
    int count = 0;
    for(int i = 0; st[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char st[100];
    cout << "Enter the string: ";
    cin >> st;
    
    cout << "Length of the string by my function: " << getLength(st) << endl;
    cout << "Length of the string by pre-defined function: " << strlen(st) << endl;

}