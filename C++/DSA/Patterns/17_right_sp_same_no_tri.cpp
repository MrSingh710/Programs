# include <iostream>
using namespace std;
int main()  {
    int row=1, n;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while (row<=n) {
        int col=1;
        while (col<=n-row) {
            cout<<" ";
            col++;
        }
        col=n-row+1;
        while (col<=n) {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
}