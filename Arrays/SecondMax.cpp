/*
QUESTION: Second Maximum (Second Largest) in Array
  Example: {-62,-35,-5,-1,-88,-34} -> max = -1, second max = -5

YAAD RAKHO: pehle loop me max nikaalo; doosre loop me max ko chhod ke sabse bada.

METHODS:
  - Method 1: sort karke peeche se pehla alag element -> O(n log n)
  - Method 2 (is file me - Two Pass): O(n)
  - Method 3 (is file me nahi - One Pass): ek hi loop me mx aur smx dono
    update karo: arr[i] > mx -> smx = mx, mx = arr[i];
                 warna arr[i] > smx aur arr[i] != mx -> smx = arr[i].

LOGIC (short notes):
  - arr[i] != mx check isliye taaki max repeat ho (jaise {5,5,3}) to
    second max 5 na aa jaaye.
  - Agar saare elements same hain to smx INT_MIN hi rahega (second max nahi hai).

TIME: O(n)    SPACE: O(1)
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-62,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4;
    // pass 1: max
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > mx) mx = arr[i];
    }
    // pass 2: max ke alawa sabse bada
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > smx && arr[i] != mx) smx = arr[i];
    }
    cout<<mx<<" "<<smx<<endl; // -1 -5
}
