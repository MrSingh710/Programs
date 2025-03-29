# include <iostream>
using namespace std;
int main()  {
    int row=1, n, val=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while (row<=n) {
        int col=1;
        while (col<=n-row+1) {
            cout<<col;
            col++;
        }
        col=1;
        while (col<=2*row-2) {
            cout<<"*";
            col++;
        }
        int start=n-row+1;
        while (start) {
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
}