/*
QUESTION: Rotate Image (LeetCode 48)
  n x n matrix ko 90 degree clockwise ghumao, same matrix me
  (extra matrix nahi bana sakte).
  Example: {{1,2,3},{4,5,6},{7,8,9}}  ->  {{7,4,1},{8,5,2},{9,6,3}}

YAAD RAKHO: 90 clockwise = pehle TRANSPOSE, phir har ROW REVERSE.

METHOD: Transpose + Reverse each row (in-place)

LOGIC (short notes):
  - Transpose: arr[i][j] <-> arr[j][i]. Sirf diagonal ke neeche wale
    (j < i) swap karo, warna do baar swap hoke wapas same ho jaayega.
  - Transpose ke baad har row ko ulta kar do -> 90 degree clockwise.
  - Row reverse ke do tarike:
      method 1 (comment me): reverse(arr[i].begin(), arr[i].end())
      method 2 (use ho raha hai): two pointers s aur e, swap karke andar aao.
  - (Anticlockwise chahiye to transpose + har COLUMN reverse.)

TIME: O(n^2)    SPACE: O(1)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        // Transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){ // sirf lower triangle
                swap(arr[i][j],arr[j][i]);
            }
        }
        // Reverse each row
        for(int i=0;i<n;i++){
            // reverse(arr[i].begin(),arr[i].end()); // method 1: STL
            int s = 0, e = n-1; // method 2: two pointers
            while(s<e){
                int temp = arr[i][s];
                arr[i][s] = arr[i][e];
                arr[i][e] = temp;
                s++;
                e--;
            }
        }
    }
};
