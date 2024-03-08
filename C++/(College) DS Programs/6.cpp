# include <iostream>
using namespace std;

struct Date {
    int date;
    int month;
    int year;
};

struct Employee {
    int employeeID;
    string name;
    string department;
    string designation;
    Date DoB;
    Date DoJ;
    double salary;

    void display() {
        cout << "\n******Employee " << employeeID << " Record******" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee's Department: " << department << endl;
        cout << "Employee's Designation: " << designation << endl;
        cout << "Employee's Date of Birth: " << DoB.date << "/" << DoB.month << "/" <<DoB.year << endl;
        cout << "Employee's Date of Joining: " << DoJ.date << "/" << DoJ.month << "/" << DoJ.year << endl;
        cout << "Employee's Salary: " << salary << endl;
    }
    void specificDisplay() {

    }

};

int main() {
    Employee e[] = {
        {1, "ABC", "Maths", "Professor", {1, 6, 1995}, {2, 5, 2020}, 100000},
        {2, "XYZ", "Electrical", "CEO", {3, 4, 1990}, {4, 2, 2024}, 300000},
        {3, "Jaspreet", "Computer Science", "Scientist", {3, 12, 2003}, {5, 4, 2023}, 70000}
    };
    for (int i = 0; i < sizeof(e); i++) {
        e[i].display();
    }
    

    Date specific;
    cout << "Enter the date of joining to display the employees after which they have joined: ";
    cin >> specific.date >> specific.month >> specific.year;
    for (int i = 0; i < sizeof(e); i++) {
        if (e[i].DoJ.year > specific.year) {
            
        }
    }


}