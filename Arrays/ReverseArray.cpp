/*
QUESTION: Reverse an Array (in-place)
  Example: {10,20,30,40,50,60} -> {60,50,40,30,20,10}

YAAD RAKHO: i = start, j = end; swap karo aur dono andar aao jab tak i < j.

METHODS:
  - Method 1: naya array banao aur ulta copy karo -> extra O(n) space.
  - Method 2 (is file me): Two Pointers, same array me swap -> O(1) space.
  - Method 3: STL -> reverse(arr.begin(), arr.end());

LOGIC (short notes):
  - Pehla aur last swap, doosra aur second last swap ...
  - i < j tak hi chalao. i <= j ya poore n tak chalaoge to array wapas
    original ban jaayega.

TIME: O(n)    SPACE: O(1)
*/
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr = {10,20,30,40,50,60};
    print(arr);
    int i = 0, j = arr.size() - 1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    print(arr);
}
