/*
QUESTION: Swap Two Numbers
  Example: a = 8, b = 7 -> a = 7, b = 8

YAAD RAKHO: sabse safe -> temp: temp = a; a = b; b = temp;

METHODS (sir ne 3 methods likhe):
  - Method 1 (use ho raha hai - one liner): a = (a+b) - (b = a);
      (b = a) pehle b me a daal deta hai aur a ki value deta hai.
      a = (8+7) - 8 = 7, b = 8.
      DHYAN: ek hi line me b ko padhna aur badalna -> technically
      undefined behaviour. g++ pe chalta hai, par exam me Method 3 likho.
  - Method 2 (comment me - bina temp, + aur - se):
      a = a + b;  (15)
      b = a - b;  (15 - 7 = 8)
      a = a - b;  (15 - 8 = 7)
      Bade numbers pe overflow ho sakta hai.
  - Method 3 (comment me - temp variable): sabse simple aur safe.
  - Method 4: built-in swap(a, b).
*/
#include<iostream>
using namespace std;
int main(){
    int a = 8, b = 7;
    cout<<a<<" "<<b<<endl;
    a = (a+b) - (b = a); // method 1

    // method 2
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // method 3
    // int temp = a;
    // a = b;
    // b = temp;
    cout<<a<<" "<<b<<endl; // 7 8
}
