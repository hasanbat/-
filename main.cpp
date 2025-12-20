#include <iostream>
#include "GeometryStaticLib.h"
#include "GeometryDynamicLib.h"

int main() {
    using namespace Geometry;

    
    // Использование статических функций
    std::cout << "Static functions:" << std::endl;
    std::cout << "Square area: " << squareArea(5) << std::endl;
    std::cout << "Circle perimeter: " << circlePerimeter(3) << std::endl;

    // Использование динамических классов
    std::cout << "\nDynamic classes:" << std::endl;
    Square sq(4);
    Circle cr(7);
    Triangle tr(6);

    sq.display();
    cr.display();
    tr.display();

    return 0;
    
}
