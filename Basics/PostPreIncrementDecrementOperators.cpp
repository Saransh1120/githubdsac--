/*
TOPIC: Increment / Decrement Operators (x++ ++x x-- --x)

YAAD RAKHO: ++x / x++ = x + 1;  --x / x-- = x - 1. Akele line me likho to dono same kaam karte hain.

LOGIC (short notes):
  - --x; -> x = x - 1 -> 10 se 9.
  - ++x; -> x = x + 1 (comment wala part).
  - Jab ye kisi expression ke andar (cout ya y = ...) hon, tab pre aur
    post me farak padta hai -> PostVsPre.cpp dekho.
*/
#include <iostream>
using namespace std;
int main(){
    // x++ ++x x-- --x

    int x = 10;
    cout<<x<<endl; // 10
    --x; // x = x - 1
    cout<<x<<endl; // 9

    // int x = 10;
    // cout<<x<<endl;
    // ++x; // x = x + 1
    // cout<<x<<endl;
}
