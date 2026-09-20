/*
QUESTION: Climbing Stairs (LeetCode 70)
  n seedhiyan hain. Ek baar me 1 ya 2 seedhi chadh sakte ho.
  Kitne alag tarike se top tak pahunch sakte ho?
  Example: n = 3 -> (1,1,1), (1,2), (2,1) -> 3 ways

YAAD RAKHO: ways(n) = ways(n-1) + ways(n-2), n <= 2 pe return n. (Fibonacci hi hai.)

METHOD: Recursion (Fibonacci jaisa pattern)

LOGIC (short notes):
  - n pe pahunchne ke liye last step ya to n-1 se aaya (1 seedhi)
    ya n-2 se aaya (2 seedhi).
  - ways(n) = ways(n-1) + ways(n-2)
  - BASE CASE: n = 1 -> 1 way, n = 2 -> 2 ways. Isliye n<=2 pe return n.
  - Ye bilkul Fibonacci hai: 1, 2, 3, 5, 8, 13 ...

TIME: O(2^n) - same calls baar baar hote hain.  SPACE: O(n) stack
NOTE: LeetCode pe bade n (jaise 45) pe TLE aa sakta hai. Aage DP
      (memoization) padhoge to O(n) ho jaayega.
      Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n; // 1 -> 1 way, 2 -> 2 ways
        return climbStairs(n-1) + climbStairs(n-2); // last step 1 ya 2
    }
};
