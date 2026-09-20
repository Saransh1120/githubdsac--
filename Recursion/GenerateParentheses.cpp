/*
QUESTION: Generate Parentheses (LeetCode 22)
  n diya hai. n jodi brackets ke saare VALID combinations banao.
  Example: n = 3 -> "((()))", "(()())", "(())()", "()(())", "()()()"

YAAD RAKHO: '(' tab lagao jab opening < n; ')' tab jab closing < opening. closing == n -> answer.

METHOD: Recursion / Backtracking (har step pe "(" ya ")" lagao)

LOGIC (short notes):
  - opening = ab tak kitne "(" lage, closing = kitne ")" lage.
  - "(" tab laga sakte ho jab opening < n (n se zyada nahi chahiye).
  - ")" tab laga sakte ho jab closing < opening
    (warna ")" bina matching "(" ke aa jaayega -> invalid).
  - BASE CASE: closing == n -> string poori aur valid hai, ans me daalo.
  - Ye do rules follow karne se sirf valid strings hi banti hain,
    alag se check karne ki zaroorat nahi.
  - s + "(" nayi string banata hai, isliye wapas aane pe s apne aap
    purani hi rehti hai (undo karne ki zaroorat nahi).

TIME: roughly O(4^n / sqrt(n)) (Catalan number jitne answers)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    void generate(string s, int opening, int closing, int n, vector<string>& ans) {
        if(closing == n){ // saare brackets lag gaye
            ans.push_back(s);
            return;
        }
        if(opening < n) generate(s+"(",opening+1,closing,n,ans); // opening
        if(closing < opening) generate(s+")",opening,closing+1,n,ans); // closing
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("",0,0,n,ans); // khaali string se start
        return ans;
    }
};
