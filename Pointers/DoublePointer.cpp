/*
TOPIC: Double Pointer (pointer to pointer)

YAAD RAKHO: int** p2 = &p1 -> p2 me p1 ka address. Chain: p2 -> p1 -> x.

LOGIC (short notes):
  - &x aur p1 same print honge (p1 me x ka address hai).
  - &p1 aur p2 same print honge (p2 me p1 ka address hai).
  - Pointer bhi ek variable hai, uska bhi apna address hota hai.
*/
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p1 = &x;   // x ka address
    int** p2 = &p1; // p1 ka address
    cout<<&x<<endl;
    cout<<p1<<endl;  // same as &x

    cout<<&p1<<endl;
    cout<<p2<<endl;  // same as &p1
}
