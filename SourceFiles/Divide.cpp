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

    bool hitDEC = false;
    std::string dividendString;
    std::string divisorString;
    std::string quotientString;
    std::vector<int> dividendV;
    std::vector<int> dividendDEC;
    std::vector<int> divisorV;
    std::vector<int> divisorDEC;
    std::vector<int> quotientV;
    std::vector<int> quotientDEC;

    // GET INPUT FOR NUMBERS TO USE

    std::cout << std::endl;
    dividendString = getBigNumber("Please input number to divide: ");
    std::cout << std::endl;
    divisorString = getBigNumber("Please input number to divide by: ");

    // REMOVE LEADING 0'S

    // while(dividendString[0] == '0' && dividendString.size() > 1){
    //     dividendString.erase(0, 1);
    // }

    // while(divisorString[0] == '0' && divisorString.size() > 1){
    //     divisorString.erase(0, 1);
    // }

    // CONVERT LARGE NUMBER STRINGS INTO VECTORS

    for(char c : dividendString){
        if(c == '.'){
            hitDEC = true;
            continue;
        }else if(hitDEC){
            dividendDEC.push_back(c - '0');
        }else{
            dividendV.push_back(c - '0');
        }
    }
    hitDEC = false;
    for(char c : divisorString){
        if(c == '.'){
            hitDEC = true;
            continue;
        }else if(hitDEC){
            divisorDEC.push_back(c - '0');
        }else{
            divisorV.push_back(c - '0');
        }
    }
    hitDEC = false;

    // TESTING

    std::cout << std::endl << "DIVIDEND: ";
    
    for(int i : dividendV)
        std::cout << i;
    std::cout << '.';
    for(int i : dividendDEC)
        std::cout << i;
    
    std::cout << std::endl << "--------";

    std::cout << std::endl << "DIVISOR: ";
    
    for(int i : divisorV)
        std::cout << i;
    
    std::cout << std::endl << "--------";

    std::cout << std::endl << "QUOTIENT: ";

    if((dividendVector.size() == 1) && (dividendVector[0] == 0)){
        quotientString = "0";
    }    
    
    if((divisorVector.size() == 1) && (divisorVector[0] == 0)){
        quotientString = "Undefined";
    }

    std::cout << quotientString;

    std::cout << std::endl << std:: endl;
    
    return 0;
}
