/*
QUESTION: Two Sum II - Input Array Is Sorted (LeetCode 167)
  Sorted array me do numbers dhoondho jinka sum = target.
  Unke index (1-based) return karo.
  Example: arr = {2,7,11,15}, target = 9 -> [1,2]

YAAD RAKHO: i = start, j = end. Sum bada -> j--, sum chhota -> i++, equal -> answer.

METHODS:
  - Method 1 (Arrays/TwoSum.cpp): do loops, har pair check -> O(n^2)
  - Method 2 (is file me): Two Pointers (array sorted hai isliye) -> O(n)

LOGIC (short notes):
  - arr[i] + arr[j] > target -> sum kam karna hai -> bada wala (j) chhoto -> j--
  - arr[i] + arr[j] < target -> sum badhana hai -> chhota wala (i) badhao -> i++
  - equal -> mil gaya.
  - Answer 1-based chahiye, isliye i+1 aur j+1.

TIME: O(n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans(2);
        int n = arr.size();
        int i = 0, j = n-1; // dono ends se
        while(i<j){
            if(arr[i] + arr[j] > target) j--;      // sum bada -> right se kam
            else if(arr[i] + arr[j] < target) i++; // sum chhota -> left se badhao
            else{
                ans[0] = i + 1; // 1-based index
                ans[1] = j + 1;
                break;
            }
        }
        return ans; // TC = O(n)
    }
};
