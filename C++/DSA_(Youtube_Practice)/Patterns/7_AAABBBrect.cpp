# include <iostream>
using namespace std;
int main()  {
    int i=1, n;
    char ascii='A';
    cin>>n;
    while (i<=n) {
        int j=1;
        while (j<=n) {
            cout<<ascii;
            j++;
        }
        ascii++;
        cout<<endl;
        i++;
    }
}