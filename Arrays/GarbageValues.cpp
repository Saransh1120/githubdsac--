/*
TOPIC: Garbage Values

YAAD RAKHO: local array ko value nahi di to andar garbage (random) values hoti hain. int arr[4] = {}; se sab 0.

LOGIC (short notes):
  - int arr[4]; -> sirf memory mili, us memory me pehle jo tha wahi
    pada hai -> garbage.
  - Har baar run karne pe alag value aa sakti hai.
  - Fix: int arr[4] = {}; ya int arr[4] = {0}; -> sab 0.
  - Global array by default 0 hota hai.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout<<arr[0]; // garbage value
}
