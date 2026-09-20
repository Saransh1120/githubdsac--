/*
QUESTION: Number Square
  Example: n = 3
    1 2 3
    1 2 3
    1 2 3

YAAD RAKHO: n x n loop, print j (column number).

LOGIC (short notes):
  - j print karo -> har row 1 2 3.
  - i print karte to 1 1 1 / 2 2 2 / 3 3 3 aata.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
