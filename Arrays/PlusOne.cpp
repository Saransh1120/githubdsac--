/*
QUESTION: Plus One (LeetCode 66)
  Ek bada number digits ke array me diya hai. Usme 1 add karke result
  digits me return karo.
  Example: {1,2,3} -> {1,2,4},  {9,9} -> {1,0,0}

YAAD RAKHO: peeche se chalo, carry = 1 se start. sum < 10 -> carry 0, warna digit 0 aur carry 1. Last me carry bacha to 1 daalo, phir reverse.

LOGIC (short notes):
  - Addition hamesha last digit se hota hai, isliye i = last se 0 tak.
  - carry = 1 se start kiya (yahi "plus one" hai).
  - sum = digit + carry:
      sum < 10  -> wahi digit, carry = 0
      sum == 10 -> digit 0, carry = 1 (sirf 9+1 pe hota hai)
  - Loop ke baad bhi carry 1 hai (jaise 999) -> aage 1 lagana padega.
  - ans me digits ulte order me gaye (last se), isliye reverse().

TIME: O(n)    SPACE: O(n)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; // +1
        vector<int> ans;
        for(int i=digits.size()-1;i>=0;i--){ // last digit se
            int sum = digits[i] + carry;
            if(sum<10){
                carry = 0;
                ans.push_back(sum);
            }
            else{ // sum == 10
                carry = 1;
                ans.push_back(0);
            }
        }
        if(carry == 1) ans.push_back(1); // 999 + 1 = 1000 case
        reverse(ans.begin(),ans.end()); // ulta bana tha
        return ans;
    }
};
