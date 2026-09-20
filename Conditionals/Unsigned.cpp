/*
TOPIC: unsigned int

YAAD RAKHO: unsigned int me sirf 0 aur positive numbers, range 0 se 4294967295 (~4 x 10^9).

LOGIC (short notes):
  - Negative ki jagah bhi positive range me use hoti hai, isliye max
    value int se double.
  - unsigned int me -1 daaloge to 4294967295 ban jaayega (wrap around).
  - Yahan x ko value nahi di, isliye garbage print hoga.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    unsigned int x;
    cout<<x; // only non negative numbers (value nahi di -> garbage)

}
