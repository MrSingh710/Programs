#include<iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;
    string dayName;

    public:
    void setDate(int d, int m, int y, string dN) {
        day=d;
        month=m;
        year=y;
        dayName=dN;
    }
    void getDay(){
        cout<< "Date: " <<day <<endl;
    }
    void getMonth(){
        cout<< "Month: " <<month <<endl;
    }
    void getYear(){
        cout<< "Year: "<<year <<endl;
    }
    void getDayName(){
        cout<< "Day: " <<dayName <<endl;
    }
    void dateFormat(){
        cout<< day <<"/"<< month <<"/"<< year <<"  "<< dayName <<endl;
    }
};
int main()
{
    Date d1, d2;
    cout<< "First:- " <<endl;
    d1.setDate(3, 12, 2023,"Wenesday");
    d1.getDay();
    d1.getMonth();
    d1.getYear();
    d1.getDayName();
    d1.dateFormat();
    cout<<endl;
    cout<< "Second:- " <<endl;
    d2.setDate(5, 10, 2023,"Thursday");
    d2.getDay();
    d2.getMonth();
    d2.getYear();
    d2.getDayName();
    d2.dateFormat();
    return 0;

}