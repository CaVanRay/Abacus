#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {


    // Today is 9/16/25 - Tomorrow this is my main focus

    
    //Next up I need to find a way to handle decimals
    //I think I may be able to set up some way to ignore the decimal element
    //Either that or just have a designated decimal location and move the numbers around it.
    
    long double multiInput1;
    long double multiInput2;
    int tempMult, carry = 0;
    string toConvert;
    vector<long double> TopV, BotV, ProdV;

    cout << "first multiplyer : " ;
    cin >> multiInput1;
    cout << endl << "second multiplyer : ";
    cin >> multiInput2;
    
    // String/Digit Converter
    toConvert = to_string(multiInput1);
    for (char c : toConvert) { 
    TopV.insert(TopV.begin(),(c - '0'));
    }
    
    toConvert = to_string(multiInput2);
    for (char c : toConvert) {
    BotV.insert(BotV.begin(), (c - '0'));
    }

    ProdV.resize(TopV.size() + BotV.size() + 1);
        
    for (size_t i = 0; i < TopV.size(); i++) {
        int proLocation = i;
            
        for (size_t j = 0; j < BotV.size(); j++) {               
            tempMult = (TopV[i] * BotV[j]);
                
            while(tempMult > 9){
                    
                tempMult = tempMult - 10;
                carry = carry + 1;
            }
                
        ProdV[proLocation] += tempMult;
            while(ProdV[proLocation] > 9){
                ProdV[proLocation] -= 10;
                carry++;
            }
        ProdV[proLocation + 1] += carry;
            while(ProdV[proLocation + 1] > 9){
                ProdV[proLocation + 1] -= 10;
                ProdV[proLocation + 2] += 1;
            }                
        carry = 0;
                
        proLocation++;
        }
    }
    // I'm removing the leading zeros from the product
    int newSize = ProdV.size();
    while (newSize > 1 && ProdV[newSize - 1] == 0) {
        newSize--;
    }
    ProdV.resize(newSize);
        
TopV = ProdV; 
ProdV.clear();

    
cout << endl << "Product = ";
for (int k = (TopV.size() - 1); k >= 0; k--){
    cout << TopV[k];
}

}
