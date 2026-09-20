/*
QUESTION: Two Sum (LeetCode 1)
  Array me do alag index dhoondho jinke numbers ka sum = target.
  Example: nums = {2,7,11,15}, target = 9 -> [0,1]

YAAD RAKHO: har i ke liye j = i+1 se check karo, sum == target -> return {i, j}.

METHODS:
  - Method 1 (is file me - Brute Force): do loops -> O(n^2)
  - Method 2: sort + two pointers (Basic_Sorting_Algos/Two_Sum_2.cpp) ->
    par sort karne se original index badal jaate hain, dhyan rakhna.
  - Method 3 (aage padhoge): unordered_map (hashing) -> O(n)

LOGIC (short notes):
  - j = i+1 se isliye taaki same element do baar na le aur har pair ek hi baar check ho.
  - Mil gaya to turant return.

TIME: O(n^2)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){ // i ke baad wale
                if(nums[i]+nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
        return ans; // TC = O(n^2)
    }
};
