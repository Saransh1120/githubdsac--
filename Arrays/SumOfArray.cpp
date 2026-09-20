/*
QUESTION: Sum of Array Elements
  Example: {74,96,9,57,62,35,5,1,88,34} -> 461

YAAD RAKHO: sum = 0 se start, har element sum me jodo.

LOGIC (short notes):
  - sum ko 0 se initialise karna zaroori hai, warna garbage se start hoga.
  - sum += arr[i] matlab sum = sum + arr[i].
  - Negative numbers (comment wala array) pe bhi same chalega.

TIME: O(n)    SPACE: O(1)
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {74,96,9,57,62,35,5,1,88,34};
    // int arr[] = {5,-6,-9};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
}
