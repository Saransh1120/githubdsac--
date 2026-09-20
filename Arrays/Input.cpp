/*
QUESTION: Array Input + print only negative elements
  Example: n = 5, arr = {3,-2,7,-9,0} -> -2 -9

YAAD RAKHO: loop se cin>>arr[i] (0 se n-1); phir loop me condition lagao.

LOGIC (short notes):
  - Pehle size n lo, phir int arr[n]; (variable size array - g++ me
    chalta hai, par standard C++ me nahi. vector<int> arr(n) better hai.)
  - Input loop: i = 0 se n-1.
  - Doosre loop me sirf arr[i] < 0 wale print.

TIME: O(n)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    // Input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // Print the negative elements of array
    for(int i=0;i<=n-1;i++){
        if(arr[i] < 0) cout<<arr[i]<<" ";
    }
}
