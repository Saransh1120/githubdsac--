/*
TOPIC: Accessing a Shadowed Global Variable (:: operator)

YAAD RAKHO: same naam ka local aur global ho to x = LOCAL, ::x = GLOBAL.

LOGIC (short notes):
  - Global x = 8, main ke andar local x = 56.
  - Local variable global ko "shadow" (chhupa) kar deta hai.
  - :: = scope resolution operator -> ::x se global wala milta hai.
  - Output: 56, phir 8.
*/
#include<iostream>
using namespace std;
int x = 8; // global
int main(){
    int x = 56; // local (global ko chhupa diya)
    cout<<x<<endl;   // 56
    cout<<::x<<endl;                    
    
}h