/*
QUESTION: Profit or Loss
  Cost price aur selling price lo.
  Example: cp = 100, sp = 120 -> Profit is 20
           cp = 100, sp = 90  -> Loss is 10

YAAD RAKHO: sp > cp -> profit (sp-cp), sp < cp -> loss (cp-sp), warna no profit no loss.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (use ho raha hai): if - else if - else (ek hi branch chalegi).
  - Method 2 (comment me): teen alag if (sp > cp, sp < cp, sp == cp).
    Chalta hai, par har if check hota hai - else if better hai.
*/
#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price: ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp > cp) cout<<"Profit is "<<sp-cp;
    else if(sp < cp) cout<<"Loss is "<<cp-sp;
    else cout<<"No Profit, No Loss";
    // if(sp > cp) cout<<"Profit";
    // if(sp < cp) cout<<"Loss";
    // if(sp == cp) cout<<"No Profit, No Loss";
}
