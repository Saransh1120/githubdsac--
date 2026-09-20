/*
QUESTION: Star Triangle
  Example: n = 3
    *
    * *
    * * *

YAAD RAKHO: rectangle wala code, bas andar ka loop j <= i tak (n tak nahi).
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ // row i me i stars
            cout<<"* ";
        }
        cout<<endl;
    }
}
