# include <iostream>
using namespace std;
int main()  {
    int n, hundred, fifty, twenty, one;
    cout<< "Enter the total amount:";
    cin >> n;
    for ( ; n!=0; ) {
        hundred=n/100;
        n=n-(hundred*100);
        fifty=n/50;
        n=n-(fifty*50);
        twenty=n/20;
        n=n-(twenty*20);
        one=n/1;
        n=n-(one*1);
    }
    cout<< "100 Ruppee notes are " << hundred <<endl;
    cout<< "50 Ruppee notes are " << fifty <<endl;
    cout<< "20 Ruppee notes are " << twenty <<endl;
    cout<< "1 Ruppee notes are " << one <<endl;
}