# include <iostream>
using namespace std;

class Vehicle {
    int model;
    int engine;
    int chasisNumber;
    float averageSpeed;
    bool isRunning;
    float exShowRoomPrice;
    float accessoriesCost;
    float roadTax;
    float insurance;
    float GST;

    public:
    void setAttributes(int m, int e, int cN, float aS) {
        m=model;
        e=engine;
        cN=chasisNumber;
        aS=averageSpeed;
    }
    void getAttributes() {
        cout<< "Model number: " <<model <<endl;
        cout<< "Engine number: " <<engine <<endl;
        cout<< "Chasis Number: " <<chasisNumber<<endl;
        cout<< "Average Speed: " <<averageSpeed <<endl;
    }
    void setTotalCost(float ex, float ac, float rt, float in, float G) {
        ex=exShowRoomPrice;
        accessoriesCost=ac;
        roadTax=rt;
        insurance=in;
        G=GST;
        
    }
    void getTotalCost() {
        float totalCost=exShowRoomPrice+accessoriesCost+roadTax+insurance+GST;
        cout<< "Total Cost of the vehicle: " <<totalCost <<endl;
    }
    void start() {
        cout<< "Vehicle has started" <<endl;
    };
    void accelerate() {
        cout<< "Vehicle has accelerated" <<endl;
    };
    void slowdown() {
        cout<< "Vehicle has now slowed down" <<endl;
    };
    void stop() {
        cout<< "Vehicle has now stopped" <<endl;
    };
};

int main() {
    Vehicle v1;
    v1.setAttributes(001, 123456, 98765, 80.5);
    v1.getAttributes();
    v1.setTotalCost(5000.0, 20000.0, 1000.0, 50000.0, 20000.0);
    v1.getTotalCost();
    v1.start();
    v1.accelerate();
    v1.slowdown();
    v1.stop();
}