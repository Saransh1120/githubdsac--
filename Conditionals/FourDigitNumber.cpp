/*
QUESTION: Check 4 Digit Number
  Example: 4567 -> 4 Digit number,  999 -> not a 4 digit number

YAAD RAKHO: 1000 <= n <= 9999 -> && se dono conditions ek saath.

LOGIC (short notes):
  - Sabse chhota 4 digit = 1000, sabse bada = 9999.
  - C++ me 1000 <= n <= 9999 aise nahi likhte (galat chalega),
    n >= 1000 && n <= 9999 likhte hain.
  - Negative numbers (-4567) ko ye 4 digit nahi maanega.
  - Nested if wala tarika -> ThreeDigitNumber.cpp
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n >= 1000 && n <= 9999) cout<<"4 Digit number";
    else cout<<"not a 4 digit number";

}
