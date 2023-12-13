# include <iostream>
using namespace std;
int main()  {
    int row=1, n;
    cout<<"Enter the number of rows:";
    cin>>n;
    while (row<=n) {
        int col=1;
        char ch='A'+row-col;
        while (col<=row) {
            cout<<ch;
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}