/*
QUESTION: Power a^b using Recursion (simple / linear method)
  Example: a = 2, b = 5 -> 32

YAAD RAKHO: power(a, b) = a * power(a, b-1), b == 0 pe 1.

METHODS:
  - Method 1 (Loops folder me): loop chala ke b baar multiply.
  - Method 2 (is file me): Recursion, a^b = a * a^(b-1)  -> O(b)
  - Method 3 (PowerLog.cpp): a^b = (a^(b/2))^2 -> O(log b), fast wala.

LOGIC (short notes):
  - power(a, b) = a * power(a, b-1)
  - BASE CASE: b == 0 -> 1 (kisi bhi number ki power 0 = 1)
  - power(2,3) = 2 * power(2,2) = 2 * 2 * power(2,1) = 2*2*2*1 = 8

TIME: O(b)    SPACE: O(b) stack
*/
#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1; // base case: a^0 = 1
    int ans = a * power(a,b-1);
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}
