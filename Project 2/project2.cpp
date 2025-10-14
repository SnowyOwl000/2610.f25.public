#include <iostream>
#include <cstdint>

using namespace std;

void approximate(double x,uint64_t &num,uint64_t &den) {

  cout << "Calling approximate, x is " << x << endl;

// procedure Approximate(x, &num, &den)
//▷ num and den are reference parameters

// nLow ← 0
// dLow ← 1
// nLow / dLow is low end of range
/*
o
3:
nhgh
4:
nhgh ← 1
▷ d
= ∞ is high end of range
hgh
5:
dhgh ← 0
6:
7:
8:
9:
10:
11:
12:
13:
14:
15:
16:
17:
18:
▷ Check inside loop for termination
▷ nm
is between endpoints. . .
den
▷ . . .and is in simplest form
while tre do
nm ← no + nhgh
den ← do + dhgh
if  < nm
then
den
nhgh ← nm
dhgh ← den
else
no ← nm
do ← den
end if
▷  is below the mediant
▷ Move high endpoint down to mediant
▷  is above the mediant. . . or equal
▷ Move low endpoint up to mediant
▷ den is too large to continue
if den > 1 000 000 000 then
break
end if

if  − nm
≤ 10−8 then
den
break
21:
end if
22:
end while
23: end procedure
*/
}


void egyptian(uint64_t num,uint64_t den) {

  cout << "Calling Egyptian, num is " << num << "   den is " << den << endl;

/*
procedure Egyptian(num, den)
2:
m ← ⌊nm/ den⌋
3:
4:p ← nm − m · q
q ← den
5:
6:
7:Output m
while p ̸= 0 do
n ← ⌈q/ p⌉
▷ m is the integer part
▷ 0 ≤ p/ q < 1 is now a proper fraction
▷ Loop until entire fraction accounted for
▷ See discussion below
▷ Display the next part of the fraction
▷ Prepare for next iteration
8:
Output “+ 1/” n
9:
p/ q ← (np − q)/ (qn)
10:
end while
11: end procedure
*/
}

int main(int argc,char *argv[]) {
  double
    x;
  uint64_t
    num,
    den;
    
//  for (int i=0;i<argc;i++)
//    cout << i << ": [" << argv[i] << ']' << endl;

  // make sure there is a value in argv[1]
  if (argc != 2) {
    cout << "error message";
    return 1;
  }
  
  // convert value from text to numeric format
  x = strtod(argv[1],nullptr);

  // call the approximate function to convert x to a fraction
  approximate(x,num,den);
  
  // call the egyptian function to display the fraction as an Egyptian fraction
  egyptian(num,den);
  
  return 0;
}

