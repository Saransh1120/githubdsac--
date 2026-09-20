/*
QUESTION: Factorial using Recursion
  n! nikaalo. n! = n * (n-1) * (n-2) * ... * 1
  Example: 5! = 120

YAAD RAKHO: fact(n) = n * fact(n-1), base case fact(0) = fact(1) = 1.

METHODS:
  - Method 1 (Loops folder me): for loop se multiply.
  - Method 2 (is file me): Recursion se.

LOGIC (short notes):
  - fact(n) = n * fact(n-1)
  - BASE CASE: fact(0) = fact(1) = 1
  - fact(4) = 4 * fact(3) = 4 * 3 * fact(2) = 4 * 3 * 2 * fact(1) = 24

TIME: O(n)    SPACE: O(n) stack
NOTE: int me 12! tak hi sahi aata hai, uske baad overflow. long long lo.
*/
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1; // base case
    return n * fact(n-1);      // n * (n-1)!
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}
