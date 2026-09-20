/*
QUESTION: Number Triangle
  Example: n = 4
    1
    1 2
    1 2 3
    1 2 3 4

YAAD RAKHO: triangle = andar ka loop j <= i tak. Print j.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ // row i me i numbers
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
