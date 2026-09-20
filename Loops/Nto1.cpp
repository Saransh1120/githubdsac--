/*
QUESTION: Print n to 1
  Example: n = 5 -> 5 4 3 2 1

YAAD RAKHO: i = n se 1 tak i-- (ya i = 1 se n tak print n+1-i).

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me): ulta loop -> for(i = n; i >= 1; i--) print i.
  - Method 2 (use ho raha hai): seedha loop, print n+1-i.
      i = 1 -> n, i = 2 -> n-1 ... i = n -> 1.
  - Method 3 (Recursion/Nto1.cpp): recursion.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // for(int i=n;i>=1;i--){
    //     cout<<i<<" ";
    // }

    for(int i=1;i<=n;i++){
        cout<<n+1-i<<" ";
    }
}
