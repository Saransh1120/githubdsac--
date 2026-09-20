/*
QUESTION: Print n terms of a GP (Geometric Progression)
  Example: n = 5 -> 1 2 4 8 16  (a = 1, r = 2)

YAAD RAKHO: a se start, har baar a *= r, loop n baar. (AP me +=, GP me *=)

LOGIC (short notes):
  - Formula: i-th term = a * r^(i-1).
  - Loop me bas pichle term ko r se multiply karte jao.
  - Bade n pe int overflow ho jaayega (2^31 ke baad) -> long long.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    // 1 2 4 8 16 . . .
    int a = 1, r = 2;
    for(int i=1;i<=n;i++){ // n times loop chalega
        cout<<a<<" ";
        a *= r; // agla term
    }
}
