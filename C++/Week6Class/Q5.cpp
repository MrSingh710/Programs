#include <iostream>

using namespace std;

class Student1;
class Student2;

class Student3
{
    double grade;

public:
    void setvalue(double value)
    {
        grade = value;
    }
    friend void average(Student1, Student2, Student3);
};

class Student1
{
    double grade;

public:
    void setvalue(double value)
    {
        grade = value;
    }
    friend void average(Student1, Student2, Student3);
};

class Student2
{
    double grade;

public:
    void setvalue(double value)
    {
        grade = value;
    }
    friend void average(Student1, Student2, Student3);
};

void average(Student1 obj1, Student2 obj2, Student3 obj3)
{
    cout << "Average of three Student: " << (obj1.grade + obj2.grade + obj3.grade)/3;
}

int main()
{
    Student1 S1;
    Student2 S2;
    Student3 S3;

    S1.setvalue(5);
    S2.setvalue(9.8);
    S3.setvalue(8);

    average(S1, S2, S3);
    return 0;
}