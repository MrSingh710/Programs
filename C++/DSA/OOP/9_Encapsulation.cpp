# include <iostream>
using namespace std;

class Student {
    private:
    string name;
    int age;
    int height;
    public:
    int getAge() {
        return this->age;
    }
};

int main()  {
    Student first;
    cout<< "Here, all the properties are made private and functions are made public for accessing the properties through the functions"; 
}