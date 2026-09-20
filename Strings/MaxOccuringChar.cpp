/*
QUESTION: Maximum Occurring Character (GFG)
  String (small letters) me sabse zyada baar aane wala character batao.
  Tie ho to alphabetically chhota wala.
  Example: "testsample" -> 'e'  (e, s, t teeno 2 baar -> sabse chhota 'e')

YAAD RAKHO: freq[26] array. freq[ch - 'a']++. Max freq nikaalo, phir a se z tak pehla jiska freq == max.

METHOD: Frequency Array (counting)

LOGIC (short notes):
  - ch - 97 (97 = 'a') -> 'a' -> 0, 'b' -> 1 ... 'z' -> 25.
  - Pass 1: har character ka count.
  - Pass 2: maxFreq nikaalo.
  - Pass 3: 0 se 25 tak -> pehla jiska freq == maxFreq -> ye apne aap
    alphabetically sabse chhota hoga (tie handle).
  - i + 97 -> wapas character.

TIME: O(n)    SPACE: O(26) = O(1)
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int n = s.length();
        vector<int> freq(26,0);
        for(char ch : s){
            int idx = ch - 97; // 'a' -> 0
            freq[idx]++;
        }
        int maxFreq = 0;
        for(int i=0;i<26;i++){
            maxFreq = max(freq[i],maxFreq);
        }
        for(int i=0;i<26;i++){ // a se z -> tie me chhota wala
            if(freq[i]==maxFreq)
                return (char)(i+97);
        }
        return s[0];
    }
};
