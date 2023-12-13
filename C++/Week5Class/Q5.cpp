#include<bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string holder;
    string number;
    string type;
    double balance;
    static int savingCnt;
    static int currentCnt;
    static double annualRate;

public:
    BankAccount(const string& h, const string& num, const string& t, double b)
        : holder(h), number(num), type(t), balance(b) {
        if (t == "Saving") {
            savingCnt++;
        } else if (t == "Current") {
            currentCnt++;
        }
    }

    static int getSavingCnt() {
        return savingCnt;
    }

    static int getCurrentCnt() {
        return currentCnt;
    }

    static void modifyRate(double rate) {
        annualRate = rate;
    }

    void calculateMonthly() {
        double monthly = (balance * annualRate) / 12.0;
        balance += monthly;
    }

    void displayInfo() {
        cout << "Account Holder: " << holder << endl;
        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int BankAccount::savingCnt = 0;
int BankAccount::currentCnt = 0;
double BankAccount::annualRate = 0.0;

int main() {
    BankAccount::modifyRate(0.05);

    BankAccount acc1("Jaspreet", "123456", "Saving", 1000.0);
    BankAccount acc2("Prateet", "789012", "Current", 2000.0);

    acc2.calculateMonthly();

    acc1.displayInfo();
    acc2.displayInfo();


    cout << "Saving Accounts Count: " << BankAccount::getSavingCnt() << endl;
    cout << "Current Accounts Count: " << BankAccount::getCurrentCnt() << endl;

    return 0;
}