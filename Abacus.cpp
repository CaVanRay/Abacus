#include <iostream>

using namespace std; 
/*

I think there will be at least 3 vector arrays, possibly 4 depending on how I want to handle "Carry over"

  Carry over          :[ ]
  Top Vector          :[ , ,]
  Bottom Vector       :[ , ,]
  Product Vector      :[ , ,]

  Each vector contains the individual digits of each number seperately so as to calculate much larger numbers
  
  each step multiplies top and bottom to get product, the product moves to top and the bottom goes down by one

For the carry over function it will be something like this:

while(# > 9){
# = # - 10;
carry = carry + 1
}

if(carry > 0) {
  product[#] = product[#] + carryover;    will have to find a way to specify which item in product vector.
  carry = 0
}
Simple outline of how this will work:

Product[0] = Top[0] * Bot[0] 
Product[1] = Carry + (Top[0] * Bot[1])
Product[0] = Product[0] + (Top[1] * Bot[0])
Product[1] = Product[1] + Carry + (Top[1] * Bot[1])

The logic works, I just need to expand it in a way that is self testing/expanding

This works, I just need to put it together.

The larger number will always be on top after each multiplication

Top[] = Product[]

then you measure both the top & bottom

TopSize = Top.size()
BotSize = Bot.size()

and you use these to run through the for loops again
NOTE: Product[] Placemnet matches Top[] at start and increments by one! this avoids adding 0's

Product[0] = Product[0] + Carry + (Top[0] * Bot[0]) 
Product[1] = Product[1] + Carry + (Top[0] * Bot[1])
Product[1] = Product[1] + Carry + (Top[1] * Bot[0])
Product[2] = Product[2] + Carry + (Top[1] * Bot[1])
Product[2] = Product[2] + Carry + (Top[2] * Bot[0])
Product[3] = Product[3] + carry + (Top[2] * Bot[1])


625
 25
 ---
  
*/
int main {

return 0;
}
