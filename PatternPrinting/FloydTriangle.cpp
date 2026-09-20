/*
QUESTION: Floyd's Triangle
  Example: n = 4
    1
    2 3
    4 5 6
    7 8 9 10

YAAD RAKHO: a = 1 loop ke BAHAR, har star ki jagah a++ print. a kabhi reset nahi hota.

LOGIC (short notes):
  - Triangle shape: row i me i numbers.
  - a++ -> pehle a print, phir a badhao.
  - a ko loop ke andar banaoge to har row 1 se shuru hogi (galat).
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a = 1; // counter - reset nahi hota
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}
