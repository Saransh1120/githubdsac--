/*
QUESTION: Print 1 to n using Recursion (method 1 - call pehle, work baad me)
  Example: n = 5 -> 1 2 3 4 5

YAAD RAKHO: pehle call, phir print -> wapas aate time print -> seedha order (1 se n).

METHODS (1 to n print karne ke 3 tarike - teeno files dekho):
  - Method 1 (is file me): print(n) me pehle print(n-1) call karo,
    PHIR n print karo.
  - Method 2 (OneToN_2Parameters.cpp): x aur n dono parameter me bhejo.
  - Method 3 (OneToN_Global.cpp): n ko global variable bana do.

LOGIC (short notes):
  - print(5) pehle print(4) ko call karta hai, wo print(3) ko ...
    print(0) pe base case aata hai.
  - Wapas aate time (jab calls return ho rahi hain) print hota hai:
    pehle 1, phir 2, ... phir 5.
  - Call ke BAAD ka kaam = "wapas aate time" hota hai.

TIME: O(n)    SPACE: O(n) stack
*/
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case
    print(n-1); // call
    cout<<n<<" "; // work (wapas aate time)
}
int main(){
    int n;
    cin>>n;
    print(n);
}
