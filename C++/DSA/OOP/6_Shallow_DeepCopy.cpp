# include <iostream>
using namespace std;
# include <string.h>

class Hero {
    int health;
    char level;
    string name; 
    public:
    Hero (int health, char level, string name) {
        this->health = health;
        this->level = level;
        this->name = name;
    }
    // Deep Copy
    Hero (Hero &temp) {
        this->health = temp.health;
        this->level = temp.level;
        this->name = temp.name;
        cout<< "Copy Constructor Called" <<endl;
    }
    void print() {
        cout<< "Health: " << this->health <<endl;
        cout<< "Level: " << this->level <<endl;
        cout<< "Name: " << this->name <<endl;
    }
};

int main() {
    Hero h1(70, 'A', "h1");
    h1.print();
    Hero h2(h1);
    h1.print();
    h2.print();
    cout<< "Copy Assignment Operator:-" <<endl;
    Hero h3(90, 'C', "h3");
    h1=h3;
    h1.print();
    h3.print();
}