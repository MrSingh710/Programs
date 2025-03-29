# include <iostream>
using namespace std;
int main()  {
    char op;
    int a, b;
    cout<< "Enter the operations" <<endl;
    cin>> a >> op >> b;
    switch (op) {
        case '+': cout<< a+b <<endl;
        break;
        case '-': cout<< a-b <<endl;
        break;
        case '*': cout<< a*b <<endl;
        break;
        case '/': cout<< a/b <<endl;
        break;
        case '%': cout<< a%b <<endl;
        break;
        default: cout<< "Operations are noy valid" <<endl;
        break;
    } 
}