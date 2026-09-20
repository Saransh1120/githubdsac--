/*
QUESTION: Print Array using Recursion
  Example: {5,8,2,534,8,235,-8521} -> 5 8 2 534 8 235 -8521

YAAD RAKHO: index parameter me bhejo: print arr[idx], phir printRec(idx+1). idx == size pe ruk.

LOGIC (short notes):
  - Loop ki jagah index ko parameter me bhejo.
  - printRec(arr, idx): arr[idx] print karo, phir printRec(arr, idx+1).
  - BASE CASE: idx == arr.size() -> array khatam.
  - vector ko & (reference) se bheja hai, taaki har call me poore array
    ki copy na bane.
  - Agar cout ko call ke baad likh do to array ulta print hoga.

TIME: O(n)    SPACE: O(n) stack
*/
#include<iostream>
using namespace std;
void printRec(vector<int>& arr, int idx){
    if(idx == arr.size()) return; // base case
    cout<<arr[idx]<<" "; // work
    printRec(arr,idx+1); // call - agla index
}
int main(){
    vector<int> arr = {5,8,2,534,8,235,-8521};
    printRec(arr,0); // index 0 se start
}
