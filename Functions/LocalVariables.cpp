/*
TOPIC: Local Variables

YAAD RAKHO: main() ka local variable doosre function me nahi dikhta. Chahiye to parameter me bhejo.

LOGIC (short notes):
  - x main() ke andar bana -> sirf main() ka.
  - fun() me cout<<x; -> ERROR (x yahan exist nahi karta).
  - Fix: void fun(int x) aur fun(x) call.
*/
#include<iostream>
using namespace std;
void fun(){
    // cout<<x; // error
}
int main(){
    int x = 10; // local to main
    fun();
}
