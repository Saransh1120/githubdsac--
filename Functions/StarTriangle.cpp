/*
QUESTION: Star Triangle using Function (3 baar alag size)
  Example: n = 3
    *
    * *
    * * *

YAAD RAKHO: pattern ka code function me daal do, phir alag n ke saath baar baar call karo.

LOGIC (short notes):
  - Row i me i stars.
  - Bina function ke same loop 3 baar likhna padta. Function -> ek baar likho, 3 baar use.
*/
#include<iostream>
using namespace std;
void starTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ // row i me i stars
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    starTriangle(a);
    int b;
    cout<<"Enter b: ";
    cin>>b;
    starTriangle(b);
    int c;
    cout<<"Enter c: ";
    cin>>c;
    starTriangle(c);
}
