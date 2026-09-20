/*
TOPIC: Address of a Variable (& operator)

YAAD RAKHO: &x = x ka memory address (hex me print hota hai, jaise 0x61fe1c).

LOGIC (short notes):
  - int 4 bytes leta hai, &x us ki PEHLI byte ka address deta hai.
  - Har run pe address alag aa sakta hai.
  - Address store karne ke liye pointer chahiye (Pointer.cpp).
*/
#include<iostream>
using namespace std;
int main(){
    int x = 7, y = 19;
    cout<<&x<<endl; // x ki first byte ka address
    cout<<&y<<endl;
}
