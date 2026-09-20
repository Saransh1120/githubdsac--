/*
QUESTION: Move Zeroes to End
  Saare 0 ko end me bhej do, baaki elements ka order same rahe.
  Example: {9,2,0,0,-4,6,0,7,0} -> {9,2,-4,6,7,0,0,0,0}

YAAD RAKHO: Bubble sort jaisa: agar arr[i] == 0 hai to use aage (i+1 se) swap karo -> 0 end tak bubble ho jaata hai.

METHODS:
  - Method 1 (is file me): Bubble sort jaisa. Compare ki jagah
    "arr[i] == 0" check.  TIME: O(n^2)
  - Method 2 (is file me nahi - Two Pointers): ek pointer j non-zero ki
    agli jagah pe rakho. arr[i] != 0 mile to swap(arr[i], arr[j]), j++.
    TIME: O(n) - LeetCode 283 me ye better hai.

LOGIC (short notes):
  - Har pass me 0 ek ek step aage swap hota jaata hai, jaise bubble
    sort me bada element end tak jaata hai.
  - Non-zero elements ka apas me order nahi badalta, kyunki sirf 0 ke
    saath swap hota hai.

TIME: O(n^2)    SPACE: O(1)
*/
#include<iostream>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {9,2,0,0,-4,6,0,7,0};
    int n = arr.size();
    print(arr);
    for(int j=0;j<n-1;j++){ // n-1
        for(int i=0;i<n-1-j;i++){
            if(arr[i] == 0){ // 0 ko aage dhakka do
                swap(arr[i],arr[i+1]);
            }
        }
    }
    print(arr);
}
