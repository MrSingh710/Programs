# include <iostream>
using namespace std;

class Hero {
    int health;
    char level;
    public:
    // Constructor
    Hero() {
        cout<< "Simple constructor called!" <<endl;
    }
    // Parameterised Constructor
    Hero (int health) {
        this->health = health;
        cout<< "Address in 'this->' pointer: " << this <<endl;
    }
    Hero (int health, char level) {
        this->health = health;
        this->level = level;
    }
    void setHealth(int h) {
        health=h;
    }
    void setLevel(int l) {
        level=l;
    }
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    void print() {
        cout<< "Health: " << this->health <<endl;
        cout<< "Level: " << this->level <<endl;
    }
    // Copy Constructor
    Hero (Hero &temp) {
        this->health = temp.health;
        this->level = temp.level;
        cout<< "Copy Constructor Called" <<endl;
    }
};

int main() {
    cout<< "Calling simple constructor when allocating statically" <<endl;
    // Creation of object invokes the constructor
    Hero simpleStatic; 
    cout<< "Calling parameterised constructor when allocating statically" <<endl;
    Hero parameterisedStatic(60);
    cout<< "Address of parameterisedStatic: " << &parameterisedStatic <<endl;
    cout<< "Calling simple constructor when allocating dynamically" <<endl;
    Hero *simpleDynamic = new Hero; // OR Hero Dynamic = new Hero()
    cout<< "Calling parameterised constructor when allocating dynamically" <<endl;
    Hero *parameterisedDynamic = new Hero(70);
    cout<< "Address of parameterisedDynamic: " << parameterisedDynamic <<endl;
    cout<< endl;
    Hero parameterisedStatic2(70, 'A');
    parameterisedStatic2.print();
    // Copy Constructor
    Hero H(parameterisedStatic2);
    H.print();
}  