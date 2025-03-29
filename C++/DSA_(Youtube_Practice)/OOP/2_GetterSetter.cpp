# include<iostream>
using namespace std;

class Hero{
    // By default, access modifier is private
    // Properties
    int health;
    char level; 
    public:
    // Methods or Behaviours
    int gethealth() {
        return health;
    }
    char getlevel() {
        return level;
    }
    void sethealth(int h) {
        health=h;
    }
    void setlevel(char l) {
        level=l;
        // Why l=level gives different output (also when int data-type is returned)
    }
};

int main()  {
    Hero Paul;
    Paul.sethealth(80); 
    Paul.setlevel('A');
    cout<< "Health: " << Paul.gethealth() <<endl;
    cout<< "Level: " << Paul.getlevel() <<endl;
}
