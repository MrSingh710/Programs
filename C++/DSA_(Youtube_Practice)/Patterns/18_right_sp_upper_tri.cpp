# include <iostream>
using namespace std;
int main()  {
    int row=1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (row<=n) {
        int col=1;
        while (col<=row-1) {
            cout<<" ";
            col++;
        }
        col=1;
        int val=row;
        while (col<=n-row+1) {
            cout<<val;
            col++;
            val++;
        }
        cout<<endl;
        row++;
    }
}