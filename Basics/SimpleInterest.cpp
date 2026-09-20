/*
QUESTION: Simple Interest
  Principal, Rate, Time lo aur SI print karo.
  Example: p = 1000, r = 5, t = 2 -> 100

YAAD RAKHO: SI = (P * R * T) / 100, float lo taaki decimal na kate.

LOGIC (short notes):
  - float isliye kyunki rate/time decimal ho sakte hain (5.5%).
  - int lete to /100 pe decimal kat jaata.
*/
#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter Principle: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    float si = (p*r*t)/100; // formula
    cout<<"Simple interest is: "<<si;
}
