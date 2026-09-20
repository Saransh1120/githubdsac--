/*
TOPIC: Block Scope

YAAD RAKHO: { } ke andar bana variable sirf usi block me zinda hai. Bahar use karoge to ERROR.

CASES (dono comment me hain):
  1. if ke andar int x; -> if ke bahar cout<<x; -> ERROR (x wahan exist nahi karta).
  2. int i; loop ke BAHAR declare kiya -> loop ke baad bhi i use ho sakta hai.
     for(i=1;i<=4;i++) ke baad i = 5 print hoga (jis value pe condition false hui).
     Agar for(int i=1;...) likhte to i loop ke bahar nahi milta.
*/
#include<iostream>
using namespace std;
int main(){
    // if(5>3){
    //     int x;
    //     cout<<x;
    // }
    // cout<<x; // this will give error
    // int i;
    // for(i=1;i<=4;i++){
    //     cout<<i<<" ";
    // }
    // cout<<i; // 5
}
