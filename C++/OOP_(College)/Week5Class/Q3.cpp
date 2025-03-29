#include <iostream>
#include <string.h>

using namespace std;

class product{
    string name;
    float price;
    int qty;

    public:
    product(){
        name = "";
        price = -1;
        qty = -1;
    }

    void setValues(){
        cout<< "Enter the name of the product: ";
        cin>> name;
        cout<< "Enter the price of the product: ";
        cin>> price;
        cout<< "Enter the quantity of the product: ";
        cin>> qty;
    }

    int buy(product p){
        p.qty++;
        return p.qty;
    }
    int sell(product p){
        p.qty--;
        return p.qty;
    }
    void barter(product p, product q){
        p.qty--;
        q.qty++;
        cout<<"Stock of "<<p.name<<" is "<<p.qty<<endl;
        cout<<"Stock of "<<q.name<<" is "<<q.qty<<endl;
    }
};



int main(){
    product p;
    product arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i].setValues();
        cout<< "Current stock after selling: "<< p.sell(arr[i]) <<endl;
    }
    p.barter(arr[0], arr[1]); 
}