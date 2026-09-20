/*
QUESTION: Print n to 1 using Recursion
  Example: n = 5 -> 5 4 3 2 1

YAAD RAKHO: pehle print (work), phir call -> ulta order (n se 1).

LOGIC (short notes):
  - Pehle WORK (print n), phir CALL (print(n-1)).
  - Isliye bada number pehle print hota hai -> n se 1 tak.
  - BASE CASE: n == 0 -> ruk jao.
  - Compare karo OneToN.cpp se: wahan work aur call ka order ulta hai.

TIME: O(n)    SPACE: O(n) stack
*/
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case
    cout<<n<<" "; // work
    print(n-1); // call
}
int main(){
    int n;
    cin>>n;
    print(n);
}
