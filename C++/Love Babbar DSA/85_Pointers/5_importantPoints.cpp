#include <iostream>
using namespace std;

int main()  {

    char character = 'k';
    char* cptr = &character;

    cout << cptr << endl;   // prints k and some garbage value till null character 


    char* c = "Jassi";
    cout << c << endl;      // prints the whole string but is a bad practice

}