#include <iostream>
#include <string>
using namespace std;

class student{
    string enrollmentNumber; 
    string DoB;
    string department; 
    string institute;
    int marks[5];

public:
float total;
float avg;
    void setmarks(int x[]){
        for(int j=0; j<=4; ++j){
            marks[j]=x[j];
        }
    }
    int totalmarks(){
        for(int j=0; j<=4; ++j){
           total = total + marks[j];
        }
        return total;
    }
    float averagemarks(){
        avg = total/5;
        cout<<"Average: "<<avg<<endl;
    }
    void grade(){
        if  (total>=90){
            cout<<"Grade A";
        }
        else if(total>=80 && total<90){
            cout<<"Grade B";
        }
        else if(total>=70 && total<80){
            cout<<"Grade C";
        }
        else if(total>=60 && total <70){
            cout<<"Grade D";
        }
        else if(total>= 50 && total){
            cout<<"Fail";
        }
    }

};
int main(){
    student *s1= new student();
    int t[5]={50,90,85,70,60};
    s1->setmarks(t);
    cout<< "Total marks: " <<s1->totalmarks()<<endl;
    s1->averagemarks();
    s1->grade();
}