#include <iostream>
#include <limits>
using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    bool quit = false;

    while (!quit) {
        int selection;
        double base, height, length, width, side;

        // Display the menu and prompt the user for a choice
        cout << "Please select the area of the shape to calculate :\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit program\n";
        cout << "Enter selection : ";
        cin >> selection;

        // Check if the input is valid
        while (cin.fail() || selection < 1 || selection > 4) {
            // Clear the input stream
            cin.clear();
            cin.ignore(numeric_limits < streamsize >::max(), '\n');

            // Prompt the user again for a valid input
            cout << "Your input was: " << selection << " which is an invalid input, Please enter a valid input!!! (between 1 and 4): " << endl;
            cin >> selection;
        }

        // Process the user's choice
        switch (selection) {
            case 1:
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;

            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;

            case 3:
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;

            case 4:
                quit = true;
                cout << "You are quiting the program." << endl;
                break;
        }

        // Clear the input stream
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << endl;
    }

    return 0;
}