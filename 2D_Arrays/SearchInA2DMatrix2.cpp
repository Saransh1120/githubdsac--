/*
QUESTION: Search a 2D Matrix II (LeetCode 240)
  m x n matrix hai jisme har row left se right sorted hai aur har column
  upar se neeche sorted hai. Target hai ya nahi, batao.
  Example: {{1,4,7},{2,5,8},{3,6,9}}, target = 5 -> true

YAAD RAKHO: TOP-RIGHT corner se start: bada hai to left (j--), chhota hai to neeche (i++).

METHODS:
  - Method 1 (comment me - Brute Force): har element check karo.
    TIME: O(m*n)
  - Method 2 (use ho raha hai - Staircase Search):
    TIME: O(m+n)

LOGIC (Staircase):
  - Top-right (i = 0, j = n-1) se start karo. Is element ke left me sab
    chhote hain aur neeche sab bade hain.
  - arr[i][j] > target -> is column me neeche sab aur bade honge,
    to column hi bekaar -> j-- (left jao).
  - arr[i][j] < target -> is row me left me sab aur chhote honge,
    to row hi bekaar -> i++ (neeche jao).
  - Equal -> mil gaya.
  - Har step me ek row ya ek column hat jaata hai -> max m+n steps.
  - (Bottom-left se bhi same kaam hota hai, ulti directions me.)

NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        // Staircase Solution (Raj Sharma)
        int m = arr.size(), n = arr[0].size();
        int i = 0, j = n-1; // top-right corner
        while(i<m && j>=0){
            if(arr[i][j] > target) j--;      // bada hai -> left
            else if(arr[i][j] < target) i++; // chhota hai -> neeche
            else return true;
        }
        return false; // TC = O(m+n)
    }

    // Method 1: Brute Force
    // bool searchMatrix(vector<vector<int>>& arr, int target) {
    //     int m = arr.size(), n = arr[0].size();
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(arr[i][j] == target) return true;
    //         }
    //     }
    //     return false;
    // } TC = O(mn)
};
