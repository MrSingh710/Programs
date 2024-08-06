#include <iostream>
#include <string.h>
using namespace std;

void replace(char st[]) {
    for(int i = 0; st[i] != '\0'; i++) {
        if(st[i] == ' ') {
            st[i] = '@';
        }
    }
}

int main() {
    char st[100];
    cout << "Enter the string: ";
    cin.getline(st, 100);
    
    cout << "String before replacement: " << st << endl;
    replace(st);
    cout << "String after replacement: " << st << endl;

}