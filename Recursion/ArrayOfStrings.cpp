/*
TOPIC: Array (vector) of Strings - 2D indexing
  vector<string> me ek string ka ek character kaise nikaalte hain.

YAAD RAKHO: arr[i] = i-th string, arr[i][j] = us string ka j-th character.

LOGIC (short notes):
  - arr[2]    -> teesri string = "manish"
  - arr[2][3] -> "manish" ka index 3 wala character = 'i'
    (m=0, a=1, n=2, i=3)
  - Matlab vector<string> ek 2D array jaisa behave karta hai:
    pehla index = kaunsi string, doosra index = kaunsa character.
*/
#include<iostream>
using namespace std;
int main(){
    vector<string> arr = {"raghav","yash","manish","arman","shubham"};
    cout<<arr[2][3]<<endl; // 'i'
}
