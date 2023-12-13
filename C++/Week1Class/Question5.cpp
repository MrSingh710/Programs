# include <iostream>
using namespace std;

int main()  {
    int pin, n, debit, credit;
    cout<< "Enter your 4 number pin: ";
    cin>> pin;
    cout<< "Enter 1 to check your balance" <<endl;    
    cout<< "Enter 2 to withdraw your money" <<endl;    
    cout<< "Enter 3 to deposit your money" <<endl;
    cin>> n;
    if (n==1) {
        cout<< "Your account balance is " << pin*15+10000 <<endl;
    }
    else if (n==2) {
        cout<< "Enter the amount to be withdrawn from the ATM machine: ";
        cin>> debit;
        cout<< "Your amount of " << debit << " is withdrawn" <<endl;
        cout<< "Now, your current balance is " << pin*15+10000-debit;
    }
    else if (n==3) {
        cout<< "Enter the amount of money to be deposited in your account: ";
        cin>> credit;
        cout<< "Your amount of " << credit << " is deposited" <<endl;
        cout<< "Now, your current balance is " << pin*15+10000+credit;
    }       
}