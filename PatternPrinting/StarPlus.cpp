/*
QUESTION: Star Plus (+)
  Example: n = 5
        *
        *
    * * * * *
        *
        *

YAAD RAKHO: mid = n/2 + 1. Star sirf beech ki row (i == mid) ya beech ke column (j == mid) pe.

LOGIC (short notes):
  - n odd hona chahiye taaki ek exact beech ho.
  - Baaki jagah "  " (do spaces).
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid = n/2 + 1; // beech ki row/column
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid || j==mid) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}
