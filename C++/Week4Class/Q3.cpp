#include<iostream>
using namespace std;

class person{
    string name;
    string id;
    int age;
    string gender;
    string address;
    int contact;
    float height;
    float weight;
    string bloodGroup;
    string parentage;

    public:
    void setDetails(string n, string i, int a, string ge, string add, int cont, float h, float w, string bg, string p)
    {
        name=n;
        id=i;
        age=a;
        gender=ge;
        address=add;
        contact=cont;
        height=h;
        weight=w;
        bloodGroup=bg;
        parentage=p;
    }
    void getDetails()
    {
        cout<< "Name: " <<name <<endl;
        cout<< "ID: " <<id <<endl;
        cout<< "Age: " <<age <<endl;
        cout<< "Gender: " <<gender <<endl;
        cout<< "Address: " <<address <<endl;
        cout<< "Contact number: " <<contact <<endl;
        cout<< "Height: " <<height <<endl;
        cout<< "Weight: " <<weight <<endl;
        cout<< "Blood Group: " <<bloodGroup <<endl;
        cout<< "Parentage: " <<parentage <<endl;
    }
};

int main() {
    person p1;
    p1.setDetails("Jaspreet", "2022BCSE019", 20, "MALE", "Jammu", 123456789, 5.11, 55, "B+","Daljit");
    p1.getDetails();
    return 0;
}