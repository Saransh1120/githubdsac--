/*
QUESTION: Subsets / Power Set (LeetCode 78)
  Array ke saare subsets return karo.
  Example: arr = {1,2,3}
           -> [], [3], [2], [2,3], [1], [1,3], [1,2], [1,2,3]  (2^3 = 8)

YAAD RAKHO: har element ke liye 2 choice: skip ya pick. idx == size -> ek subset poora.

METHOD: Recursion - Pick / Skip (har element ke liye 2 choice)

LOGIC (short notes):
  - Har element ke liye ya to use subset me LO (pick) ya mat lo (skip).
    n elements -> 2^n subsets.
  - powerSet(idx, ans, ...): ans = ab tak ka bana subset.
      skip: powerSet(idx+1, ans)             -> element nahi liya
      pick: ans me arr[idx] daalo, powerSet(idx+1, ans)
  - BASE CASE: idx == arr.size() -> saare elements pe decision ho gaya,
    ans ek poora subset hai -> p me daal do.
  - ans by VALUE jaata hai (& nahi hai), isliye har call ki apni copy
    hoti hai. Isliye pick ke baad pop_back (backtrack) karne ki zaroorat
    nahi padi.

TIME: O(n * 2^n)    SPACE: O(n) stack (answer ke alawa)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    void powerSet(int idx, vector<int> ans, vector<int>& arr, vector<vector<int>>& p){
        if(idx == arr.size()){ // I have a subset
            p.push_back(ans);
            return;
        }
        powerSet(idx+1,ans,arr,p); // skip
        ans.push_back(arr[idx]);
        powerSet(idx+1,ans,arr,p); // pick
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> ans;          // current subset
        vector<vector<int>> p;    // saare subsets
        powerSet(0,ans,arr,p);
        return p;
    }
};
