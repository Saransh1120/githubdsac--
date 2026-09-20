/*
QUESTION: Valid Anagram (LeetCode 242)
  Kya t, s ke letters ko rearrange karke bana hai?
  Example: s = "anagram", t = "nagaram" -> true
           s = "rat", t = "car" -> false

YAAD RAKHO: dono ko sort karo; sorted strings same -> anagram.

METHODS:
  - Method 1 (is file me - Sorting): O(n log n)
  - Method 2 (is file me nahi - Frequency array): freq[26], s ke letters
    pe ++, t ke letters pe --. Last me sab 0 -> anagram. O(n)
    (MaxOccuringChar.cpp me freq array ka idea hai.)

LOGIC (short notes):
  - Length alag -> seedha false.
  - s aur t by value aaye hain (copy), isliye sort karne se original nahi badla.

NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
    }
};
