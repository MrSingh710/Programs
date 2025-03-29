# include <iostream>
using namespace std;
int main()  {
    int i=1, n, a=1;
    cin>>n;
    while (i<=n) {
        int j=1;
        while (j<=i) {
            cout<<a;
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
}