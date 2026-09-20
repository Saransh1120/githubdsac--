/*
QUESTION: Bridge Pattern
  Example: n = 4
    * * * * * * *
    * * *   * * *
    * *       * *
    *           *

YAAD RAKHO: pehli row 2n-1 stars. Phir har row me 3 kaam: stars (ulta triangle) + spaces (odd: 1,3,5) + stars.

LOGIC (short notes):
  - Pehli row alag loop se: 2n-1 stars.
  - n-- karke baaki n-1 rows ke liye (naya n) loop:
      left stars  = n+1-i  (ghat te jaate hain)
      spaces      = 2i-1   (1, 3, 5 ... badhte hain)
      right stars = n+1-i
  - Space ke liye "  " (do spaces) kyunki star bhi "* " (2 characters) hai.
  - Bade pattern ko chhote patterns me todo: "1 loop me 3 loop".
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // First row (2n-1 stars)
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    // 1 loop me 3 loop
    n--; // baaki rows
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){ // stars (hori. flipped triangle)
            cout<<"* ";
        }
        for(int j=1;j<=2*i-1;j++){ // spaces (odd triangle)
            cout<<"  ";
        }
        for(int j=1;j<=n+1-i;j++){ // stars (hori. flipped triangle)
            cout<<"* ";
        }
        cout<<endl;
    }
}
