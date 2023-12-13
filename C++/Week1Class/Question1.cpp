#include <iostream>
using namespace std;

int main()  {
    int m1, m2, m3, m4, m5, m6;
    int  c1, c2, c3, c4, c5, c6;
    int  g1, g2, g3, g4, g5, g6;
    int sum, SGPA;
    cout<< "Enter the marks, credits and grade points of mathmatics: ";
    cin>> m1 >> c1 >> g1;
    cout<< "Enter the marks, credits and grade points of engineering physics: ";
    cin>> m2 >> c2 >> g2;
    cout<< "Enter the marks, credits and grade points of engineering chemistry: ";
    cin>> m3 >> c3 >> g3;
    cout<< "Enter the marks, credits and grade points of engineering drawing: ";
    cin>> m4 >> c4 >> g4;
    cout<< "Enter the marks, credits and grade points of physics lab: ";
    cin>> m5 >> c5 >> g5;
    cout<< "Enter the marks, credits and grade points of workshop: ";
    cin>> m6 >> c6 >> g6;
    sum=(g1*c1)+(g2*c2)+(g3*c3)+(g4*c4)+(g5*c5)+(g6*c6);
    SGPA=sum/(c1+c2+c3+c4+c5+c6);
    cout<< "Name of the student: XYZ" <<endl;
    cout<< "Enrollment of the student: 2022BCSEXX" <<endl;
    cout<< "Branch of the student: CSE" <<endl;
    cout<< "Institute Header: ABC" <<endl;
    cout<< "SGPA of the student: " << SGPA <<endl;
    for (int i=1; i<=6; i++) {
    if (SGPA>=91 && SGPA<=100) {
        cout<< i << " course have grade A+";
    }
    else if (SGPA>=81 && SGPA<=90) {
        cout<< i << " course have grade A";
    }
    else if (SGPA>=71 && SGPA<=80) {
        cout<< i << " course have grade B+";
    }
    else if (SGPA>=61 && SGPA<=70) {
        cout<< i << " course have grade B";
    }
    else if (SGPA>=51 && SGPA<=60) {
        cout<< i << " course have grade C+";
    }
    else if (SGPA>=40 && SGPA<=50) {
        cout<< i << " course have grade C";
    }
    else if (SGPA<40) {
        cout<< i << " course have grade F";
    }
    }
}