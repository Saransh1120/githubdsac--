/*
TOPIC: int / int vs decimal division
  5/2, 5/2.0, 5.0/2, 5.0/2.0

YAAD RAKHO: dono int -> answer int (2). Koi EK bhi decimal ho -> answer decimal (2.5).

LOGIC (short notes):
  - 5/2     -> 2   (dono int)
  - 5/2.0   -> 2.5 (2.0 double hai, to 5 bhi double ban jaata hai)
  - 5.0/2   -> 2.5
  - 5.0/2.0 -> 2.5
  - Isko implicit typecasting kehte hain: chhota type (int) bade type
    (double) me apne aap convert ho jaata hai.
*/
#include <iostream>
using namespace std;
int main(){
    cout<<5/2<<endl;     // 2
    cout<<5/2.0<<endl;   // 2.5
    cout<<5.0/2<<endl;   // 2.5
    cout<<5.0/2.0<<endl; // 2.5
}
