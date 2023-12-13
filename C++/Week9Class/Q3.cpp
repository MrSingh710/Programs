#include<iostream>
using namespace std;

class Account{
    public:
    virtual void CalculateInterest(){
        cout << "calculate interest base on different account" << endl;
    }
};
class SavingAccount : public Account{
    public:
    void CalculateInterest()override{
        float p = 300.00;
        float r = 100.00;
        float t = 1.0;
        float interest = p * r * t; 
        cout << "interest in saving account is :" << interest << endl;
        cout << "current balance is :" << (p +interest) << endl;
    }
};
class CurrentAccount : public Account{
    public:
    void CalculateInterest()override{
        float p = 250.00;
        float r = 50.00;
        float t = 2.0;
        float interest = p * r * t; 
        cout << "interest in saving account is :" << interest << endl;
        cout << "current balance is :" << (p +interest) << endl;
    }
};
class FixedDepositeAccount : public Account{
    public:
    void CalculateInterest()override{
        float p = 450.00;
        float r = 150.00;
        float t = 1.0;
        float interest = p * r * t; 
        cout << "interest in saving account is :" << interest << endl;
        cout << "current balance is :" << (p +interest) << endl;
    }
};

int main(){

    SavingAccount s;
    Account *sptr = &s;
    sptr->CalculateInterest();
    cout << endl;

    CurrentAccount c;
    Account *cptr = &c;
    cptr->CalculateInterest();
    cout << endl;
    
    FixedDepositeAccount f;
    Account *fptr = &f;
    fptr->CalculateInterest();

    return 0;
}