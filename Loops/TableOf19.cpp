/*
QUESTION: Table of 19
  19 38 57 ... 190

YAAD RAKHO: i = 1 se 10, print 19*i -> sirf 10 iterations.

METHODS (sir ne 3 methods kiye hain):
  - Method 1 (comment me): 19 se 190 tak har number, if(i%19 == 0) print
    -> 172 iterations (bahut zyada).
  - Method 2 (comment me): i = 19 se, i += 19 -> 10 iterations.
  - Method 3 (use ho raha hai): i = 1 se 10, print 19*i -> 10 iterations.
*/
#include<iostream>
using namespace std;
int main(){
    // // 172 times
    // for(int i=19;i<=190;i++){
    //     if(i%19==0) cout<<i<<" ";
    // }

    // // 10 times
    // for(int i=19;i<=190;i+=19){
    //     cout<<i<<" ";
    // }

    // 10 times
    for(int i=1;i<=10;i++){
        cout<<19*i<<" ";
    }
}
