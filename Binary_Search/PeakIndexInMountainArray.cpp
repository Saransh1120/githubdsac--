/*
QUESTION: Peak Index in a Mountain Array (LeetCode 852)
  Array pehle badhta hai phir ghatta hai (mountain). Peak (sabse bade)
  ka index batao.
  Example: {0,2,5,3,1} -> 2

YAAD RAKHO: mid chadhai pe hai (left < mid < right) -> lo = mid+1; utraai pe hai (left > mid > right) -> hi = mid-1; warna mid hi peak.

METHODS:
  - Method 1: Linear -> pehla i jahan arr[i] > arr[i+1] -> O(n)
  - Method 2 (is file me): Binary Search -> O(log n)

LOGIC (short notes):
  - lo = 1, hi = n-2 kyunki peak kabhi first ya last index pe nahi hota
    (aur mid-1, mid+1 array ke bahar nahi jaayenge).
  - Increasing slope pe ho -> peak right me hai.
  - Decreasing slope pe ho -> peak left me hai.
  - Dono nahi -> arr[mid] dono neighbours se bada -> peak.
  - mid = lo + (hi-lo)/2 -> (lo+hi) ke overflow se bachne ke liye.
  - Last "return 26569" kabhi nahi chalega (mountain me peak hamesha hai).

TIME: O(log n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1, hi = n-2; // first aur last peak nahi ho sakte
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]) lo = mid + 1;      // chadhai -> right
            else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]) hi = mid - 1; // utraai -> left
            else return mid; // peak
        }
        return 26569;
    }
};
