#include <iostream>
using namespace std;


class Date {
    int day;
    int month;
    int year;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

public:
    Date() {
        day = -1;
        month = -1;
        year = -1;
    }
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void date()
    {
        cout << day << "/" << month << "/" << year;
    }

    int diff(Date d1, Date d2){

        return ((d1.day-d2.day) + (days[d1.month-1]-days[d2.month-1]) + ((d1.year-d2.year)*365));
    }
};


int main(){
    Date  d1(11,2,2006);
    Date  d2(21,2,2004);
    cout<<d1.diff(d1,d2);
}