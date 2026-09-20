/*
QUESTION: Selection Sort
  Array ko ascending order me sort karo.
  Example: {5,4,3,6,2,1} -> {1,2,3,4,5,6}

YAAD RAKHO: har pass me bache hue part ka MINIMUM dhoondho aur use aage (j pe) swap kar do.

LOGIC (short notes):
  - Pass j: index j se n-1 tak ka minimum (mn) aur uska index (mnIdx) nikaalo.
  - swap(arr[j], arr[mnIdx]) -> ab j tak sab sorted.
  - n-1 passes kaafi hain (last element apne aap sahi jagah pe).
  - Har pass me sirf 1 swap -> total swaps kam (max n-1).
  - Best case me bhi O(n^2), kyunki minimum dhoondhne ke liye poora
    part dekhna padta hai.
  - Stable nahi hai.

TIME: O(n^2) (best/worst dono)    SPACE: O(1)
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
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    // Selection Sort
    for(int j=0;j<n-1;j++){ // n-1 passes
        int mn = arr[j], mnIdx = j;
        for(int i=j;i<n;i++){ // j se aage ka minimum
            if(arr[i] < mn){
                mn = arr[i];
                mnIdx = i;
            }
        }
        swap(arr[j],arr[mnIdx]); // minimum ko uski jagah pe
    }
    print(arr);
}
