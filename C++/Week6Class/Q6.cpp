#include<iostream>
#include<string.h>
using namespace std;

class customer{
    string name;
    mutable string ordertobplaced;
    int tablenumber;
    mutable int billamt;

    public:
    customer(string n, string o, int t, int b){
        name = n;
        ordertobplaced = o;
        tablenumber = t;
        billamt = b;
    }
    void changeOrder(string o, int b) const{
        ordertobplaced = o;
        billamt = b;
    }
    void getorder() const{
        cout << "....BILL...." << endl;
        cout << "Name of customer: "<< name << endl;
        cout << "Order placed: "<< ordertobplaced << endl;
        cout << "Table number: "<< tablenumber << endl;
        cout << "Table Bill Amount: "<< billamt << endl;
    }
};
int main(){
    const customer c1("ABC", "Veg Burger", 3, 120);
    c1.getorder();

    c1.changeOrder("Non-veg Burger", 160);
    c1.getorder();

    return 0;
}