/*
QUESTION: Snake Pattern Print
  2D array ko snake jaisa print karo: row 0 left->right, row 1
  right->left, row 2 left->right ...
  Example: {{5,18,11,2},{9,9,4,4},{7,10,13,15}}
           -> 5 18 11 2 4 4 9 9 7 10 13 15

YAAD RAKHO: even row -> seedha (j = 0 se), odd row -> ulta (j = last se).

LOGIC (short notes):
  - i % 2 == 0 (even row) -> j = 0 se 3 tak.
  - odd row -> j = 3 se 0 tak.
  - Bas row ke hisaab se inner loop ki direction badalni hai.

TIME: O(rows * cols)
*/
#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,18,11,2},{9,9,4,4},{7,10,13,15}};
    for(int i=0;i<3;i++){
        if(i%2 == 0){ // even row -> left to right
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ // odd row -> right to left
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
