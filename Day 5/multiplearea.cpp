#include <iostream>
#include <cmath>  
using namespace std;


class Area {
public:
    
    double calculateArea(double length, double width) {
        return length * width;
    }

   
    double calculateArea(double base, double height, int isTriangle) {
        return 0.5 * base * height;
    }

    
    double calculateArea(double radius) {
        return M_PI * radius * radius;
    }

    
    double calculateArea(double side, bool isSquare) {
        return side * side;
    }
};

int main() {
    Area area;  

    double length, width, base, height, radius, side;

    
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area.calculateArea(length, width) << endl;

    
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area.calculateArea(base, height, 1) << endl;

   
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area.calculateArea(radius) << endl;

    
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of the square: " << area.calculateArea(side, true) << endl;

    return 0;
}
