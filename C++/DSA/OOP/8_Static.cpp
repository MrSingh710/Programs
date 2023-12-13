# include <iostream>
using namespace std;

class Hero {
    int health;
    char level;
    string name;
    public:
    static int timeToComplete;

    // Constructor
    Hero() {
        cout<< "Constructor called" <<endl;
    } 
    static int h() {
        return timeToComplete;
    }
    void print() {
        cout<< "Health: " << this->health <<endl;
        cout<< "Level: " << this->level <<endl;
        cout<< "Name: " << this->name <<endl;
    }
};

// Have to initialise static members outside
int Hero::timeToComplete=5;

int main()  {
    // Static Properties
    cout<< Hero::timeToComplete <<endl;
    Hero a;
    cout<< a.timeToComplete <<endl;
    Hero b;
    b.timeToComplete=10;
    cout<< a.timeToComplete <<endl;
    cout<< b.timeToComplete <<endl;
    // Static Function
    cout<< "Static Function Called" <<endl;
    cout<< Hero::h() <<endl;
}