#ifndef GEOMETRY_DYNAMIC_LIB_H
#define GEOMETRY_DYNAMIC_LIB_H

#include <cmath>

namespace Geometry {
    class Square {
    private:
        double side;
    public:
        Square(double s);
        double area() const;
        double perimeter() const;
        void display() const;
    };

    class Circle {
    private:
        double radius;
    public:
        Circle(double r);
        double area() const;
        double perimeter() const;
        void display() const;
    };

    class Triangle {
    private:
        double side;
    public:
        Triangle(double s);
        double area() const;
        double perimeter() const;
        void display() const;
    };

}

#endif
