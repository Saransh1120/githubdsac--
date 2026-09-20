/*
QUESTION: Table of 19 (mera khud ka practice - TableOf19.cpp jaisa)
  19 38 57 ... 190

YAAD RAKHO: i = 1 se 10, print i*19 -> sirf 10 iterations.

METHODS (teeno try kiye):
  - Method 1 (comment me): i = 19 se, i += 19 -> 10 iterations.
  - Method 2 (comment me): 1 se 190 tak, if(i%19 == 0) -> 190 iterations.
  - Method 3 (use ho raha hai): i = 1 se 10, i*19 -> 10 iterations. Best.
*/
#include<iostream>

using namespace std;
int main(){


    // for ( int i=19; i<=190;i+=19)
    // cout<<i<<"  ";

   //   for(int i = 1 ; i<=190; i++)
   //   if ( i%19==0) {
   //      cout<<i<<endl;
   //   }

for(int i = 1; i<=10; i++) {

   cout<<i*19<<"  ";                // ye sahi hai bcc
}

        }


