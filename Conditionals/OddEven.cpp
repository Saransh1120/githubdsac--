/*
QUESTION: Odd or Even
  Example: 4 -> Even, 7 -> Odd

YAAD RAKHO: n % 2 == 0 -> Even, warna Odd (else use karo).

METHODS:
  - Method 1 (use ho raha hai): do alag if -> n%2 == 0 aur n%2 == 1.
  - Method 2 (comment me): if-else.

NOTE (dhyan dena):
  - Negative odd number (jaise -7) pe -7 % 2 = -1 aata hai, 1 nahi.
    Method 1 me dono if false -> kuch print nahi hoga!
  - Method 2 (if n%2 == 0 ... else ...) hamesha sahi hai. Wahi use karo.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%2 == 0) cout<<"Even";
    if(n%2 == 1) cout<<"Odd"; // -7 pe -1 aata hai -> ye chalega nahi
    // if(n%2 == 1) cout<<"Odd Number";
    // else cout<<"Even Number";
}
