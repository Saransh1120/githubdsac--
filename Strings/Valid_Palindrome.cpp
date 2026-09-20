/*
QUESTION: Valid Palindrome (LeetCode 125)
  Sirf letters aur digits dekho (baaki ignore), capital/small same maano.
  Kya string palindrome hai?
  Example: "A man, a plan, a canal: Panama" -> true
           "race a car" -> false

YAAD RAKHO: i start, j end. Dono ko small karo. Invalid (letter/digit nahi) ho to skip. Valid ho aur alag -> false.

METHODS:
  - Method 1 (is file me nahi): pehle saaf string banao (sirf small letters + digits), phir reverse se compare. Extra O(n) space.
  - Method 2 (is file me - Two Pointers): O(1) space.

LOGIC (short notes):
  - notValid(ch): A-Z, a-z, 0-9 nahi hai to true (skip karna hai).
  - x, y ko small me badlo (capital + 32).
  - x invalid -> i++, y invalid -> j--.
  - Dono valid -> x != y to false, warna i++, j--.

TIME: O(n)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    // letter ya digit nahi hai to true
    bool notValid(char ch){
        if(ch>=65 and ch<=90) return false;      // A-Z
        else if(ch>=97 and ch<=122) return false; // a-z
        else if(ch>=48 and ch<=57) return false;  // 0-9
        else return true;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n-1;
        while(i < j){
            char x = s[i], y = s[j];
            if(x>=65 and x<=90) x += 32; // capital -> small
            if(y>=65 and y<=90) y += 32;
            if(notValid(x)) i++;        // skip
            else if(notValid(y)) j--;   // skip
            else{
                if(x != y) return false;
                i++;
                j--;
            }
        }
        return true;
    }
};
