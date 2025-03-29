# include <iostream>
using namespace std;
int main()  {
    int row=1, n, val=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while (row<=n) {
        int col=1;
        while (col<=n-row) {
            cout<<" ";
            col++;
        }
        col=1;
        int val=col;
        while (col<=row) {
            cout<<val;
            val++;
            col++;
        }
        col=1;
        int value=row-1;
        while (col<=row-1) {
            cout<<value;
            value--;
            col++;
        }
        cout<<endl;
        row++;
    }
}