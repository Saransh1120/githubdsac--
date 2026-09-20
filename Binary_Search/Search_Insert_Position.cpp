/*
QUESTION: Search Insert Position (LeetCode 35)
  Sorted array me target ka index do. Nahi hai to wo index do jahan
  daalne pe array sorted rahe.
  Example: {1,3,5,6}, target = 5 -> 2
           {1,3,5,6}, target = 2 -> 1
           {1,3,5,6}, target = 7 -> 4

YAAD RAKHO: normal binary search; nahi mila to "lo" hi insert position hai.

LOGIC (short notes):
  - Loop khatam hone pe lo > hi, aur lo pehla index hai jiska element
    target se bada hai -> wahi insert karne ki jagah.
  - Target sabse bada ho to lo = n (end me).

TIME: O(log n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n-1;
        while(lo <= hi){ // O(logn)
            int mid = (lo+hi)/2;
            if(arr[mid] > target) hi = mid - 1;
            else if(arr[mid] < target) lo = mid + 1;
            else return mid;
        }
        return lo; // insert position
    }
};
