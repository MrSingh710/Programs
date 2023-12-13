# include <iostream>
using namespace std;

int power(int b, int i);

int main()  {
    int n, one_s_comp, two_s_comp;
    cout<< "Enter the number:";
    cin>> n;
    one_s_comp=~n;
    two_s_comp=one_s_comp+1;
}

int power(int b, int i)  {
    while(i) {
        b=b*10;
        i--;
    }
    return b;
}