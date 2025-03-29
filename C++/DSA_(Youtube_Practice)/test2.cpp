# include <iostream>
using namespace std;
int main() {
    int a=3;             // a=3 is for whole main() function
    cout<< a <<endl;

    if (true) {
        int b=5;
        cout<< b <<endl;  // b=5 is for "if" block only
    }
    cout<< b <<endl; /* So, Undeclaration error in 
                        this scope will be shown */
}