/*
QUESTION: Bubble Sort
  Array ko ascending order me sort karo.
  Example: {5,4,3,6,2,1} -> {1,2,3,4,5,6}

YAAD RAKHO: paas wale do compare, bada ho to swap -> har pass me sabse bada end pe "bubble" ho jaata hai.

LOGIC (short notes):
  - Ek pass me i = 0 se chalo, arr[i] > arr[i+1] ho to swap.
  - Pass 1 ke baad sabse bada element last pe pahunch jaata hai,
    pass 2 ke baad doosra sabse bada second last pe ...
  - Isliye j-th pass me andar ka loop n-1-j tak hi chalta hai
    (last ke j elements already sahi jagah pe hain).
  - Total n-1 passes kaafi hain.
  - OPTIMISATION: kisi pass me ek bhi swap nahi hua (swaps == 0) to
    array already sorted hai -> break. Isse sorted array pe O(n) lagta hai.
  - Stable sort hai (equal elements ka order same rehta hai).

TIME: worst/average O(n^2), best (already sorted) O(n)    SPACE: O(1)
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
    // Bubble Sort
    for(int j=0;j<n-1;j++){ // n-1
        int swaps = 0;
        for(int i=0;i<n-1-j;i++){ // last ke j elements already sorted
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                swaps++;
            }
        }
        if(swaps==0) break; // koi swap nahi -> already sorted
    }
    print(arr);
}
