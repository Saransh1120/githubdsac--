/*
QUESTION: Binary Search (LeetCode 704)
  Sorted array arr aur ek target diya hai. Target ka index return karo,
  agar nahi mila to -1.
  Example: arr = {-1,0,3,5,9,12}, target = 9  ->  4

YAAD RAKHO: binary(lo, hi): lo > hi -> -1. mid bada -> binary(lo, mid-1), chhota -> binary(mid+1, hi), equal -> mid.

METHODS:
  - Method 1 (Binary_Search folder me): while loop se (iterative).
  - Method 2 (is file me): Recursion se. lo aur hi parameters me bhejte hain.

LOGIC (short notes):
  - mid = (lo + hi) / 2
  - arr[mid] > target  -> answer left me hai  -> binary(lo, mid-1)
  - arr[mid] < target  -> answer right me hai -> binary(mid+1, hi)
  - arr[mid] == target -> mil gaya, return mid
  - BASE CASE: lo > hi -> search space khaali -> -1
  - Har call me search space aadha ho jaata hai.

TIME: O(log n)    SPACE: O(log n) (recursion ka call stack)

NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int binary(int lo, int hi, int target, vector<int>& arr) {
        if(lo > hi) return -1; // base case: nahi mila
        int mid = (lo+hi)/2;
        if(arr[mid] > target) return binary(lo,mid-1,target,arr);      // left half
        else if(arr[mid] < target) return binary(mid+1,hi,target,arr); // right half
        else return mid; // mil gaya
    }
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        return binary(0,n-1,target,arr); // poore array se start
    }
};
