/*
QUESTION: Set Matrix Zeroes (LeetCode 73)
  Agar kisi cell me 0 hai to uski poori ROW aur poora COLUMN 0 kar do.
  Same matrix me karna hai.
  Example: {{1,1,1},{1,0,1},{1,1,1}}  ->  {{1,0,1},{0,0,0},{1,0,1}}

YAAD RAKHO: 0th row aur 0th column ko hi "marker" bana lo; unke apne 0 do bool me yaad rakho.

METHODS (sir ne 3 methods kiye hain):
  - Method 1 (comment me - Copy Matrix):
      poori matrix ki copy banao. Copy me 0 dikhe to original me row
      aur column 0 kar do. (Copy isliye, taaki naye bane 0 se aur 0 na
      phaile.)   TIME: O(m*n*(m+n))   SPACE: O(m*n)
  - Method 2 (comment me - Row & Col arrays):
      row[m] aur col[n] bool arrays. arr[i][j] == 0 to row[i] = col[j] = true.
      Phir jo row/col true hain unko 0 kar do.
      TIME: O(m*n)   SPACE: O(m+n)
  - Method 3 (use ho raha hai - In-place markers):
      Method 2 wale row/col arrays ki jagah matrix ki 0th column aur 0th
      row ko hi use karo.   TIME: O(m*n)   SPACE: O(1)

LOGIC (Method 3, step by step):
  1. Pehle check karo 0th row me koi 0 hai? -> zerothRow
     0th column me koi 0 hai? -> zerothCol
     (Kyunki ye dono ab marker banenge aur inki original info kho jaayegi.)
  2. Baaki matrix (1 se) me arr[i][j] == 0 mile to
     arr[i][0] = 0 (row mark) aur arr[0][j] = 0 (column mark).
  3. Jis column ka arr[0][j] == 0 hai, wo poora column 0 (row 1 se).
  4. Jis row ka arr[i][0] == 0 hai, wo poori row 0 (column 1 se).
  5. Last me zerothRow true ho to 0th row 0, zerothCol true ho to 0th column 0.
     (Ye last me isliye, taaki markers pehle kharab na hon.)

NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) { // Method 3
        int m = arr.size();
        int n = arr[0].size();
        bool zerothRow = false; // false means there is no 0 in oth row
        bool zerothCol = false; // false means there is no 0 in oth col
        // step 1: 0th row aur 0th col ki original info save
        for(int j=0;j<n;j++){
          if(arr[0][j]==0){
            zerothRow = true;
            break;
          }
        }
        for(int i=0;i<m;i++){
          if(arr[i][0]==0){
            zerothCol = true;
            break;
          }
        }
        // step 2: markers lagao
        for(int i=1;i<m;i++){
          for(int j=1;j<n;j++){
            if(arr[i][j]==0){
              arr[i][0] = 0; // row vector
              arr[0][j] = 0; // col vector
            }
          }
        }
        // step 3: marked columns 0
        for(int j=1;j<n;j++){ // col vector
          if(arr[0][j]==0){
            for(int i=1;i<m;i++){
              arr[i][j] = 0;
            }
          }
        }
        // step 4: marked rows 0
        for(int i=1;i<m;i++){ // row vector
          if(arr[i][0]==0){
            for(int j=1;j<n;j++){
              arr[i][j] = 0;
            }
          }
        }
        // step 5: 0th row aur 0th col sabse last me
        //zerothRow
        if(zerothRow==true){
          for(int j=0;j<n;j++){
            arr[0][j] = 0;
          }
        }
        //zerothCol
        if(zerothCol==true){
          for(int i=0;i<m;i++){
            arr[i][0] = 0;
          }
        }
    }

    // void setZeroes(vector<vector<int>>& arr) { // Method 2
    //     int m = arr.size(), n = arr[0].size();
    //     vector<bool> row(m,false);
    //     vector<bool> col(n,false);
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(arr[i][j] == 0){
    //                 row[i] = true;
    //                 col[j] = true;
    //             }
    //         }
    //     }
    //     for(int i=0;i<m;i++){
    //         if(row[i]==true){ // set ith row of arr to 0
    //             for(int j=0;j<n;j++){
    //                 arr[i][j] = 0;
    //             }
    //         }
    //     }
    //     for(int j=0;j<n;j++){
    //         if(col[j]==true){ // set jth col of arr to 0
    //             for(int i=0;i<m;i++){
    //                 arr[i][j] = 0;
    //             }
    //         }
    //     }
    // }

    // void setZeroes(vector<vector<int>>& arr) { // Method 1
    //     vector<vector<int>> copy = arr;
    //     int m = arr.size(), n = arr[0].size();
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(copy[i][j] == 0){
    //                 // set ith row to 0
    //                 for(int col=0;col<n;col++){
    //                     arr[i][col] = 0;
    //                 }
    //                 // set jth col to 0
    //                 for(int row=0;row<m;row++){
    //                     arr[row][j] = 0;
    //                 }
    //             }
    //         }
    //     }
    // }
};
