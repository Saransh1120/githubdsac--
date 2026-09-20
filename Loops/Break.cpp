/*
TOPIC: break keyword
  1 se 10 print karo, par 5 aate hi ruk jao -> 1 2 3 4

YAAD RAKHO: break -> poora loop wahin khatam. continue -> sirf ye iteration skip.

LOGIC (short notes):
  - i == 5 pe break -> 5 print hone se PEHLE loop se bahar.
  - continue wala example -> OneTo100Except4Multiples.cpp
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        if(i==5) break; // loop khatam
        cout<<i<<" ";
    }
}
