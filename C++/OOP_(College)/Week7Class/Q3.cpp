#include <iostream>
using namespace std;

class Motorized {};

class WithWheels {};

class Vehicle : public Motorized, public WithWheels {
protected:
    float mileage;
    string color;
    float weight;
    float price;

public:
    Vehicle(float m, string c, float w, float p) : mileage(m), color(c), weight(w), price(p) {}

    void describe() {
        cout << "Mileage: " << mileage << " kmpl" << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Price: $" << price << endl;
    }
};

class Car : public Vehicle {
protected:
    float ownershipCost;
    string warranty;
    int seatingCapacity;
    string fuelType;

public:
    Car(float oc, string w, int sc, string ft, float m, string c, float wei, float p)
        :Vehicle(m, c, wei, p) {
            ownershipCost = oc;
            warranty = w;
            seatingCapacity = sc;
            fuelType = ft;
        }

    void describe() {
        Vehicle::describe();
        cout << "Ownership Cost: $" << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << " persons" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Motorcycle : public Vehicle {
protected:
    int numCylinders;
    int numGears;
    string wheelType;
    float fuelTankSize;

public:
    Motorcycle(int nc, int ng, string wt, float fts, float m, string c, float wei, float p)
        : numCylinders(nc), numGears(ng), wheelType(wt), fuelTankSize(fts), Vehicle(m, c, wei, p) {}

    void describe() {
        Vehicle::describe();
        cout << "Number of Cylinders: " << numCylinders << endl;
        cout << "Number of Gears: " << numGears << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " litres" << endl;
    }
};

class Audi : public Car {
    string modelType;

public:
    Audi(string mt, float oc, string w, int sc, string ft, float m, string c, float wei, float p)
        : modelType(mt), Car(oc, w, sc, ft, m, c, wei, p) {}

    void describe() {
        Car::describe();
        cout << "Model Type: " << modelType << endl;
    }
};

class Tata : public Car {
    string modelType;

public:
    Tata(string mt, float oc, string w, int sc, string ft, float m, string c, float wei, float p)
        : modelType(mt), Car(oc, w, sc, ft, m, c, wei, p) {}

    void describe() {
        Car::describe();
        cout << "Model Type: " << modelType << endl;
    }
};

class Bajaj : public Motorcycle {
    string makeType;

public:
    Bajaj(string mt, int nc, int ng, string wt, float fts, float m, string c, float wei, float p)
        : makeType(mt), Motorcycle(nc, ng, wt, fts, m, c, wei, p) {}

    void describe() {
        Motorcycle::describe();
        cout << "Make Type: " << makeType << endl;
    }
};

class BMW : public Motorcycle {
    string makeType;

public:
    BMW(string mt, int nc, int ng, string wt, float fts, float m, string c, float wei, float p)
        : makeType(mt), Motorcycle(nc, ng, wt, fts, m, c, wei, p) {}

    void describe() {
        Motorcycle::describe();
        cout << "Make Type: " << makeType << endl;
    }
};

int main() {
    cout<< "-----AUDI-----" <<endl;
    Audi audi("A4", 500, "3 years", 5, "Petrol", 15.5, "Silver", 1500, 45000);
    audi.describe();
    cout<<endl;
    cout<< "-----TATA-----" <<endl;
    Tata tata("Harrier", 700, "5 years", 4, "Petrol", 10.2, "Red", 1800, 60000);
    tata.describe();
    cout<<endl;
    cout<< "-----BAJAJ-----" <<endl;
    Bajaj pulsar("NS200", 1, 6, "Alloys", 12, 30, "Black", 150, 1200);
    pulsar.describe();
    cout<<endl;
    cout<< "-----BMW-----" <<endl;
    BMW gsa("1250", 1, 5, "Spokes", 12, 35, "Red", 140, 950);
    gsa.describe();
    cout<<endl;
}