/*
QUESTION: Pascal's Triangle using nCr function
  Example: n = 3
       1
      1 1
     1 2 1
    1 3 3 1

YAAD RAKHO: row i ka j-th element = iCj. Pehle spaces, phir iC0 se iCi tak.

METHODS:
  - Method 1 (is file me): har element nCr formula se (fact function).
  - Method 2 (2D_Arrays/Pascal_Triangle.cpp): upar ki row ke do elements
    jod ke (ans[i-1][j-1] + ans[i-1][j]). Fast aur overflow nahi.

LOGIC (short notes):
  - Row i = 0 se n.
  - Spaces: n-i+1 (upar wali rows me zyada spaces, taaki triangle beech me aaye).
  - Numbers: j = 0 se i -> ncr(i, j).
  - fact aur ncr alag functions -> code saaf aur reusable.

NOTE: fact() int me 12! tak sahi hai, to n > 12 pe galat numbers.
*/
#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
    return fact(n) / (fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){ // spaces
            cout<<" ";
        }
        for(int j=0;j<=i;j++){ // iC0 se iCi
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    // prakash kumar, anuj kumar(set), ankita shinde
}
