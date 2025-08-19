#include <iostream>

using namespace std; 
/*

I think there will be at least 3 vector arrays, possibly 4 depending on how I want to handle "Carry over"

  Carry over    :[ ]
  Top Vector    :[ , ,]
  Bottom Vector :[ , ,]
  Product       :[ , ,]

  Each vector contains the individual digits of each number seperately so as to calculate much larger numbers
  
  each step multiplies top and bottom to get product, the product moves to top and the bottom goes down by one

For the carry over function it will be something like this:
if(carryover exists) {
  product[#] = product[#] + carryover;    will have to find a way to specify which item in product vector.
  carryover = NULL;

Top[0] * Bot[0]
Top[0] * Bot[1]
Top[1] * Bot[0]
Top[1] * Bot[1]

}
  
*/
int main {

return 0;
}
