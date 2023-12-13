# include<iostream>
using namespace std;

class Hero{
    //Properties
    int health;
    public:
    char level;
};

int main()  {
    // Static Allocation
    Hero Paul;
    cout<< "Size: " << sizeof(Paul);
    // The output is 8 bytes instead of 5 bytes because of data stucture padding
}