#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array
    string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Iterate through the array and check for elements starting with "B"
    for (int i = 0; i < arrSize; i++) {
        if (arr[i][0] == 'B') {
            cout << arr[i] << endl;
        }
    }

    return 0;
}