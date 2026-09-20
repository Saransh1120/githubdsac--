/*
QUESTION: Rotate Array (LeetCode 189)
  Array ko right side k steps rotate karo.
  Example: arr = {1,2,3,4,5,6,7}, k = 3 -> {5,6,7,1,2,3,4}

YAAD RAKHO: k = k % n; phir 3 reverse -> poora, pehle k, baaki n-k.

METHODS:
  - Method 1 (is file me nahi): k baar ek ek step rotate -> O(n*k), TLE.
  - Method 2 (is file me nahi): naya array, ans[(i+k)%n] = arr[i] -> O(n) space.
  - Method 3 (is file me - Reversal Algorithm): O(n) time, O(1) space.

LOGIC (Reversal):
  - k = k % n -> k agar n se bada ho (jaise n = 7, k = 10 = 3 steps).
  - {1,2,3,4,5,6,7}
      1. poora reverse     -> {7,6,5,4,3,2,1}
      2. pehle k reverse   -> {5,6,7,4,3,2,1}
      3. baaki n-k reverse -> {5,6,7,1,2,3,4}  DONE
  - Apna reverse(arr, i, j) function banaya (two pointers).

TIME: O(n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    // arr[i..j] ko ulta karta hai
    void reverse(vector<int>& arr, int i, int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; // k > n wala case
        reverse(arr,0,n-1); // poora
        reverse(arr,0,k-1); // pehle k
        reverse(arr,k,n-1); // baaki
    }
};
