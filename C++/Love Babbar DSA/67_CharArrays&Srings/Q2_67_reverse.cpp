#include <iostream>
#include <string.h>
using namespace std;

void reverse(char st[]) {
    int i = 0;
    int j = strlen(st) - 1;
    while(i <= j)  {
        swap(st[i], st[j]);
        i++;
        j--;
    }
}

int main() {
    char st[100];
    cout << "Enter the string: ";
    cin >> st;
    
    cout << "String before reversal: " << st << endl;
    reverse(st);
    cout << "String after reversal: " << st << endl;

}