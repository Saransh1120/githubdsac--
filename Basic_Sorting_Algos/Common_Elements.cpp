/*
QUESTION: Common Elements in Two Arrays (GFG)
  Do arrays a aur b ke common elements (sorted order me) return karo.
  Duplicate bhi utni baar aaye jitni baar dono me common hain.
  Example: a = {3,4,2,2,4}, b = {3,2,2,7} -> {2,2,3}

YAAD RAKHO: dono ko sort karo, phir two pointers: chhote wale ko aage badhao, equal mile to ans me daalo.

METHODS:
  - Method 1 (Brute Force - is file me nahi): har a[i] ko b me dhoondo -> O(m*n)
  - Method 2 (is file me): Sort + Two Pointers

LOGIC (short notes):
  - Dono arrays sort karo.
  - i -> a, j -> b.
      a[i] < b[j] -> a[i] b me aage nahi milega, i++
      b[j] < a[i] -> j++
      equal       -> common hai, ans me daalo, i++ aur j++ dono.
  - Jab koi ek array khatam, ruk jao.

TIME: O(m log m + n log n)    SPACE: O(1) (answer ke alawa)
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m = a.size(), n = b.size();
        int i = 0, j = 0;
        while(i<m && j<n){
            if(a[i] < b[j]) i++;      // a ka chhota, aage badho
            else if(b[j] < a[i]) j++; // b ka chhota, aage badho
            else{                     // dono equal -> common
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
