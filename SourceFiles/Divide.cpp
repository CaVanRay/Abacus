/*
Title: Abacus Dividing Function
Author: Cavan Ray Theiss
Contact: cavanrt@gmail.com
Date: 07/08/2026
Description:

    this function takes as input two large numbers in the form of strings

    it then converts those two strings into vector<int> types

    once done it then uses the two vectors and divides them one single int 
    at a time in order to create a 3rd vector<int> type quotient

    the quotient vector will then be converted back into a string and 
    returned back to the main function

*/

#include "Headers.h"

int main(){

    /*
    although this is being written as a standalone program for testing
    eventually this will just be another function
    */

    // PREPARE VARIABLE FOR USE

    std::string dividendString;
    std::string divisorString;
    std::vector<int> dividendVector;
    std::vector<int> divisorVector;
    std::vector<int> quotientVector;

    // GET INPUT FOR NUMBERS TO USE

    std::cout << std::endl;
    dividendString = getBigNumber("Please input number to divide: ");
    std::cout << std::endl;
    divisorString = getBigNumber("Please input number to divide by: ");

    // REMOVE LEADING 0'S

    while(dividendString[0] == '0' && dividendString.size() > 1){
        dividendString.erase(0, 1);
    }

    while(divisorString[0] == '0' && divisorString.size() > 1){
        divisorString.erase(0, 1);
    }

    // CONVERT LARGE NUMBER STRINGS INTO VECTORS

    for(char c : dividendString){
        dividendVector.push_back(c - '0');
    }
    for(char c : divisorString){
        divisorVector.push_back(c - '0');
    }

    // TESTING

    std::cout << std::endl << "DIVIDEND: ";
    
    for(int i : dividendVector)
        std::cout << i;
    
    std::cout << std::endl << "---------";
    
    for(int i : divisorVector)
        std::cout << i;

    return 0;
}
