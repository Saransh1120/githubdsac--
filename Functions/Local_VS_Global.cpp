/*
TOPIC: Local vs Global Variable (same naam)

YAAD RAKHO: main me local x hai to main ka x = LOCAL. change() GLOBAL x badalta hai, local pe asar nahi.

LOGIC (short notes):
  - Global x = 10, main me local x = 80.
  - change() ke andar koi local x nahi, to wo global x = 45 karta hai.
  - main me cout<<x -> local x -> dono baar 80.
  - Global dekhna ho to ::x (AccessingAShadowedGlobalVariable.cpp).
*/
#include<iostream>
using namespace std;
int x = 10; // Global Variable
void change(){
    x = 45; // global change hua
}
int main(){
    int x = 80; // local
    cout<<x<<endl; // 80
    change();
    cout<<x<<endl; // 80 (local same)
}
