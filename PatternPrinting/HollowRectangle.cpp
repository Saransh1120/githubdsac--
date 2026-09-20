/*
QUESTION: Hollow Rectangle
  Example: m = 4, n = 5
    * * * * *
    *       *
    *       *
    * * * * *

YAAD RAKHO: star sirf boundary pe: i == 1 || i == m || j == 1 || j == n. Baaki space.

LOGIC (short notes):
  - Pehli row, last row, pehla column, last column -> star.
  - Andar -> "  " (do spaces, kyunki star "* " bhi 2 characters).
*/
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n) cout<<"* "; // boundary
            else cout<<"  "; // andar khaali
        }
        cout<<endl;
    }
}
