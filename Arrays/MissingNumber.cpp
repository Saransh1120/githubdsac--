/*
QUESTION: Missing Number (LeetCode 268)
  Array me 0 se n tak ke n numbers hain (distinct), ek number missing hai.
  Wo missing number return karo.
  Example: nums = {3,0,1} -> n = 3, range 0..3 -> 2 missing

YAAD RAKHO: flag[n+1] array banao, jo number aaya use true karo; jo false bacha wahi missing.

METHODS (sir ne 3 methods kiye hain):
  - Method 1 (comment me, sabse neeche - Brute Force):
      0 se n tak har i ke liye poora array search karo.
      TIME: O(n^2)
  - Method 2 (comment me - Sorting):
      sort karo. Sorted me nums[i] == i hona chahiye. Jahan pehli baar
      i != nums[i], wahi i missing. Koi nahi mila to n missing.
      TIME: O(n log n)
  - Method 3 (use ho raha hai - Flag / Visited array):
      flag[n+1] sab false. Har nums[i] ke liye flag[nums[i]] = true.
      Jo index false reh gaya wahi missing.
      TIME: O(n)   SPACE: O(n)
  - Bonus (is file me nahi): Sum formula -> n*(n+1)/2 - array ka sum.
      TIME: O(n)   SPACE: O(1)

NOTE: Method 3 ka last "return 2" kabhi chalega nahi (answer hamesha
      mil jaata hai), bas compiler error se bachne ke liye likha hai.
      Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    // Method 3: flag array
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> flag(n+1,false); // 0..n
        for(int i=0;i<n;i++){
            flag[nums[i]] = true; // ye number present hai
        }
        for(int i=0;i<=n;i++){
            if(flag[i]==false) return i; // nahi aaya -> missing
        }
        return 2; // TC = O(n), AS = O(n)
    }

    // Method 2: sorting
    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<n;i++){
    //         if(i != nums[i]) return i;
    //     }
    //     return n; // TC = O(nlogn)
    // }

    // Method 1: brute force
    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i=0;i<=n;i++){
    //         bool flag = false;
    //         // false means i isn't present in array
    //         for(int ele : nums){
    //             if(ele == i){
    //                 flag = true;
    //                 break;
    //             }
    //         }
    //         if(flag == false) return i;
    //     }
    //     return 35235; // TC = O(n^2)
    // }
};
