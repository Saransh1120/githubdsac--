/*
QUESTION: String Compression (LeetCode 443)
  Lagatar same characters ko "char + count" me badlo (count 1 ho to sirf char).
  Example: {a,a,b,b,c,c,c} -> {a,2,b,2,c,3}, return 6
           {a} -> {a}, return 1

YAAD RAKHO: i = group ka start, j aage badhta hai jab tak same. Alag mila -> char + (len > 1 ho to to_string(len)), i = j. Last group loop ke baad.

METHOD: Two Pointers (i, j) + ans string

LOGIC (short notes):
  - s[j] == s[i] -> same group, j++.
  - Alag -> group khatam: len = j - i.
      ans me s[i] daalo, len != 1 ho to count bhi (to_string se, taaki
      12 -> '1','2' do characters bane).
      i = j (naya group).
  - Last group ke liye loop ke baad ek baar aur.
  - Answer ko wapas vector<char> me copy karke s me daala, aur size return.

TIME: O(n)    SPACE: O(n) (ans string - LeetCode O(1) maangta hai, par ye bhi accept hota hai)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    int compress(vector<char>& s) {
        string ans = "";
        int i = 0, j = 0;
        int n = s.size();
        while(j < n){
            if(s[j]==s[i]) j++; // same group
            else{ // group khatam
                int len = j - i;
                ans.push_back(s[i]);
                if(len != 1) ans += to_string(len);
                i = j;
            }
        }
        // this is for last group
        int len = j - i;
        ans.push_back(s[i]);
        if(len != 1) ans += to_string(len);

        // string -> vector<char>
        vector<char> ans2(ans.length());
        for(int i=0;i<ans.length();i++){
            ans2[i] = ans[i];
        }
        s = ans2;
        return s.size();
    }
};
