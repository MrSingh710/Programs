#include<iostream>
using namespace std;
class employee{
    string name;
    string designation;
    long int salary;
    public:
    friend void annualbonus(employee e){
        if(e.designation=="accountant")
        {
            e.salary*=1.2;
        }
        if(e.designation=="manager"){
            e.salary*=1.4;
        }
        if(e.designation=="chaprasi"){
            e.salary*=0.6;
        }
        cout<<"Salary of empolyee is "<<e.salary<<endl<<"whose designation is "<<e.designation<<endl;
    };
    employee(string name,string designation,long int salary){
        this->name=name;
        this->designation=designation;
        this->salary=salary;
    }

};
 
int main () {
    employee e1("abc","accountant",450000);
    employee e2("xyz","manager",930000);
    employee e3("rst","chaprasi",100000);
    
    annualbonus(e1);
    annualbonus(e2);
    annualbonus(e3);
    return 0;
}