/*
QUESTION: Binary Search (LeetCode 704)
  Sorted array me target ka index return karo, nahi mila to -1.
  Example: arr = {-1,0,3,5,9,12}, target = 9 -> 4

YAAD RAKHO: lo = 0, hi = n-1, jab tak lo <= hi: mid bada -> hi = mid-1, mid chhota -> lo = mid+1, equal -> mid.

METHODS:
  - Method 1: Linear search -> O(n)
  - Method 2 (is file me): Binary Search (while loop) -> O(log n)
  - Method 3 (Recursion/BinarySearch.cpp): recursion wala version.

LOGIC (short notes):
  - Array sorted hai, isliye mid dekh ke aadha part hata sakte hain.
  - arr[mid] > target -> target left me -> hi = mid - 1
  - arr[mid] < target -> target right me -> lo = mid + 1
  - lo > hi ho gaya -> target nahi hai -> -1
  - Overflow se bachne ke liye mid = lo + (hi-lo)/2 better hai.

TIME: O(log n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n-1;
        while(lo <= hi){ // O(logn)
            int mid = (lo+hi)/2;
            if(arr[mid] > target) hi = mid - 1;      // left jao
            else if(arr[mid] < target) lo = mid + 1; // right jao
            else return mid; // mil gaya
        }
        return -1;
    }
};
