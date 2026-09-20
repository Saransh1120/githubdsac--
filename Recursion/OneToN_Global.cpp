/*
QUESTION: Print 1 to n using Recursion (method 3 - global variable)
  Example: n = 5 -> 1 2 3 4 5

YAAD RAKHO: n ko global bana do, sirf x parameter me: print(x) -> print(x+1).

METHOD: n ko global variable bana do, taaki har baar parameter me
        bhejna na pade. Sirf x parameter me jaata hai.
  (Method 1 -> OneToN.cpp, Method 2 -> OneToN_2Parameters.cpp)

LOGIC (short notes):
  - Global variable main() ke bahar declare hota hai, aur saare
    functions use dekh sakte hain.
  - print(1) se start, x print karo, phir print(x+1).
  - BASE CASE: x > n -> ruk jao.
  - Global variable by default 0 hota hai (local me garbage hota hai).

TIME: O(n)    SPACE: O(n) stack
*/
#include<iostream>
using namespace std;
int n; // global variable
void print(int x){
    if(x>n) return; // base case
    cout<<x<<" "; // work
    print(x+1); // call
}
int main(){
    cin>>n; // global n me input
    print(1);
}
