# include <iostream>
using namespace std;

class Student {
    public:
    string name;
    string rollNumber;
    string DoB;
    int marks[5];
    
    Student(string n, string rN, string DB) {
        name=n;
        rollNumber=rN;
        DoB=DB;
    }
    int calculateTotalMarks() {
        int total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
        return total;
    }
    int calculateAverageMarks() {
        int average=calculateTotalMarks()/5;
        return average;
    }
    void printGradeCard() {
        if (calculateAverageMarks()>=91) {
            cout<< "Grade A+" <<endl;
        }
        else if (calculateAverageMarks()>=81 && calculateAverageMarks()<=90) {
            cout<< "Grade A" <<endl;
        }
        else if (calculateAverageMarks()>=71 && calculateAverageMarks()<=80) {
            cout<< "Grade B+" <<endl;
        }
        else if (calculateAverageMarks()>=61 && calculateAverageMarks()<=70) {
            cout<< "Grade B" <<endl;
        }
        else if (calculateAverageMarks()>=51 && calculateAverageMarks()<=60) {
            cout<< "Grade C+" <<endl;
        }
        else if (calculateAverageMarks()>=41 && calculateAverageMarks()<=50) {
            cout<< "Grade C" <<endl;
        }
        else if (calculateAverageMarks()<=40) {
            cout<< "Grade F" <<endl;
        }
    }
    void getDetails() {
        cout<< "Name: " << name <<endl;
        cout<< "Roll Number: " << rollNumber <<endl;
        cout<< "Date of Birth: " << DoB <<endl;
        int marks[5]={95, 87, 89, 79, 90};
        cout<< "Marks are: ";
        for (int i=0; i<5; i++) {
            cout << marks[i] << "  " <<endl;
        }
        
    }
};

int main()  {
    Student s1("Jaspreet", "2022BCSE019", "12th December 2003");
    s1.getDetails();
    s1.printGradeCard();
}

