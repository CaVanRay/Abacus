#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int factInput = 536;
    string toConvert;
    vector<int> TopV, BotV, ProdV;

    // Convert number into digits
    toConvert = to_string(factInput);
    for (char c : toConvert) { 
        TopV.insert(TopV.begin(),(c - '0'));
    }
    
    BotV = TopV;
    int tempMult, carry = 0;

        for (size_t i = 0; i < TopV.size(); i++) {
            int proLocation = i;
            
            for (size_t j = 0; j < BotV.size(); j++) {
                
                cout << "TopV[" << i << "] = " << TopV[i] << endl;
                cout << "BotV[" << j << "] = " << BotV[j] << endl << endl;
                
                ProdV.resize( TopV.size() + BotV.size() + 1);
                
                tempMult = TopV[i] * BotV[j];
                
                while(tempMult > 9){
                    
                    tempMult = tempMult - 10;
                    carry = carry + 1;
                }
                
                ProdV[proLocation] = ProdV[proLocation] + (tempMult);
                ProdV[proLocation + 1] = ProdV[proLocation + 1] + carry;
                carry = 0;
                
            proLocation++;
            }
        }

    cout << "Product = ";
    for (size_t k = (ProdV.size()); k > 0; k--){
        cout << ProdV[k];
    } 
    return 0;
}
