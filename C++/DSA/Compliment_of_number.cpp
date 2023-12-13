# include <iostream>
using namespace std;

int power(int b, int i);

int main()  {
    int n, bit, binary=0, last_bit, ans=0, byte, answer=0, count=0;
    cout<< "Enter the number:";
    cin>> n;

    if (n==0) {
        cout<< 1;
    }

    else {
    for (int i=0; n!=0; i++) {
    bit=n&1;
    binary+=bit*power(10, i);
    n=n>>1;
    }

    for (int i=0; binary!=0; i++) {
        last_bit=binary%10;
        last_bit=last_bit^1;
        ans+=last_bit*power(10, i);
        binary=binary/10;
        count++;
    }

    for (int i=0; count; i++) {
        byte=ans%10;
        answer+=(byte*power(2, i));
        ans=ans/10;
        count--;
    }
    cout<< answer;
}
}

int power(int b, int i)  {
    int ans=1;
    for (int j=1; j<=i; j++) {
        ans=ans*b;
    }
    return ans;
}