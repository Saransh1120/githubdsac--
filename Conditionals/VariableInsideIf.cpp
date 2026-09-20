/*
TOPIC: Variable / Value directly inside if (tricky outputs)

YAAD RAKHO: if(value) -> 0 = false, koi bhi NON-ZERO (negative, decimal, char) = true.

CASES (sir ne 6 cases dikhaye - sab ka answer):
  1. x = -18 ya x = 0.004 -> non-zero -> true -> "Anjali"
  2. if(a=0) -> ye compare nahi, ASSIGN hai. a = 0 -> false -> "Anand"
  3. if('w') -> 'w' ka ASCII 119 -> non-zero -> "Darshti"
  4. x = 4, if(x++) -> 4 check hua (true), phir x = 5 -> print 5
  5. x = 4, y = 6, if(x++ || y++) -> x++ = 4 true, to || ka doosra
     part check hi nahi hota (short circuit). y++ nahi chala.
     -> print x = 5, y = 6 -> "56"
  6. (use ho raha hai) x = 0, if(x++) -> 0 check -> false -> "Shital"
     (x baad me 1 ho gaya, par condition 0 pe check hui)

LOGIC (short notes):
  - Short circuit: || me pehla true -> baaki skip. && me pehla false -> baaki skip.
*/
#include<iostream>
using namespace std;
int main(){
    // // int x = -18;
    // float x = 0.004;
    // if(x) cout<<"Anjali";
    // else cout<<"Nitin";

    // int a = 0;
    // if(a=0) cout<<"Jitendra";
    // else cout<<"Anand";

    // if('w') cout<<"Darshti";
    // else cout<<"Rishu";

    // int x = 4;
    // if(x++) cout<<x;
    // else cout<<"Prem";

    // int x = 4, y = 6;
    // if(x++ || y++) cout<<x<<y;
    // else cout<<"Ayush";

    int x = 0;
    if(x++) cout<<"Aniket"; // 0 -> false
    else cout<<"Shital";
}
