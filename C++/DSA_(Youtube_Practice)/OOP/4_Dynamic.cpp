# include <iostream>
using namespace std;

class Hero {
    int health;
    char level;
    public:
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
};

int main() {
    // Dyanamic Allocation
    Hero *h = new Hero;
    (*h).setHealth(80);
    (*h).setLevel('A');
    cout<< "Health: " << (*h).getHealth() <<endl;
    cout<< "Level: " << (*h).getLevel() <<endl;
    // OR
    (*h).setHealth(85);
    (*h).setLevel('B');
    cout<< "Health: " << h->getHealth() <<endl;
    cout<< "Level: " << h->getLevel() <<endl;
}