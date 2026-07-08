#include "Headers.h"


int main(){

    /*
    although this is being written as a standalone program for testing
    eventually this will just be another function
    */

    string dividendString;
    string divisorString;
    std::vector<int> dividendVector;
    std::vector<int> divisorVector;
    std::vector<int> quotientVector;

    std::cout << endl;
    dividendString = getBigNumber("Please input number to divide: ");
    std::cout << endl;
    divisorString = getBigNumber("Please input number to divide by: ");

    return 0;
}
