/*
QUESTION: Multiply Two Matrices (GFG)
  Do n x n matrices a aur b ka product res = a * b nikaalo.
  Example: a = {{1,2},{3,4}}, b = {{5,6},{7,8}}
           res = {{19,22},{43,50}}

YAAD RAKHO: res[i][j] = a ki i-th ROW  x  b ki j-th COLUMN (k se multiply karke jodo).

METHOD: 3 nested loops (i, j, k)

LOGIC (short notes):
  - res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ... + a[i][n-1]*b[n-1][j]
  - i -> res ki row, j -> res ka column, k -> a ki row aur b ke column
    me saath saath chalta hai.
  - res ko 0 se bharna zaroori hai kyunki hum += kar rahe hain.
  - General case: a (m x n) * b (n x p) = res (m x p). a ke columns
    = b ki rows hone chahiye.

TIME: O(n^3)    SPACE: O(n^2)
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a, vector<vector<int>> &b) {
        int n = a.size();
        vector<vector<int>> res(n,vector<int>(n,0)); // n x n, sab 0
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // res[i][j] = summation(k-> 0 to n-1) a[i][k]*b[k][j];
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        return res;
    }
};
