#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

int factInput;
string toConvert;
vector<int> TopV, BotV, ProdV;

cout << "Please provide a number [1 < N < 100] : " ;
cin >> factInput;
toConvert = to_string(factInput);

for (char c : toConvert) { 
    TopV.push_back(c - '0');
}

for (int items : TopV) {
    cout << items << " ";
}


return 0;
}
