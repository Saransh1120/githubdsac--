/*
TOPIC: Pointers aur Arrays (dynamic array ko normal array jaisa use karna)

YAAD RAKHO: int* arr = new int[7]; -> arr[i] waise hi use hota hai jaise normal array.

LOGIC (short notes):
  - new int[7] heap pe 7 ints ki jagah deta hai aur pehle ka address return.
  - arr[i] actually *(arr + i) hai, isliye pointer pe bhi [] chalta hai.
  - Sirf arr[0] = 4 set kiya, baaki 6 me garbage (ya 0) aa sakta hai.
    new int[7]() likhoge to sab 0 honge.
*/
#include<iostream>
using namespace std;
int main(){
    int* arr = new int[7]; // dynamic allocation
    arr[0] = 4;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" "; // 4 ke baad garbage
    }
}
