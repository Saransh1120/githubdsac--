/*
QUESTION: Fibonacci Number (LeetCode 509)
  n-th Fibonacci number return karo.
  Series: 0, 1, 1, 2, 3, 5, 8, 13, 21 ...
  Example: n = 6 -> 8

YAAD RAKHO: fib(n) = fib(n-1) + fib(n-2), base case n <= 1 pe return n.

METHOD: Recursion (multiple calls wali recursion)

LOGIC (short notes):
  - fib(n) = fib(n-1) + fib(n-2)
  - BASE CASE: fib(0) = 0, fib(1) = 1 -> isliye n<=1 pe return n.
  - Har call 2 aur calls banati hai, isliye recursion tree banta hai.
  - Same values baar baar calculate hoti hain (jaise fib(3) kai baar).

TIME: O(2^n)    SPACE: O(n) stack
NOTE: DP (memoization) se ye O(n) ho jaata hai - aage padhoge.
      Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n; // fib(0)=0, fib(1)=1
        return fib(n-1) + fib(n-2);
    }
};
