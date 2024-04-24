#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

// Function to count the number of vowels in a string
int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";

    for (char c : str) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }

    return count;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversedStr(str);
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    istringstream iss(str);
    ostringstream oss;
    string word;

    while (iss >> word) {
        if (word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        oss << word << " ";
    }

    return oss.str();
}

int main() {
    ifstream inputFile("textfile.txt");
    string fileData;

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            fileData += line;
        }
        inputFile.close();

        // Count the number of vowels
        int vowelCount = countVowels(fileData);
        cout << "Number of vowels: " << vowelCount << endl;

        // Count the number of words
        istringstream wordStream(fileData);
        int wordCount = 0;
        string word;
        while (wordStream >> word) {
            wordCount++;
        }
        cout << "Number of words: " << wordCount << endl;

        // Reverse the statement
        string reversedStatement = reverseString(fileData);
        cout << "Reversed statement: " << reversedStatement << endl;

        // Capitalize the second letter of each word
        string capitalizedStatement = capitalizeSecondLetter(fileData);
        cout << "Capitalized statement: " << capitalizedStatement << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}