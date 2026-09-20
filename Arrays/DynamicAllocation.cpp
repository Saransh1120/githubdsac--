/*
TOPIC: Static vs Dynamic Allocation

YAAD RAKHO: int arr[7] -> stack (apne aap free); new int[7] -> heap (delete[] khud karna padta hai).

LOGIC (short notes):
  - Static allocation: int arr[7];
      memory STACK pe, size compile time pe fix, function khatam hote hi
      apne aap free ho jaati hai.
  - Dynamic allocation: int* brr = new int[7];
      memory HEAP pe, runtime pe banti hai. new us memory ka address
      deta hai, jo pointer (brr) me store hota hai.
      Kaam khatam hone pe delete[] brr; karna chahiye, warna memory leak.
  - Heap bada hota hai, isliye bahut bade arrays dynamic banate hain.
  - Vector andar se dynamic array hi use karta hai.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[7]; // static allocation (stack)
    int* brr = new int[7]; // dynamic allocation (heap)
}
