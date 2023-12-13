# include <iostream>
using namespace std;
int main()  {
    int i=1, n;
    cin>>n;
    while (i<=n) {
        int j=1;
        while (j<=i) {
        int val='A'+j-2;
        char ascii=val+i;
            cout<<ascii;
            j++;
            ascii++;
        }
        cout<<endl;
        i++;
    }
}
