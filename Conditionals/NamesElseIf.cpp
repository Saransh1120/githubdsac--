/*
QUESTION: Names by divisibility (FizzBuzz jaisa)
  n 3 aur 5 dono se divisible -> Anuj
  sirf 3 se  -> Sakshi
  sirf 5 se  -> Kartikey
  kisi se nahi -> Hitesh
  Example: 15 -> Anuj, 9 -> Sakshi, 10 -> Kartikey, 7 -> Hitesh

YAAD RAKHO: else-if me sabse STRICT condition (dono se divisible) sabse PEHLE likho.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (use ho raha hai - else if ladder):
      pehle "3 aur 5 dono" check, phir 3, phir 5, else.
      Order zaroori hai: agar n%3 pehle check karte to 15 pe "Sakshi"
      aa jaata.
  - Method 2 (comment me - alag alag if):
      har if me poori condition likho (&& aur != ke saath), taaki koi
      do if ek saath true na hon. Order matter nahi karta.

LOGIC (short notes):
  - "and" C++ me && jaisa hi hai.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Method 1: else if (strict condition pehle)
    if(n%5==0 and n%3==0) cout<<"Anuj";
    else if(n%3==0) cout<<"Sakshi";
    else if(n%5==0) cout<<"Kartikey";
    else cout<<"Hitesh";

    // Method 2: independent ifs
    // if(n%5!=0 && n%3!=0) cout<<"Hitesh";
    // if(n%5==0 && n%3!=0) cout<<"Kartikey";
    // if(n%5==0 && n%3==0) cout<<"Anuj";
    // if(n%3==0 && n%5!=0) cout<<"Sakshi";

}
