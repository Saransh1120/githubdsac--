/*
QUESTION: Unique Paths (LeetCode 62)
  m x n grid me top-left se bottom-right jaana hai. Sirf right ya down
  chal sakte ho. Kitne alag paths hain?
  Example: m = 3, n = 7 -> 28
           m = 3, n = 2 -> 3

YAAD RAKHO: paths(m, n) = paths(m, n-1) + paths(m-1, n); m == 1 ya n == 1 pe 1.

METHOD: Recursion (PrintPaths.cpp jaisa, bas print ki jagah count)

LOGIC (short notes):
  - Right jaao -> uniquePaths(m, n-1)
  - Down jaao  -> uniquePaths(m-1, n)
  - Total = dono ka sum.
  - BASE CASE: m == 1 ya n == 1 -> sirf ek hi seedha raasta bacha hai
    (ek row me sirf right, ek column me sirf down) -> return 1.
  - "or" C++ me || jaisa hi hai.

TIME: O(2^(m+n))
NOTE: LeetCode pe bade m, n (jaise 23 x 12) pe TLE aa sakta hai.
      DP ya combination formula C(m+n-2, m-1) se fast hoga - aage padhoge.
      Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 or n==1) return 1; // ek hi raasta
        return uniquePaths(m,n-1) + uniquePaths(m-1,n); // right + down
    }
};
