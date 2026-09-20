/*
QUESTION: nCr (Combinations) using Function
  Example: n = 5, r = 2 -> 10

YAAD RAKHO: nCr = n! / (r! * (n-r)!). Factorial ka function banao aur 3 baar call karo.

LOGIC (short notes):
  - Same kaam (factorial) baar baar chahiye tha -> function bana diya.
    Yahi function ka fayda hai: code dobara nahi likhna padta.
  - fact(x): 1 se x tak multiply.
  - Function ke andar variable ka naam function jaisa (fact) rakha hai,
    chalta hai par confusing hai.

NOTE: int me 12! tak hi sahi aata hai. n bada (13+) ho to galat answer
      aayega. Better tarika: nCr = nC(r-1) * (n-r+1) / r loop se.
*/
#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    int ncr = fact(n) / (fact(r)*fact(n-r));
    cout<<ncr<<endl;

}
