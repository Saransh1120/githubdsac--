/*
QUESTION: Sum of 1 to n using Recursion
  Example: n = 5 -> 1+2+3+4+5 = 15

YAAD RAKHO: sum(n) = n + sum(n-1), sum(0) = 0.

METHODS:
  - Method 1: formula n*(n+1)/2 -> O(1)
  - Method 2: loop se jodo -> O(n)
  - Method 3 (is file me): Recursion

LOGIC (short notes):
  - sum(n) = n + sum(n-1)
  - BASE CASE: sum(0) = 0
  - sum(3) = 3 + sum(2) = 3 + 2 + sum(1) = 3 + 2 + 1 + sum(0) = 6

TIME: O(n)    SPACE: O(n) stack
*/
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;     // base case
    return n + sum(n-1);   // n + (1 se n-1 tak ka sum)
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}
