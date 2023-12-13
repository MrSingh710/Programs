# include<iostream>
using namespace std;

class Hero{
    //Properties
    public:
    int health;
    char level;
};

int main()  {
    // Creation of object 
    Hero Paul;
    // Accessing the properties and behaviours by "." (dot) operator
    Paul.health= 80;
    Paul.level= 'A';
    cout<< "Health: " << Paul.health <<endl;
    cout<< "Level: " << Paul.level <<endl;
}