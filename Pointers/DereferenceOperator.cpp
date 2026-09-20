/*
TOPIC: Dereference Operator (*)

YAAD RAKHO: ptr = address, *ptr = us address pe rakhi VALUE. *ptr change = x change.

LOGIC (short notes):
  - ptr = &x -> ptr x ko point karta hai.
  - *ptr += 8 -> x += 8 -> x = 15.
  - Declaration me * ka matlab "pointer hai" (int* ptr),
    baaki jagah * ka matlab "value nikaalo" (dereference).
*/
#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    *ptr += 8; // x += 8
    cout<<x<<endl; // 15
}
