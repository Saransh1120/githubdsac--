/*
TOPIC: Modulus Operator (%) - remainder

YAAD RAKHO: a % b = remainder. Answer ka SIGN hamesha pehle number (a) jaisa hota hai.

LOGIC (short notes):
  - 25 % 0   -> ERROR (0 se divide nahi hota).
  - 45 % 241 -> 45 (chhota % bada = chhota khud).
  - 34 % -10 -> 4   (a = 34 positive -> answer positive)
  - -34 % 10 -> -4  (a = -34 negative -> answer negative)
  - % sirf integers pe chalta hai, float pe nahi.
  - Use: even/odd (n % 2), last digit (n % 10), divisible check.
*/
#include <iostream>
using namespace std;
int main(){
    // cout<<25%0; // error
    cout<<45%241<<endl; // 45
    cout<<34%(-10)<<endl; // 4
    cout<<(-34)%10<<endl; // -4
}
