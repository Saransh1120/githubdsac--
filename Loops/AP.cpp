/*
QUESTION: Print n terms of an AP (Arithmetic Progression)
  Example: n = 5 -> 2 5 8 11 14   (a = 2, d = 3)
           n = 5 -> 3 7 11 15 19  (a = 3, d = 4)

YAAD RAKHO: a se start, har baar a += d, loop n baar.

METHODS (sir ne 3 methods kiye hain, 2 5 8 11 ... ke liye):
  - Method 1 (comment me): loop variable hi term hai ->
      i = 2 se 3n-1 tak, i += 3.
  - Method 2 (comment me): formula -> i-th term = 3*i - 1.
      General: a + (i-1)*d
  - Method 3 (comment me + use ho raha hai): a aur d variables,
      har baar print karo aur a += d. Sabse easy aur general.
      Use wala: a = 3, d = 4 -> 3 7 11 15 19 ...
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    // // Method 1: 2 5 8 11 14 17...
    // for(int i=2;i<=3*n-1;i+=3){
    //     cout<<i<<" ";
    // }

    // // Method 2: 2 5 8 11 14 17...
    // for(int i=1;i<=n;i++){
    //     cout<<3*i-1<<" ";
    // }

    // // Method 3: 2 5 8 11 14 17...
    // int a = 2, d = 3;
    // for(int i=1;i<=n;i++){ // n times loop chalega
    //     cout<<a<<" ";
    //     a += d;
    // }

    // 3 7 11 15 19...
    int a = 3, d = 4;
    for(int i=1;i<=n;i++){ // n times loop chalega
        cout<<a<<" ";
        a += d; // agla term
    }
}
