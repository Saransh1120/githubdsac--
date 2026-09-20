/*
QUESTION: Search an Element in Array (Linear Search)
  Example: arr = {62,5,5,-1,88,-34,5}, target = 15 -> Element Not Found

YAAD RAKHO: flag = false; mil gaya to flag = true aur break. Last me flag check.

LOGIC (short notes):
  - Har element ko target se compare karo.
  - Mil gaya -> flag true, break (aage dekhne ki zaroorat nahi).
  - Loop ke baad flag se decide karo found / not found.
  - Sorted array ho to Binary Search (O(log n)) better hai.

TIME: O(n)    SPACE: O(1)
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {62,5,5,-1,88,-34,5};
    int n = sizeof(arr)/4;
    int target = 15;
    bool flag = false; // false means not present
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            flag = true; // true means present
            break;
        }
    }
    if(flag == true) cout<<"Element Found"<<endl;
    else cout<<"Element Not Found"<<endl;

}
