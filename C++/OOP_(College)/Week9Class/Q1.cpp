#include<iostream>
using namespace std;

class shape{
    public:
    virtual void area(){
        cout << "print area of the shapes" << endl;
    }
};
class circle : public shape{
    void area() override{
        float a = 5.0;
        float area_of_circle = 3.14 * a * a;
        cout << "area of circle is :" << area_of_circle << endl;
    }
};
class rectangle : public shape{
    void area() override{
        float l = 5.0;
        float b = 4.5;
        float area_of_rectangle = l * b;
        cout << "area of rectangle is :" << area_of_rectangle << endl;
    }
};
class triangle : public shape{
    void area() override{
        float base = 5.5;
        float height = 6;
        float area_of_triangle = 0.5 * base * height;
        cout << "area of triangle is :" << area_of_triangle << endl;
    }
};

int main(){

    circle c;
    shape *sptr = &c;
    sptr->area();

    rectangle r;
    shape *rptr = &r;
    rptr->area();

    triangle t;
    shape  *tptr = &t;
    tptr->area();
 
    return 0;
}