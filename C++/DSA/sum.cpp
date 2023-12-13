# include <iostream>
using namespace std;
int main()  {
    int i=1, sum=0, n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while (i<=n) {
        sum=sum+i;
        i++;
    }
    cout<<sum;
}