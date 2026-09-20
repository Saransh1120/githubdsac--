/*
QUESTION: Maximum Element in Array
  Example: {-62,-35,-5,-1,-88,-34} -> -1

YAAD RAKHO: mx = INT_MIN (ya arr[0]) se start karo, har element se compare karke update.

METHODS (sir ne 3 tarike dikhaye):
  - Method 1: mx = INT_MIN, if(arr[i] > mx) mx = arr[i];  (comment me)
  - Method 2: mx = INT_MIN, mx = max(mx, arr[i]);         (use ho raha hai)
  - Method 3: max = arr[0] se start, loop i = 1 se.        (comment me)

LOGIC (short notes):
  - mx ko 0 se start MAT karo: saare numbers negative ho to answer 0
    aa jaayega jo array me hai hi nahi. Isliye INT_MIN ya arr[0].
  - INT_MIN = sabse chhota int (<climits> me).

TIME: O(n)    SPACE: O(1)
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-62,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        // if(arr[i] > mx) mx = arr[i]; // method 1
        mx = max(mx,arr[i]);            // method 2
    }
    // method 3:
    // int max = arr[0];
    // for(int i=1;i<n;i++){
    //     if(arr[i] > max) max = arr[i];
    // }
    cout<<mx; // -1
}
