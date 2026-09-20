/*
QUESTION: Insertion Sort
  Array ko ascending order me sort karo.
  Example: {5,4,3,6,2,1} -> {1,2,3,4,5,6}

YAAD RAKHO: left part hamesha sorted; naye element ko peeche swap karte karte uski sahi jagah pe bitha do (jaise taash ke patte).

LOGIC (short notes):
  - Index 0 akela already sorted hai, isliye i = 1 se start.
  - arr[i] ko left side ke sorted part me sahi jagah pe daalna hai:
      j = i, jab tak arr[j] < arr[j-1] -> swap aur j--.
  - j >= 1 check zaroori hai taaki j-1 negative na ho.
  - Almost sorted array pe bahut fast hai (kam swaps).
  - Stable sort hai.

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
    // Insertion Sort
    for(int i=1;i<=n-1;i++){ // arr[i] ko sorted part me daalna hai
        int j = i;
        while(j>=1 && arr[j] < arr[j-1]){ // peeche wala bada hai -> swap
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    print(arr);
}
