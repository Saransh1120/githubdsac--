/*
QUESTION: Sqrt(x) (LeetCode 69)
  x ka square root (sirf integer part) return karo, bina sqrt() ke.
  Example: 8 -> 2 (2.82 ka integer part),  16 -> 4

YAAD RAKHO: 1 se n tak binary search on answer. mid*mid ki jagah mid > n/mid compare karo (overflow nahi hoga). Nahi mila to hi return.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me - Linear):
      i = 1 se chalo. i == x/i -> perfect square, i. i > x/i -> i-1.
      TIME: O(sqrt(n))
  - Method 2 (use ho raha hai - Binary Search):
      TIME: O(log n)

LOGIC (Method 2):
  - Answer 1 se n ke beech hai -> is range pe binary search.
  - mid > n/mid  (matlab mid*mid > n) -> mid bada hai -> hi = mid - 1
  - mid < n/mid  (mid*mid < n)        -> lo = mid + 1
  - equal -> perfect square -> mid.
  - mid * mid likhne se int overflow ho sakta hai (mid ~ 10^9), isliye
    n/mid se compare kiya.
  - Loop ke baad hi = sabse bada number jiska square <= n -> wahi answer.

NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int mySqrt(int n) { // O(logn)
        if(n==0) return 0;
        int lo = 1, hi = n;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(mid > n/mid) hi = mid - 1;      // mid*mid > n
            else if(mid < n/mid) lo = mid + 1; // mid*mid < n
            else return mid;                   // perfect square
        }
        return hi; // floor(sqrt(n))
    }

    // Method 1: Linear
    // int mySqrt(int x) { // TC = O(sqrt(n))
    //     for(int i=1;i<=x;i++){
    //         if(i == x/i) return i;
    //         if(i > x/i) return i-1;
    //     }
    //     return 0;
    // }
};
