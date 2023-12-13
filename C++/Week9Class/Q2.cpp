#include<iostream>
using namespace std;

class Employee{
    public:
    virtual void CalculateSalary(){
        cout << "calculate the salary" << endl;
    }
};
class Teaching : public Employee{
    public:
    void CalculateSalary() override{
        float total_salary = 20000;
        float salary_per_month = total_salary/12;
        cout << "salary of employee(teaching) per month is :" << salary_per_month << endl;
    }
};
class Non_Teaching : public Employee{
    public:
    void CalculateSalary() override{
        float total_salary = 40000;
        float salary_per_month = total_salary/12;
        cout << "salary of employee(non-teaching) per month is :" << salary_per_month << endl;
    }
};
class Contractual : public Employee{
    public:
    void CalculateSalary() override{
        float total_salary = 70000;
        float salary_per_month = total_salary/12;
        cout << "salary of employee(contractual) per month is :" << salary_per_month << endl;
    }
};

int main(){

    Teaching t;
    Employee *eptr = &t;
    eptr->CalculateSalary();

    Non_Teaching n;
    Employee *nptr = &n;
    nptr->CalculateSalary();

    Contractual c;
    Employee *cptr = &c;
    cptr->CalculateSalary();

    return 0;
}