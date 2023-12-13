#include<iostream>
using namespace std;

class vehicle{
    public:
    virtual void CalculateRentalCost(){
        cout << "calculating rental cost of a vehicle" << endl;
        float rent_payed = 1000.00;
        float no_of_days = 14;
        float total_rent = rent_payed/no_of_days;
        cout << "the total rent is :" << total_rent << endl;
    }
};
class Car : public vehicle{
    public:
    void CalculateRentalCost() override {
        float time_taken = 4;
        float distance_covered = 28.5;
        float rent_cost = time_taken * distance_covered;
        cout << "the rent cost of car is :" << rent_cost << endl;
    }
};
class Bike : public vehicle{
    public:
    void CalculateRentalCost() override {
        float time_taken = 3;
        float distance_covered = 24;
        float rent_cost = time_taken * distance_covered;
        cout << "the rent cost of bike is :" << rent_cost << endl;
    }
};
class Bus : public vehicle{
    public:
    void CalculateRentalCost() override {
        float time_taken = 8;
        float distance_covered = 21.5;
        float rent_cost = time_taken * distance_covered;
        cout << "the rent cost of bus is :" << rent_cost << endl;
    }
};

int main(){

    Car c;
    vehicle *cptr = &c;
    cptr->CalculateRentalCost();

    Bike b;
    vehicle *bptr = &b;
    bptr->CalculateRentalCost();

    Bus s;
    vehicle *sptr = &s;
    sptr->CalculateRentalCost();

    return 0;
}