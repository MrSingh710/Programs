# include <iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight=w;
    }
};
/*  public-public=public
    public-protected=protected (vice-versa)
    public-private=private (vice-versa)
    protected-protected=protected
    protected-private=private (vice-versa)
    If members of parent class are private, then they cannot be inherited in any way
*/
// protected members can be accessed through child class
class Male:protected Human {
    public:
    string color;
    void sleep() {
        cout<< "Male is sleeping" <<endl;
    }
    int getHeight() {
        return this->height; 
    }
};
// but protected members cannot be accessed outside the class
int main() {
    Male m1;
    cout<< m1.getHeight() <<endl;
}