/*
TOPIC: for loop - kitni baar chalega

YAAD RAKHO: for(start; condition; update). Iterations = end - start + 1 (jab +1 badh raha ho aur <= ho).

LOGIC (short notes):
  - i = -2 se 5 tak -> -2,-1,0,1,2,3,4,5 -> 5 - (-2) + 1 = 8 baar.
  - Order: start ek baar -> condition check -> body -> update -> phir condition ...
*/
#include<iostream>
using namespace std;
int main(){
    // 8 iterations of loop
    for(int i=-2;i<=5;i++){
        cout<<"Hello"<<endl;
    }
}
