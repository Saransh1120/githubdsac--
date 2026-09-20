/*
TOPIC: Loop ke andar Loop (Nested Loops) - kitni baar chalega?

YAAD RAKHO: nested loops me total = sab loops ki counts ka GUNA (multiply). 2 x 4 x 3 = 24.

LOGIC (short notes):
  - k -> 2 baar, har k ke liye i -> 4 baar, har i ke liye j -> 3 baar.
  - "Good Morning" 2 * 4 * 3 = 24 baar print.
  - Pattern printing me bahar ka loop = rows, andar ka loop = columns.
*/
#include<iostream>
using namespace std;
int main(){
    for(int k=1;k<=2;k++){
        for(int i=1;i<=4;i++){
            for(int j=1;j<=3;j++){
                cout<<"Good Morning"<<endl; // 24 baar
            }
        }
    }
}
