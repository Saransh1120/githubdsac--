/*
QUESTION: Print numbers skipping multiples of 4 (continue)
  Example: 1 2 3 5 6 7 9 10 11 13 ... 30 tak

YAAD RAKHO: continue -> is iteration ka baaki code skip, loop agle i pe chala jaata hai.

LOGIC (short notes):
  - i % 4 == 0 -> continue -> cout skip.
  - Loop ruka nahi (break jaisa nahi), sirf ek number chhoda.
  - Naam me 100 hai par code 30 tak chalta hai.
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=30;i++){
        if(i%4 == 0) continue; // 4 ke multiples skip
        cout<<i<<" ";
    }
}
