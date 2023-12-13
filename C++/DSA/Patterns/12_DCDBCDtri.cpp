# include <iostream>
using namespace std;
int main()  {
    int row=1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (row<=n) {
        int col=1;
        char ch='A'+n-(row-col+1); //OR 'A'+n-row
        while (col<=row) {
            cout<<ch;
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }
}