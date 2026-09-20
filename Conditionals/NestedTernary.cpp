/*
TOPIC: Nested Ternary Operator
  x = 6 -> y = ?

YAAD RAKHO: condition ? (true wala) : (false wala). Nested me bahar wali condition pehle, phir andar wali.

LOGIC (dry run, x = 6):
  - x <= 23 ? -> haan -> pehla bracket: (x > 12) ? x-4 : x*4
  - x > 12 ?  -> nahi -> x*4 = 24
  - y = 24
  - Ye if-else jaisa hi hai:
      if(x <= 23){ if(x > 12) y = x-4; else y = x*4; }
      else       { if(x < 12) y = x/4; else y = x+4; }
*/
#include<iostream>
using namespace std;
int main(){
    int x = 6;
    int y = (x <= 23) ? ((x > 12) ? x-4 : x*4) : ((x < 12) ? x/4 : x+4);
    cout<<y; // 24
}
