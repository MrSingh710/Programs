# include <iostream>
using namespace std;
// 1st type of compile-time polymorphism is function overloading
class A {
    public:
    void Hii() {
        cout<< "Hlo Jassi" <<endl;
    }
    void Hii(char name) {
        cout<< "Hlo " << name <<endl;
    }
    void Hii(string name) {
        cout<< "Hlo " << name <<endl;
    }
    // int Hii(string name) {
    //     cout<< "Hlo" << name <<endl;
    // }
};

int main() {
    A obj;
    obj.Hii();
    obj.Hii('J');
    obj.Hii("JG");
}