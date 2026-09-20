/*
QUESTION: Pascal's Triangle (LeetCode 118)
  numRows diya hai. Pascal's triangle ki pehli numRows rows return karo.
  Example: numRows = 5
           [1]
           [1,1]
           [1,2,1]
           [1,3,3,1]
           [1,4,6,4,1]

YAAD RAKHO: pehle har row 1 se bharo, phir beech wala = upar left + upar.

METHODS:
  - Method 1 (Functions/PascalTriangle.cpp): nCr formula se har element.
  - Method 2 (is file me): pichli row se agli row banao (2D vector).

LOGIC (short notes):
  - Row i (1 se count) me i elements hote hain.
  - Pehle saari rows 1 se bhar do: vector<int>(i, 1).
    Isse har row ka pehla aur last element 1 ho gaya.
  - Beech ke elements: ans[i][j] = ans[i-1][j-1] + ans[i-1][j]
    (upar wali row ke do elements ka sum).
  - Row 0 aur row 1 me beech ka koi element nahi hota, isliye i = 2 se start.

TIME: O(n^2)    SPACE: O(n^2)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(vector<int>(i,1)); // i size ki row, sab 1
        }
        // Fill the pascals triangle
        for(int i=2;i<ans.size();i++){
            for(int j=1;j<ans[i].size()-1;j++){ // first aur last chhod ke
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j]; // upar-left + upar
            }
        }
        return ans;
    }
};
