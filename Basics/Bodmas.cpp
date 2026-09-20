/*
TOPIC: BODMAS / Operator Precedence in C++
  int x = 2 / 3 * 6; -> answer 0 (12 nahi)

YAAD RAKHO: * / % ki priority same hai -> LEFT se RIGHT chalte hain. Aur int/int decimal kaat deta hai.

LOGIC (short notes):
  - C++ me maths wala BODMAS nahi chalta. / aur * barabar priority.
  - Left se: 2 / 3 = 0 (int division), phir 0 * 6 = 0.
  - Agar 2 * 6 / 3 likhte to 12 / 3 = 4 aata.
  - Doubt ho to brackets laga do.
*/
#include <iostream>
using namespace std;
int main(){
    int x = 2 / 3 * 6; // (2/3)*6 = 0*6 = 0
    cout<<x;
}
