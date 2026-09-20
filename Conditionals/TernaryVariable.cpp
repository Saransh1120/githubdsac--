/*
TOPIC: Ternary + Post Increment (tricky output)
  x = 6 -> y = ?

YAAD RAKHO: x++ condition me purani value (6) se compare hota hai, par uske baad x = 7 ho jaata hai.

LOGIC (dry run):
  - x++ > 12 -> 6 > 12 -> false. Ab x = 7.
  - false -> x*4 = 7*4 = 28.
  - y = 28 (24 nahi!).
*/
#include<iostream>
using namespace std;
int main(){
    int x = 6;
    int y = (x++ > 12) ? x-4 : x*4; // 6 > 12 false, x = 7 -> 28
    cout<<y; // 28
}
