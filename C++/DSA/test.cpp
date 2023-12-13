# include <iostream>
using namespace std;
int main() {
    int a=3;             // a=3 is for whole main() function
    cout<< a <<endl;

    if (true) {
        int a=5;
        cout<< a <<endl;  // a=5 is for "if" block only
    }

    cout<< a <<endl;  // So, a=3 will be the output for this
}