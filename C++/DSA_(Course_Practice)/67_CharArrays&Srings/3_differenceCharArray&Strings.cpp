#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char st[8];
    string str;
    st[0] = 'B';    str[0] = 'B';
    st[1] = 'a';    str[1] = 'a';
    st[2] = '\0';    str[2] = '\0';
    st[3] = 'b';    str[3] = 'b';
    st[4] = 'b';    str[4] = 'b';
    st[5] = 'a';    str[5] = 'a';
    st[6] = '\0';    str[6] = '\0';
    st[7] = 'r';    str[7] = 'r';

    cout << st << endl;
    cout << str << endl;
    
}