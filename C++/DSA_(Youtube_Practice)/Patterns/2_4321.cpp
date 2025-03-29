# include <iostream>
using namespace std;
int main()  {
    int i=1, n;
    cin>>n;
    while (i<=n) {
        int j=1, a=n;
        while (j<=n) {
            cout<<a;
            a--;
            j++;
        }
        cout<<endl;
        i++;
    }
}