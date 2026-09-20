/*
TOPIC: Pointer Syntax Issue (ek line me kai pointers)

YAAD RAKHO: int* p1, p2; -> sirf p1 pointer hai, p2 normal int! Dono pointer chahiye to int *p1, *p2; ya alag lines.

LOGIC (short notes):
  - * type ke saath nahi, variable ke saath judta hai.
  - Isliye sir ne p1 aur p2 alag alag lines me declare kiye.
*/
#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 2, z = 9;
    int* p1 = &x;
    int* p2 = &y; // alag line -> dono pointer
}
