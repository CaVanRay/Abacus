#include "Headers.h"

// Functions to validate inputs

//*********************************************************************

std::string getString(const std::string& prompt){

    // string to grab
    std::string StringInput;

    // peek into the buffer to see if a leftover \n exists
    // if \n is there, it gets discarded
    // if \n isn't there, nothing happens
    if (std::cin.peek() == '\n') {
        std::cin.ignore();
    }

    // will continuously loop until break
    while (true) {
        std::cout << prompt;

        // Try reading a string
        if (std::getline(std::cin, StringInput)) {
            // on success, return value, breaking the loop
            return StringInput;
        }
        // if it reaches here that means input failed
        std::cout << "Input failure, please try again. \n";

        // clear input 
        std::cin.clear();

    }

}

//*********************************************************************

std::string getBigNumber(const std::string& prompt){

    // numbers will be input as strings, but must be checked for letters
    std::string numberAsAString;

    // peek into the buffer to see if a leftover \n exists
    if (std::cin.peek() == '\n') {
        std::cin.ignore();
    }

}

//*********************************************************************

int getInt(const std::string& prompt){

    // value to grab
    int intValue;

    // will continuously loop until break
    while (true) {
        std::cout << prompt;

        // Try reading an int
        if (std::cin >> intValue) {
            // on success, return value, breaking the loop
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return intValue;
        }

        // if it reaches here that means input failed
        std::cout << "Invalid number. Please try again. \n";

        // Clear input
        std::cin.clear();

        // Throw away invalid characters
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

//*********************************************************************

bool getYN(const std::string& prompt){
    
    std::string input;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);

        if (input.length() == 1) {
            char c = std::tolower(input[0]);

            if (c == 'y') {
                return true;
            }
            if (c == 'n') {
                return false;
            }
        }

        std::cout << "Invalid input. Please type 'y' or 'n'. \n";
    }

}

//*********************************************************************

