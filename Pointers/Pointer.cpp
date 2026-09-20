/*
TOPIC: Pointer basics

YAAD RAKHO: int* ptr = &a; -> ptr me a ka address. ptr == &a. &ptr = pointer ka apna address (alag).

LOGIC (short notes):
  - Pointer = aisa variable jo kisi doosre variable ka ADDRESS store karta hai.
  - int* -> int ka address rakhega.
  - &a aur ptr same print honge.
  - &ptr alag hoga, kyunki ptr khud bhi memory me kahin rakha hai.
  - Pointer ka size 8 bytes (64-bit system), chahe wo kisi bhi type ka ho.
*/
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;  // same as &a
    cout<<&ptr<<endl; // ptr ka apna address
}
