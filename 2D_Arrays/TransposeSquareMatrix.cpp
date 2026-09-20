/*
QUESTION: Transpose of a Square Matrix (GFG)
  Rows ko columns bana do (same matrix me).
  Example: {{1,2,3},{4,5,6},{7,8,9}}  ->  {{1,4,7},{2,5,8},{3,6,9}}

YAAD RAKHO: swap(arr[i][j], arr[j][i]) sirf j < i ke liye (diagonal ke neeche).

LOGIC (short notes):
  - Transpose me arr[i][j] aur arr[j][i] ki jagah badal jaati hai.
  - Diagonal (i == j) same rehta hai.
  - Agar poori matrix pe swap karoge (j = 0 se n tak) to har pair do
    baar swap hoga aur matrix wapas original ban jaayegi. Isliye sirf
    lower triangle (j < i).
  - Ye trick Rotate_Image me bhi use hui hai.

TIME: O(n^2)    SPACE: O(1)
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){ // sirf diagonal ke neeche
                swap(arr[i][j],arr[j][i]);
            }
        }
        return arr;
    }
};
