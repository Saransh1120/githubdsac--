/*
QUESTION: Star Rectangle
  Example: m = 3, n = 4
    * * * *
    * * * *
    * * * *

YAAD RAKHO: bahar ka loop = rows (m), andar ka loop = columns (n). Har row ke baad endl.

LOGIC (short notes):
  - Ye har pattern ka base hai. Baaki patterns me bas andar ke loop ki
    condition (kitne stars) badalti hai.
*/
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;
    for(int i=1;i<=m;i++){     // rows
        for(int j=1;j<=n;j++){ // columns
            cout<<"* ";
        }
        cout<<endl;
    }
}
