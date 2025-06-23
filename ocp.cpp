#include <iostream>
#include <vector>
using namespace std;

class Shape 
{
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle: public Shape
{
double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override
    {
        return 3.14 * radius * radius;
    }

};

class Rectangle: public Shape
{
double width, height;
public:
    Rectangle(double w, double h) : width(w),height(h) {}
    double area() override
    {
        return width * height;
    }
};

int main()
{
    vector<Shape*> s;
    s.push_back(new Circle(5));
    s.push_back(new Rectangle(4,6));
    for (auto x : s)
    cout << "result: "<< x->area() << endl;

}