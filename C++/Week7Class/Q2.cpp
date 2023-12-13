# include <iostream>
using namespace std;

class Person {
    public:
    string name="XYZ";
    string DoB="29th February, 2000";
    float age = 24.5;
    float weight = 60;
    float height = 170;
};
class Employee:public Person {
    public:
    int ID = 51;
    string department="Computer Science";
    string email="abc@gmail.com";
};

int main() {
    Employee e;
    cout<< "Name of the employee: " << e.name <<endl;
    cout<< "ID of the employee: " << e.ID <<endl;
    cout<< "Date of Birth of the employee: " << e.DoB <<endl;
    cout<< "Age of the employee: " << e.age <<endl;
    cout<< "Weight of the employee: " << e.weight <<endl;
    cout<< "Height of the employee: " << e.height <<endl;
    cout<< "Department of the employee: " << e.height <<endl;
    cout<< "Email Address of the employee: " << e.email <<endl;
}