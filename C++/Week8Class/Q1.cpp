#include<bits/stdc++.h>
using namespace std;

class ATM {
private:
    string account_number;
    string pin;
    int balance;
    int daily_withdrawal_limit;

public:
    ATM(string acc_num, string pin, int balance = 0, int daily_limit = 1000){
        this->account_number=acc_num;
        this->pin=pin;
        this->balance=balance;
        this->daily_withdrawal_limit=daily_limit;
    }

    int checkBalance() {
        return balance;
    }

    void changePin(string newPin) {
        if (newPin.length()!=4 || !(isNumeric(newPin))) {
            throw invalid_argument("Invalid PIN format");
        }
        pin = newPin;
    }

    void deposit(int amount) {
        if (amount <= 0 || amount != static_cast<int>(amount) || fmod(amount, 100) != 0) {
            throw invalid_argument("Invalid deposit amount. Amount should be a positive multiple of 100.");
        }
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount <= 0 ) {
            throw invalid_argument("Invalid withdrawal amount. Amount should be a positive multiple of 100.");
        }
        if (amount > balance || amount > daily_withdrawal_limit) {
            throw runtime_error("Insufficient balance or exceeding daily withdrawal limit.");
        }
        balance -= amount;
    }

   
    bool isNumeric(const string& str) {
        return all_of(str.begin(), str.end(), ::isdigit);
    }
};

int main() {
    try {
        ATM myAccount("123456", "1234", 5000); 

        string newPin;
        int amount;

        cout << "Enter your 4-digit PIN: ";
        cin >> newPin;
        myAccount.changePin(newPin);

        cout << "Enter deposit amount: ";
        cin >> amount;
        myAccount.deposit(amount);

        cout << "Enter withdrawal amount: ";
        cin >> amount;
        myAccount.withdraw(amount);

        cout << "Current Balance: " << myAccount.checkBalance() << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}