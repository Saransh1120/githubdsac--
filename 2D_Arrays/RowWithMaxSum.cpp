/*
QUESTION: Row with Maximum Sum
  2D array me kaunsi row ka sum sabse zyada hai? Row index aur sum print karo.
  Example: {{5,18,11,2},{9,9,4,4},{7,10,13,15}}
           row sums = 36, 26, 45  ->  output: 2 45

YAAD RAKHO: har row ka sum nikaalo, maxSum se compare karke maxRow update karo.

LOGIC (short notes):
  - Bahar ka loop (i) = rows, andar ka loop (j) = columns.
  - Har row ke liye sum = 0 se start (loop ke andar declare kiya).
  - sum > maxSum ho to maxSum aur maxRow dono update.
  - maxSum ko INT_MIN se start kiya taaki negative sums pe bhi sahi chale.
  - 2D array function/declare karte time column size dena zaroori hai: arr[][4].

TIME: O(rows * cols)
NOTE: INT_MIN ke liye #include<climits> lagana safe hai (kuch compilers
      pe iostream se nahi aata).
*/
#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,18,11,2},{9,9,4,4},{7,10,13,15}};
    int maxRow = -1, maxSum = INT_MIN;
    for(int i=0;i<3;i++){
        int sum = 0; // har row ke liye naya sum
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){ // nayi best row
            maxSum = sum;
            maxRow = i;
        }
    }
    cout<<maxRow<<" "<<maxSum;
}
