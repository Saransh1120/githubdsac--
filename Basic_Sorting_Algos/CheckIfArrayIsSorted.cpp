/*
QUESTION: Check if Array is Sorted (GFG)
  Array ascending order (non-decreasing) me hai ya nahi.
  Example: {10,20,30,40} -> true,  {90,80,100} -> false

YAAD RAKHO: kahin bhi arr[i] > arr[i+1] mila to false, warna true.

LOGIC (short notes):
  - Har paas wale pair ko check karo: i = 0 se n-2 tak (taaki i+1 bahar na jaaye).
  - Ek bhi pair ulta mila -> turant false.
  - Loop poora chal gaya -> true.
  - Equal elements allowed hain (arr[i] == arr[i+1] chalega).

TIME: O(n)    SPACE: O(1)
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<=n-2;i++){
            if(arr[i] > arr[i+1]) return false; // ulta pair
        }
        return true;
    }
};
