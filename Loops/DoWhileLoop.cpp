/*
TOPIC: do-while Loop vs for / while

YAAD RAKHO: do-while pehle chalta hai, baad me condition check -> KAM SE KAM 1 baar zaroor chalega.

LOGIC (short notes):
  - i = 11, condition i <= 10 shuru se hi false hai.
  - for (comment me)   -> ek baar bhi nahi chalega.
  - while (comment me) -> ek baar bhi nahi chalega.
  - do-while (use ho raha hai) -> pehle 11 print, phir check -> false -> ruk.
    Output: 11
  - do-while ke end me ; zaroori hai: }while(i<=10);
  - Use: menu programs jahan kam se kam ek baar chalana ho.
*/
#include<iostream>
using namespace std;
int main(){
    // for(int i=11;i<=10;i++){
    //     cout<<i<<" ";
    // }

    // int i=11;
    // while(i<=10){
    //     cout<<i<<" ";
    //     i++;
    // }

    int i=11;
    do{
        cout<<i<<" "; // 11 (ek baar)
        i++;
    }while(i<=10);
}
