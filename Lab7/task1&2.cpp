// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() : length(0), width(0) {}

    // Overloaded constructor for Question 2
    Rectangle(float l, float w) : length(l), width(w) {}

    // Destructor
    ~Rectangle() {}

    // Accessor methods
    void setLength(float l) { length = l; }
    void setWidth(float w) { width = w; }
    float getLength() const { return length; }
    float getWidth() const { return width; }

    // Function to calculate the area
    float calculateArea() const { return length * width; }
};

#endif



//Rectangle.cpp

#include "Rectangle.h"

Rectangle() : length(0.0f), width(0.0f) {
    // Default constructor
}

Rectangle(float l, float w) : length(l), width(w) {
    // Overloaded constructor
}

~Rectangle() {
   
}

void setLength(float l) {
    length = l;
}

void setWidth(float w) {
    width = w;
}

float getLength() const {
    return length;
}

float getWidth() const {
    return width;
}

float getArea() const {
    return length * width;
}


//main.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    
    Rectangle rect1;

    
    cout << "Enter the length of the first rectangle: ";
    float length;
    cin >> length;
    rect1.setLength(length);

    cout << "Enter the width of the first rectangle: ";
    float width;
    cin >> width;
    rect1.setWidth(width);

   
    cout << "The area of the first rectangle is: " << rect1.getArea() << endl;

    
    cout << "Enter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;
    Rectangle rect2(length, width);

    
    cout << "The area of the second rectangle is: " << rect2.getArea() << endl;

    return 0;
}
