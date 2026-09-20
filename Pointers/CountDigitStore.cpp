/*
QUESTION: Count Digits aur answer pointer se wapas bhejo
  Example: 12345 -> c = 5

YAAD RAKHO: function ko variable ka address (&c) do; andar *ptr = answer -> main ka c change ho jaata hai.

LOGIC (short notes):
  - Function return nahi kar raha, fir bhi answer main tak pahuncha -> pointer ki wajah se.
  - Isse ek function se kai answers "wapas" bhej sakte ho (har ek ke liye ek pointer).
  - count = (n==0) ? 1 : 0 -> 0 me 1 digit hota hai.
*/
#include<iostream>
using namespace std;
void countDigits(int n, int* ptr){
    int count = (n==0) ? 1 : 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    *ptr = count; // main ke c me answer
}
int main(){
    int n;
    cin>>n;
    int c = 0;
    countDigits(n,&c); // c ka address bheja
    cout<<c;
}
