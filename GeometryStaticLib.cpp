#include <cmath>
#include <stdexcept>

namespace Geometry {
    // Квадрат
    double squareArea(double side) {
        if (side <= 0) throw std::invalid_argument("Side must be positive");
        return side * side;
    }

    double squarePerimeter(double side) {
        if (side <= 0) throw std::invalid_argument("Side must be positive");
        return 4 * side;
    }

    // Круг
    double circleArea(double radius) {
        if (radius <= 0) throw std::invalid_argument("Radius must be positive");
        return M_PI * radius * radius;
    }

    double circlePerimeter(double radius) {
        if (radius <= 0) throw std::invalid_argument("Radius must be positive");
        return 2 * M_PI * radius;
    }

    // Треугольник (предполагаем правильный)
    double triangleArea(double side) {
        if (side <= 0) throw std::invalid_argument("Side must be positive");
        return (sqrt(3) / 4) * side * side;
    }

    double trianglePerimeter(double side) {
        if (side <= 0) throw std::invalid_argument("Side must be positive");
        return 3 * side;
    }
}
