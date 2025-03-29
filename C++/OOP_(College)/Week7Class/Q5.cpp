#include<iostream>
using namespace std;

class Account{
    public:
    void Transaction(){
        int amount_in_SA = 5000;
        int amount_in_CA = 4000;
        int trans = amount_in_SA + 2000;
        cout << "Amount in savings account after transcation: "<< trans << endl;
    }
    void Interest(){
        int principal_amount = 1000;
        int interest_rate = 200;
        int time_period = 1;
        int interest_calculation = principal_amount * interest_rate * time_period;
        cout << "Interest: " << interest_calculation << endl;
    }

};
class SavingAccount : public Account{

};
class CurrentAccount : public Account{

};
int main(){

    SavingAccount s1;
    s1.Transaction();
    s1.Interest();

    CurrentAccount c1;
    c1.Transaction();
    c1.Interest();

    return 0;
}