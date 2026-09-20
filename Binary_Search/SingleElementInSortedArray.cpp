/*
QUESTION: Single Element in a Sorted Array (LeetCode 540)
  Sorted array me har element 2 baar hai, sirf ek element 1 baar.
  Wo single element batao, O(log n) me.
  Example: {1,1,2,3,3,4,4,8,8} -> 2

YAAD RAKHO: mid ke pair (f, s) nikaalo. Pair ke LEFT me odd elements hain -> single left me (hi = f-1), warna right me (lo = s+1).

METHODS:
  - Method 1: Linear, pairs me check karo (i += 2) -> O(n)
  - Method 2: XOR saare elements ka -> O(n)
  - Method 3 (is file me): Binary Search -> O(log n)

LOGIC (short notes):
  - Edge cases pehle: n == 1, ya single pehle index pe, ya last index pe.
    (Isse mid-1 aur mid+1 kabhi bahar nahi jaayenge.)
  - arr[mid] dono neighbours se alag -> yahi single hai.
  - Warna mid ka jodi wala dhoondho:
      arr[mid] == arr[mid-1] -> pair = (mid-1, mid) -> f = mid-1, s = mid
      warna                 -> pair = (mid, mid+1) -> f = mid,   s = mid+1
  - f - lo = pair ke left me kitne elements.
      odd  -> kisi ka jodi toota hai -> single left me -> hi = f - 1
      even -> left side theek hai -> single right me -> lo = s + 1
  - Last "return 8875" kabhi nahi chalega.

TIME: O(log n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        // edge cases
        if(n==1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];
        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid]; // single
            int f = mid, s = mid; // f is first mid, s is second mid
            if(arr[mid] == arr[mid-1]) f = mid - 1; // jodi left me
            else s = mid + 1;                       // jodi right me
            if((f-lo) % 2 == 1) hi = f - 1; // f-lo is left side length (odd -> single left me)
            else lo = s + 1;                // even -> single right me
        }
        return 8875;
    }
};
