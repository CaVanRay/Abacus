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
    
    while(dividendString[0] == '0' && dividendString[1] != '.' && dividendString.size() > 2){
        dividendString.erase(0, 1);
    }

    while(divisorString[0] == '0' && dividendString[1] != '.' && divisorString.size() > 2){
        divisorString.erase(0, 1);
    }

    // CONVERT LARGE NUMBER STRINGS INTO VECTORS

    for(char c : dividendString){
        if(c == '.' ){
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
        if(c == '.' ){
            hitDEC = true;
            continue;
        }else if(hitDEC){
            divisorDEC.push_back(c - '0');
        }else{
            divisorV.push_back(c - '0');
        }
    }
    hitDEC = false;



    // CONVERT QUOTIENT VECTOR INTO STRING

    if(quotientV.empty()){
        quotientString = "00.";
    }else{
        quotientString.reserve(quotientV.size() * 3);
        for(int i : quotientV){
            quotientString += std::to_string(i);
        }
        quotientString += '.';
    }

    if(quotientDEC.empty()){
        quotientString += "00";
    }else{
        quotientString.reserve(quotientDEC.size() + quotientString.size());
        for(int i : quotientDEC){
            quotientString += std::to_string(i);
        }
    }

    // TESTING

    std::cout << std::endl << "DIVIDEND: ";

    if(dividendV.empty()){
        std::cout << "00";
    }else{
        for(int i : dividendV)
            std::cout << i;
    }
    std::cout << '.';
    if(dividendDEC.empty()){
        std::cout << "00";
    }else if(dividendDEC.size() == 1){
        std::cout << dividendDEC[0] << "0";
    }else{
        for(int i : dividendDEC)
            std::cout << i;
    }

    std::cout << std::endl << "--------";

    std::cout << std::endl << "DIVISOR: ";

    if(divisorV.empty()){
        std::cout << "00";
    }else{
        for(int i : divisorV)
            std::cout << i;
    }
    std::cout << '.';
    if(divisorDEC.empty()){
        std::cout << "00";
    }else if(divisorDEC.size() == 1){
        std::cout << divisorDEC[0] << "0";
    }else{
        for(int i : divisorDEC)
            std::cout << i;
    }

    std::cout << std::endl << "--------";

    std::cout << std::endl << "QUOTIENT: ";



    // Check if dividend is zero
    bool dividendIsZero = true;
    bool divisorIsZero = true;

    for(int i : dividendV){
        if(i != 0){
            dividendIsZero = false;
        }
    }
    for(int i : dividendDEC){
        if(i != 0){
            dividendIsZero = false;
        }
    }

    if (dividendIsZero) {
        quotientString = "00.00";
    }

    // Check if divisor is zero
    
    for(int i : divisorV){
        if(i != 0){
            divisorIsZero = false;
        }
    }
    for(int i : divisorDEC){
        if(i != 0){
            divisorIsZero = false;
        }
    }

    if (divisorIsZero) {
        quotientString = "Undefined";
    }

    std::cout << quotientString;

    std::cout << std::endl << std:: endl;

    return 0;
}
