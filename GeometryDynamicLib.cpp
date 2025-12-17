#include "GeometryDynamicLib.h"
#include <iostream>

namespace Geometry {
    // Класс Square
    Square::Square(double s) : side(s) {
        if (s <= 0) throw std::invalid_argument("Side must be positive");
    }

    double Square::area() const {
        return side * side;
    }

    double Square::perimeter() const {
        return 4 * side;
    }

    void Square::display() const {
        std::cout << "Square: side = " << side 
                  << ", area = " << area() 
                  << ", perimeter = " << perimeter() << std::endl;
    }

    // Класс Circle
    Circle::Circle(double r) : radius(r) {
        if (r <= 0) throw std::invalid_argument("Radius must be positive");
    }

    double Circle::area() const {
        return M_PI * radius * radius;
    }

    double Circle::perimeter() const {
        return 2 * M_PI * radius;
    }

    void Circle::display() const {
        std::cout << "Circle: radius = " << radius 
                  << ", area = " << area() 
                  << ", perimeter = " << perimeter() << std::endl;
    }

    // Класс Triangle
    Triangle::Triangle(double s) : side(s) {
        if (s <= 0) throw std::invalid_argument("Side must be positive");
    }

    double Triangle::area() const {
        return (sqrt(3) / 4) * side * side;
    }

    double Triangle::perimeter() const {
        return 3 * side;
    }

    void Triangle::display() const {
        std::cout << "Triangle: side = " << side 
                  << ", area = " << area() 
                  << ", perimeter = " << perimeter() << std::endl;
    }
}
