/*
TOPIC: Arithmetic Operators on int (+ - * /)
  x = 5, y = 2 -> 7, 3, 10, 2

YAAD RAKHO: int / int = int (decimal part kat jaata hai). 5/2 = 2, 2.5 nahi.

LOGIC (short notes):
  - + - * normal kaam karte hain.
  - / me dono int hon to answer bhi int -> 5/2 = 2 (round nahi hota, cut hota hai).
  - Decimal chahiye to ek ko float/double banao -> ArithmeticOperatorsOnFloat.cpp, IntByInt.cpp
*/
#include<iostream>
using namespace std;
int main() {
    int x = 5;
    int y = 2;
    cout<<x+y<<endl; // 7
    cout<<x-y<<endl; // 3
    cout<<x*y<<endl; // 10
    cout<<x/y<<endl; // 2 (int division)
}
