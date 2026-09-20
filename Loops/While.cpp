/*
TOPIC: while loop (aur for loop ko while jaisa likhna)
  1 se 10 print.

YAAD RAKHO: while(condition){ kaam; update; } -> start bahar, update andar. for(;cond;) bhi while jaisa hi hai.

METHODS:
  - Method 1 (use ho raha hai): for(; i<=10; ) -> start aur update khaali,
    i bahar banaya aur andar i++. Ye asal me while hi hai.
  - Method 2 (comment me): normal while loop.

LOGIC (short notes):
  - for tab jab pata ho kitni baar chalana hai.
  - while tab jab sirf condition pata ho (jaise n != 0 tak).
  - i++ bhool gaye to infinite loop.
*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(;i<=10;){
        cout<<i<<" ";
        i++;
    }
    // int i=1;
    // while(i<=10){
    //     cout<<i<<" ";
    //     i++;
    // }
}
