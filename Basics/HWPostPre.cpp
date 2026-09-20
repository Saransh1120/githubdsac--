/*
HOMEWORK: Post vs Pre increment ek hi line me
  int x = 8; int y = x++ + ++x;  -> y = ?

YAAD RAKHO: x++ -> pehle USE phir badhao; ++x -> pehle BADHAO phir use.

LOGIC (short notes):
  - x++ -> value 8 use hui, phir x = 9.
  - ++x -> x = 10, value 10 use hui.
  - y = 8 + 10 = 18 (g++ pe yahi aata hai).
  - DHYAN: ek hi expression me same variable ko do baar change karna
    C++ me "undefined behaviour" hai - alag compiler alag answer de
    sakta hai. Exam/interview me concept samjhane ke liye theek hai,
    real code me aisa mat likho.
*/
#include <iostream>
using namespace std;
int main(){
    int     x  = 8; int y = x++ + ++x; // 8 + 10
    cout<<y<<endl; // 18
}
