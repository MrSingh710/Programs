#include <iostream>
using namespace std;

class animals{
    public:
    string name;
    animals(string n){
        name = n;
    }
};
class mammals:public animals{
    public:
    mammals(string n):animals(n){}
    string speak(){
        return "speak";
    }
};
class birds:public animals{
    public:
    birds(string n):animals(n){}
    string speak(){
        return "chirp";
    }
};
class reptiles: public animals{
    public:
    reptiles(string n):animals(n){}
    string speak(){
        return "hiss";
    }
};


int main(){
    mammals m("humans");
    birds b("sparrow");
    reptiles r("snakes");

    cout<<"Humans " << m.speak()<<endl;
    cout<<"Birds " << b.speak()<<endl;
    cout<< "Reptiles " << r.speak()<<endl;
}