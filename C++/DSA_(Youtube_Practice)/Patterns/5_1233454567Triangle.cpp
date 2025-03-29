# include <iostream>
using namespace std;
int main()  {
    int i=1, n;
    cin>>n;
    while (i<=n) {
        int j=1, a=i;
        while (j<=i) {
            cout<<a;
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
}