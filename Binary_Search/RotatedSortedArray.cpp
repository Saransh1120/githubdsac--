/*
QUESTION: Search in Rotated Sorted Array (LeetCode 33)
  Sorted array kisi point pe rotate hua hai. Target ka index batao, nahi to -1.
  Example: {4,5,6,7,0,1,2}, target = 0 -> 4

YAAD RAKHO: mid pe dono me se EK half hamesha sorted hoga. Sorted half ki range me target hai to wahin jao, warna doosri taraf.

LOGIC (short notes):
  - arr[mid] == target -> mil gaya.
  - arr[lo] <= arr[mid] -> LEFT half (lo..mid) sorted hai.
      target arr[lo] aur arr[mid] ke beech hai -> hi = mid - 1
      warna -> lo = mid + 1
  - warna RIGHT half (mid..hi) sorted hai.
      target arr[mid] aur arr[hi] ke beech hai -> lo = mid + 1
      warna -> hi = mid - 1
  - Sorted half me range check karna easy hai, isliye pehle wo pehchaano.
  - (arr[lo] <= arr[mid] me = zaroori hai, jab lo == mid ho.)

TIME: O(log n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] == target) return mid;
            if(arr[lo] <= arr[mid]){ // left half is sorted
                if(arr[lo] <= target && target <= arr[mid]) hi = mid - 1; // target left me
                else lo = mid + 1;
            }
            else{ // right half is sorted
                if(arr[mid] <= target && target <= arr[hi]) lo = mid + 1; // target right me
                else hi = mid - 1;
            }
        }
        return -1;
    }
};
