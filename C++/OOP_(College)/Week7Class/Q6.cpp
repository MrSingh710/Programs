#include<iostream>
using namespace std;

class person{
    private:
    string name;
    int age;
    string date_of_birth;
    string enrollment_no;

    public:
    void set_student_details(string n, int a, string dob, string en){
        name = n;
        age = a;
        date_of_birth = dob;
        enrollment_no = en;
    }
    void get_student_detials(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Date of birth: " << date_of_birth << endl;
        cout << "Enrollment number: " << enrollment_no << endl;
    }
    
};
class student : public person{

};
class professor : public person{

};
class head : public professor{

};

int main(){

    professor p;
    p.set_student_details("XYZ", 19, "1st-March-2002", "2022BCSE019");
    p.get_student_detials();
    cout << endl;
    head h;
    h.set_student_details("ABC", 19, "5th-April-2000", "2022BCSE019");
    h.get_student_detials();

    return 0;
}