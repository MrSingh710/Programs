# include <iostream>
using namespace std;

class Hero {
    int health;
    char level;
    string name;

    public:
    // Constructor
    Hero() {
        cout<< "Constructor called" <<endl;
    }
    void print() {
        cout<< "Health: " << this->health <<endl;
        cout<< "Level: " << this->level <<endl;
        cout<< "Name: " << this->name <<endl;
    }
    // Destructor
    ~Hero() {
        cout<< "Destructor called" <<endl;
    }
};

int main()  {
    // Static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    // Destructor is manually called
    delete b;
}