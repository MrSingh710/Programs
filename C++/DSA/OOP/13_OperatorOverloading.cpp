# include <iostream>
using namespace std;

class B {
    public:
    int a, b;
    int add() {
        return a+b;
    }
    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout<< "Output: " << value2 - value1 <<endl;
    }
    void operator() () {
        cout<< "Bracket operator called. Value of this: " << this->a <<endl;
    }
};

int main() {
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
// 1st parameter calls the function and 2nd parameter acts as input arguement
    obj1 + obj2;
    obj1();
}