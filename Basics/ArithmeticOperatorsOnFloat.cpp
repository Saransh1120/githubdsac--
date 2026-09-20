/*
TOPIC: Arithmetic Operators on float
  x = 5, y = 2 (float) -> 7, 3, 10, 2.5

YAAD RAKHO: float / float = decimal answer -> 5/2 = 2.5.

LOGIC (short notes):
  - float me decimal part bacha rehta hai.
  - Compare karo ArithmeticOperators.cpp se jahan int me 5/2 = 2 aaya tha.
  - cout 7.0 ko sirf 7 print karta hai (extra zero nahi dikhata).
*/
#include<iostream>
using namespace std;
int main() {
    float x = 5;
    float y = 2;
    cout<<x+y<<endl; // 7
    cout<<x-y<<endl; // 3
    cout<<x*y<<endl; // 10
    cout<<x/y<<endl; // 2.5
}
