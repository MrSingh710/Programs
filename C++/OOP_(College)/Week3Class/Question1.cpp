// Jaspreet Singh 2022BCSE019
# include <iostream>
#include <math.h>
using namespace std;

int area(int side) {
    int sqr=side*side;
    return sqr;
}

int area(int length, int breadth) {
    int rect=length*breadth;
    return rect;
}

int area(int a, int b, int h) {
    int trapezium=0.5*(a+b)*h;
    return trapezium;
}

int area(float r) {
    int circle=M_PI*r*r;
    return circle;
}

int area(double base, int h) {
    int tri=0.5*base*h;
    return tri;
}

int main()  {
    string shape;
    int side, length, breadth, a, b, h;
    float r;
    double base;
    cout<< "Enter the shape whose area is to be calculated: ";
    cin>> shape;
    if (shape=="square") {
        cout<< "Enter the side: ";
        cin>> side;
        cout<< "Area of square is " << area(side);
    }
    else if (shape=="rectangle") {
        cout<< "Enter the length and breadth: ";
        cin>> length >> breadth;
        cout<< "Area of rectangle is " << area(length, breadth);
    }
    else if (shape=="trapezium") {
        cout<< "Enter the parallel lengths: ";
        cin>> a >> b;
        cout<< "Enter the distance between the parallel sides: ";
        cin>> h;
        cout<< "Area of trapezium is " << area(a, b, h);
    }
    else if (shape=="circle") {
        cout<< "Enter the radius: ";
        cin>> r;
        cout<< "Area of circle is " << area(r);
    }
    else if (shape=="triangle") {
        cout<< "Enter the base and height: ";
        cin>> base >> h;
        cout<< "Area of triangle is " << area(base, h);
    }
    else cout<< "Enter the valid shape!!!";
}