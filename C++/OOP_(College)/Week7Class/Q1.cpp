# include <iostream>
using namespace std;

class Shape {
    public:
    float area();
    float perimeter();
};

class Circle:Shape {
    public:
    float area(float r) {
        return 3.14*r*r;
    }
    float perimeter(float r) {
        return 2*3.14*r;
    }
};
class Rectangle:Shape {
    public:
    float area(float b, float l) {
        return l*b;
    }
    float perimeter(float b, float l) {
        return (2*l)+(2*b);
    }
};
class Triangle:Shape {
    public:
    float area(float b, float h) {
        return 0.5*h*b;
    }
    float perimeter(float s1, float s2, float s3) {
        return s1+s2+s3;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;
    cout<< "Area of cirlce: " << c.area(4) <<endl;
    cout<< "Perimeter of circle: " << c.perimeter(5)  <<endl;
    cout<< "Area of rectangle: " << r.area(4, 3) <<endl;
    cout<< "Perimeter of rectangle: " << r.perimeter(4, 3)  <<endl;
    cout<< "Area of triangle: " << t.area(4, 5) <<endl;
    cout<< "Perimeter of triangle: " << t.perimeter(3, 4, 5) <<endl;
}
