/*
QUESTION: Find First and Last Position of Element in Sorted Array (LeetCode 34)
  Sorted array me target pehli baar kahan aaya aur last baar kahan.
  Nahi hai to [-1,-1].
  Example: arr = {5,7,7,8,8,10}, target = 8 -> [3,4]

YAAD RAKHO: 2 binary search. Mil jaaye to answer save karo aur RUKO MAT: first ke liye left (hi = mid-1), last ke liye right (lo = mid+1).

METHODS:
  - Method 1: Linear search, pehla aur aakhri index -> O(n)
  - Method 2 (is file me): do baar Binary Search -> O(log n)

LOGIC (short notes):
  - First occurrence: normal binary search, par arr[mid] == target pe
    ans[0] = mid save karo aur hi = mid - 1 -> aur left me dhoondo
    (shayad pehle bhi ho).
  - Last occurrence: same, par lo = mid + 1 -> aur right me dhoondo.
  - ans pehle se {-1,-1} hai, to nahi mila to wahi return.

TIME: O(log n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> ans(2,-1);
        // First Occurence
        int lo = 0, hi = n-1;
        while(lo <= hi){ // O(logn)
            int mid = (lo+hi)/2;
            if(arr[mid] > target) hi = mid - 1;
            else if(arr[mid] < target) lo = mid + 1;
            else{ // arr[mid] == target
                ans[0] = mid;
                hi = mid - 1; // aur left me dekho
            }
        }
        // Last Occurence
        lo = 0;
        hi = n-1;
        while(lo <= hi){ // O(logn)
            int mid = (lo+hi)/2;
            if(arr[mid] > target) hi = mid - 1;
            else if(arr[mid] < target) lo = mid + 1;
            else{ // arr[mid] == target
                ans[1] = mid;
                lo = mid + 1; // aur right me dekho
            }
        }
        return ans;
    }
};
