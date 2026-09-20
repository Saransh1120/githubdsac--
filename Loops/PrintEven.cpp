/*
QUESTION: Print Even Numbers from 1 to 100
  2 4 6 ... 100

YAAD RAKHO: i*2 print karo (i = 1 se 50) -> sirf 50 iterations.

METHODS (sir ne 3 methods kiye hain):
  - Method 1 (comment me): 1 se 100, if(i%2 == 0) print -> 100 iterations.
  - Method 2 (comment me): i = 2 se, i += 2 -> 50 iterations.
  - Method 3 (use ho raha hai): i = 1 se 50, print i*2 -> 50 iterations.
  - Method 2 aur 3 better hain kyunki loop aadha chalta hai.
*/
#include<iostream>
using namespace std;
int main(){
    // 100 iterations
    // for(int i=1;i<=100;i++){
    //     if(i%2 == 0) cout<<i<<" ";
    // }

    // // 50 iterations
    // for(int i=2;i<=100;i+=2){
    //     cout<<i<<" ";
    // }

    // 50 iterations
    for(int i=1;i<=50;i++){
        cout<<i*2<<" ";
    }


}
