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

    // Loop through indices instead of values
 //   for (int k = factInput; k > 0; k--) {
        for (size_t i = 0; i < TopV.size(); i++) {
            for (size_t j = 0; j < BotV.size(); j++) {
                cout << "TopV[" << i << "] = " << TopV[i] << endl;
                cout << "BotV[" << j << "] = " << BotV[j] << endl << endl;
            }
        }
  //  }

    return 0;
}
