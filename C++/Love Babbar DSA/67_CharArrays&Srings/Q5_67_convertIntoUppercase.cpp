#include <iostream>
#include <string.h>
using namespace std;

void convertIntoUppercase(char st[]) {
    int i = 0;
    while(st[i] != '\0') {
        st[i] = st[i] + 'A' - 'a';
        i++;
    } 
}

int main() {
    char st[100];
    cout << "Enter the string: ";
    cin >> st;

    cout << "String before conversion: " << st << endl;
    convertIntoUppercase(st);
    cout << "String after conversion: " << st << endl;
    
}