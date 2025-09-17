#include <iostream>

class Rectangle {
private:
    double length;
    double width;
public:
    // Default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }
    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double getArea() {
        return length * width;
    }
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
};

int main() {
    Rectangle rect1(5.0, 4.0);
    std::cout << "Area of rect1: " << rect1.getArea() << std::endl;
    Rectangle rect2;
    rect2.setDimensions(10.0, 5.0);
    std::cout << "Area of rect2: " << rect2.getArea() << std::endl;
    return 0;
}