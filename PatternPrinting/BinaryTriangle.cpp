/*
QUESTION: Binary (0-1) Triangle
  Example: n = 4
    1
    0 1
    1 0 1
    0 1 0 1

YAAD RAKHO: (i + j) even -> 1, odd -> 0.

LOGIC (short notes):
  - Triangle shape: row i me j = 1 se i.
  - Chessboard jaisa pattern -> (i+j) % 2 se decide.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2 == 0) cout<<1<<" "; // even -> 1
            else cout<<0<<" ";             // odd -> 0
        }
        cout<<endl;
    }
}
