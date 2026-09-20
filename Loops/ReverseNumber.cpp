/*
QUESTION: Reverse a Number
  Example: 1234 -> 4321

YAAD RAKHO: rev = rev*10 + n%10;  n /= 10;  jab tak n != 0.

LOGIC (dry run, n = 123):
  - rev = 0*10 + 3 = 3,   n = 12
  - rev = 3*10 + 2 = 32,  n = 1
  - rev = 32*10 + 1 = 321, n = 0 -> ruk
  - n % 10 = last digit, n / 10 = last digit hatao.
  - 1200 -> 21 (aage ke zero gayab).
  - Bada number reverse karne pe int overflow ho sakta hai.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while(n != 0){
        rev *= 10;        // jagah banao
        rev += (n%10);    // last digit jodo
        n /= 10;          // last digit hatao
    }
    cout<<rev;
}
