/*
QUESTION: Spiral Matrix (LeetCode 54)
  m x n matrix ke elements spiral order me return karo.
  Example: {{1,2,3},{4,5,6},{7,8,9}}  ->  1 2 3 6 9 8 7 4 5

YAAD RAKHO: 4 boundaries (minr, maxr, minc, maxc) - Right, Down, Left, Up; har side ke baad boundary andar, aur check.

METHOD: 4 boundaries shrink karte jao

LOGIC (short notes):
  - minr = upar wali row, maxr = neeche wali row,
    minc = left column,   maxc = right column.
  - Ek round me 4 kaam:
      1. minr row pe left -> right chalo, phir minr++ (upar ki row khatam)
      2. maxc column pe upar -> neeche, phir maxc-- (right column khatam)
      3. maxr row pe right -> left, phir maxr-- (neeche ki row khatam)
      4. minc column pe neeche -> upar, phir minc++ (left column khatam)
  - Har step ke baad check: if(minr>maxr || minc>maxc) break;
    Ye zaroori hai non-square matrix (jaise 3x4 ya 1 row) ke liye,
    warna kuch elements do baar aa jaayenge.
  - Loop tab tak jab tak minr<=maxr aur minc<=maxc.

TIME: O(m*n)    SPACE: O(1) (answer ke alawa)
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int m = arr.size(), n = arr[0].size();
        int minr = 0, maxr = m-1;
        int minc = 0, maxc = n-1;
        while(minr<=maxr && minc<=maxc){
            // 1. right (top row)
            for(int j=minc;j<=maxc;j++){
                ans.push_back(arr[minr][j]);
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            // 2. down (right column)
            for(int i=minr;i<=maxr;i++){
                ans.push_back(arr[i][maxc]);
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            // 3. left (bottom row)
            for(int j=maxc;j>=minc;j--){
                ans.push_back(arr[maxr][j]);
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            // 4. up (left column)
            for(int i=maxr;i>=minr;i--){
                ans.push_back(arr[i][minc]);
            }
            minc++;
        }
        return ans;
    }
};
