#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int factInput = 25;
    string toConvert;
    vector<int> TopV, BotV, ProdV;

    // String/Digit Converter
    toConvert = to_string(factInput);
    for (char c : toConvert) { 
        TopV.insert(TopV.begin(),(c - '0'));
    }
    
    int tempMult, carry = 0;

    for (int y = factInput; y >= 1; y--){

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
            ProdV[proLocation + 1] += carry;
            carry = 0;
                
            proLocation++;
            }
        }
    
        for (int x = ProdV.size(); x >= 0; x--){
            if(ProdV[x] == 0){
                ProdV.erase(ProdV.begin() + x);
            }else break;
        }
    TopV = ProdV; 
    ProdV.clear();

    }
    cout << "Product = ";
    for (int k = (TopV.size()); k >= 0; k--){
        cout << TopV[k];
    } 
    return 0;
}
