// square.h
#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square();
        Square(float side);
        ~Square();

        void setSideLength(float side);
        float getSideLength() const;
    };
}

#endif // SQUARE_H


// square.cpp
#include "square.h"
#include
using namespace shapes;

Square() : sideLength(0) {}

Square(double length) : sideLength(length) {}

double getSideLength() const {
 return sideLength;
}

~Square() {
 cout << "Square object destroyed" << endl;
}

// triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float b, float h);
        ~Triangle();

        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
    };
}

#endif // TRIANGLE_H

// triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle() : base(0.0f), height(0.0f) {}

    Triangle(float b, float h) : base(b), height(h) {}

    ~Triangle() {}

    void setBase(float b) {
        base = b;
    }

    void setHeight(float h) {
        height = h;
    }

    float getBase() const {
        return base;
    }

    float getHeight() const {
        return height;
    }
}

// circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle();
        Circle(float r);
        ~Circle();

        void setRadius(float r);
        float getRadius() const;
    };
}

#endif 

// circle.cpp
#include "Circle.h"

namespace shapes {
    Circle() : radius(0.0f) {}

    Circle(float r) : radius(r) {}

    ~Circle() {}

    void setRadius(float r) {
        radius = r;
    }

    float getRadius() const {
        return radius;
    }
}

// area.h
#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static float calculateSquareArea(const Square& square);
        static float calculateTriangleArea(const Triangle& triangle);
        static float calculateCircleArea(const Circle& circle);
    };
}

#endif // AREA_H

// area.cpp
#include "Area.h"
#include <cmath>

namespace shapes {
    float Area::calculateSquareArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    float Area::calculateTriangleArea(const Triangle& triangle) {
        return 0.5f * triangle.getBase() * triangle.getHeight();
    }

    float Area::calculateCircleArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}

// main.cpp
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;
    do {
        cout << "Options:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                float side;
                cout << "Enter side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case '2': {
                float base, height;
                cout << "Enter base length of the triangle: ";
                cin >> base;
                cout << "Enter height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case '3': {
                float radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while (choice != '4');

    return 0;
}