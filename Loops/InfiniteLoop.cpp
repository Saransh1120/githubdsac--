/*
TOPIC: Infinite Loop aur while(0)

YAAD RAKHO: condition kabhi false na ho -> infinite loop. while(0) -> condition shuru se false -> ek baar bhi nahi chalega.

LOGIC (short notes):
  - Comment wala: for(i = 1; i > 0; i++) -> i badhta hi ja raha hai, hamesha > 0
    -> infinite (asal me int overflow pe negative hoke ruk jaayega, par bahut der baad).
  - while(0) -> 0 = false -> kuch print nahi hota.
  - while(1) ya for(;;) -> infinite loop (break se hi niklega).
*/
#include<iostream>
using namespace std;
int main(){
    // for(int i=1;i>0;i++){ // Infinite baar chalega, condition always true
    //     cout<<"Hello"<<endl;
    // }
    while(0) // false -> kabhi nahi chalega
        cout<<"Shreya and Ganesh"<<endl;
}
