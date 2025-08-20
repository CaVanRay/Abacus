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

at some point you have to test the sizes of Top[] & Bot[], and possibly Pro[].
and I feel like there may have to be some resizing at some point, but I havent had a chance to work through it from start to finish

Top.size() + Bot.size() + 1 = Pro[]'s size
Even if it's a little bigger than the number I need to hold since: 00100 == 100, adding leading 0's changes nothing and I can remove that in the output stage.

I think I have everything I need to do this, I'm just lacking the willpower at this point.

I might be headed for stormy weather, :-/

OOO:
      1  - int comes in
      2  - set the top, bot, & size
      3  - For loop on Size 
      4  - set prolocation
      5  - For loop on Top
      6  - For loop on Bot
      7  - Prolocation ++
      8  - Close Bot For
      9  - Close Top For
      10 - Bot --
      11 - Size --
      12 - Top = Pro
      13 - Close Size For
      14 - Output final Pro
  
*/
int main {

return 0;
}
