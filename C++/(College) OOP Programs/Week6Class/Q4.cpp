#include<iostream>
using namespace std;
class car{
    string model;
    string color;
    int price;
    string availdetails;
    public:
    car(string model,string color,int price,string availdeatials){
        this->model=model;
        this->color=color;
        this->price=price;
        this->availdetails=availdeatials;
    }
    friend void substitute(car cA,car cB){
        if(cA.model==cB.model && cA.color==cB.color && cA.price==cB.price && cA.availdetails==cB.availdetails){
            cout<<"Cars can be substituted";
        }
        else
        cout<<"Cars can't be substituted";
    }
};

int main () {
    car c1("Jaguar","green",78908,"yes");
    car c2("TATA","white",8976,"yes");
    substitute(c1,c2);
    return 0;
}