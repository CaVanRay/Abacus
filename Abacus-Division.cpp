#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    // Division is more complicated, it brings in decimals and fractional numbers
    // this just made me realize people could try multiplying decimals/fractionals
    
    int factInput = 25;
    string toConvert;
    vector<int> TopV, BotV, ProdV;

    // String/Digit Converter
    toConvert = to_string(factInput);
    for (char c : toConvert) { 
        TopV.insert(TopV.begin(),(c - '0'));
    }
    
    int tempMult, carry = 0;

    for (int y = (factInput - 1); y >= 1; y--){

        BotV.clear();
        toConvert = to_string(y);
        for (char c : toConvert) {
            BotV.insert(BotV.begin(), (c - '0'));
        }

        ProdV.clear();
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

    }
    cout << "Product = ";
    for (int k = (TopV.size() - 1); k >= 0; k--){
        cout << TopV[k];
    } 
    return 0;
}
