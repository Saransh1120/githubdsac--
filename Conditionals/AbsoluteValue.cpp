/*
QUESTION: Absolute Value (|n|)
  Example: -7 -> 7,  5 -> 5

YAAD RAKHO: n negative hai to n = -n, warna waisa hi.

METHODS:
  - Method 1 (use ho raha hai): if(n < 0) n *= -1; phir print.
  - Method 2 (comment me): if-else me direct print -> n ya -n.
  - Method 3: built-in abs(n).
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n < 0) n *= -1; // negative ko positive
    cout<<n;
    // if(n > 0) cout<<n;
    // else cout<<-n;
}
