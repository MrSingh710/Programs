# include <iostream>
using namespace std;
int main()  {
    int i=1, n;
    cin>>n;
    while (i<=n) {
        char ascii='A';
        int j=1;
        while (j<=n) {
            cout<<ascii;
            j++;
            ascii++;
        }
        cout<<endl;
        i++;
    }
}