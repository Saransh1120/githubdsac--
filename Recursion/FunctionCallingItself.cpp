/*
TOPIC: Function Calling Itself (Recursion ki shuruaat)
  "Deeksha" ko n baar print karo, bina loop ke.

YAAD RAKHO: recursion = base case + kaam + chhote problem pe khud ko call. Base case nahi to stack overflow.

LOGIC (short notes):
  - Recursion = function jo khud ko hi call kare.
  - Har recursion me 3 cheezein:
      1. BASE CASE -> kab rukna hai (n == 0 pe return)
      2. WORK      -> kya kaam karna hai (print)
      3. CALL      -> chhote problem pe khud ko call (n-1)
  - Base case nahi hoga to function khud ko hamesha call karta rahega
    -> stack overflow / segmentation fault.
  - deeksha(3) -> print, deeksha(2) -> print, deeksha(1) -> print,
    deeksha(0) -> return. Total 3 baar print.
*/
#include<iostream>
using namespace std;
void deeksha(int n){
    if(n==0) return;      // base case
    cout<<"Deeksha"<<endl; // work
    deeksha(n-1);         // call (chhota problem)
}
int main(){
    deeksha(3);
}
