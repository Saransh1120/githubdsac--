/*
TOPIC: Print (Output) an Array

YAAD RAKHO: n = sizeof(arr)/sizeof(arr[0]); loop i = 0 se n-1.

LOGIC (short notes):
  - int arr[10] = {}; -> 10 elements, sab 0 (comment me).
  - int arr[] = {...}; -> size compiler khud gin leta hai.
  - sizeof(arr) = total bytes (12 * 4 = 48), /4 -> 12 elements.
  - Index 0 se n-1 tak hota hai, n pe nahi (n pe garbage / out of bound).
*/
#include<iostream>
using namespace std;
int main(){
    // int arr[10] = {}; // Default 0
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103};
    int n = sizeof(arr)/4; // 48/4 = 12
    for(int i=0;i<=n-1;i++){ // 0 to n-1
        cout<<arr[i]<<" ";
    }
}
