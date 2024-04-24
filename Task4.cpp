#include <iostream>
#include <limits>
using namespace std;

int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    cout << "Please enter an integer value between 5 and 10: ";

    // Read the user's input
    while (!(cin >> userInput) || userInput < 5 || userInput > 10) {
        // Clear the input stream
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');

        // Prompt the user again for a valid input
        cout << "Sorry, you entered an ivalid number, Please try again. ";
    }

    // Output a statement to inform the user that their input value has been accepted
    cout << "Input value accepted: " << userInput << endl;

    return 0;
}