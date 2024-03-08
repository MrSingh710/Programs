#include<iostream>
using namespace std;

class employee{
    private:
    string name;
    int employee_ID;
    int age;
    string qualification;
    string department;
    int skill[6];
    bool campusStay;
    int basicpay;
    int dearnessAllowance;
    int travelAllowance;
    int houseRentAllowence;
    bool quaters;

    public:
    void setdata(string n, int ID, int a, string q, string d, bool cs, bool qt)
    {
        name = n;
        employee_ID = ID;
        age = a;
        qualification = q;
        department = d;
        campusStay = cs;
        quaters = qt;
    }
    void getdata(){
        cout << "The employee name: "<< name << endl;
        cout << "The employee ID: "<< employee_ID << endl;
        cout << "The employee age: "<< age << endl;
        cout << "The employee qualification: "<< qualification << endl;
        cout << "The employee department name: "<< department << endl;
        cout << "The employee campusstay: "<< campusStay << endl;
        cout << "The employee quaters stay: "<< quaters << endl;

    }
    void setBasicPay(int DA, int TA, int HRA)
    {
        dearnessAllowance = DA;
        travelAllowance = TA;
        houseRentAllowence = HRA;
    }
    void getBasicPay()
    {
        int BasicPay = dearnessAllowance + travelAllowance + houseRentAllowence;
        cout << "The basic pay of an employee: "<< BasicPay << endl;
        if(campusStay ==  quaters)
        {
            cout << "Basic Pay: "<< (BasicPay - houseRentAllowence) << endl;
        }
        else
        {
            cout << "Basic Pay: "<< BasicPay << endl;
        }
    }
};

int main() {
    employee e1;
    e1.setdata("Jaspreet", 2455, 24, "B. Tech", "CSE", 1, 1);
    e1.getdata();
    cout << endl;
    e1.setBasicPay(7000, 1000, 2000);
    e1.getBasicPay();
    return 0;
}