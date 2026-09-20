/*
QUESTION: Count Digits of a Number
  Example: 12345 -> 5,  0 -> 1

YAAD RAKHO: jab tak n != 0: n /= 10 aur count++. n == 0 ka case alag (1 digit).

LOGIC (short notes):
  - n /= 10 -> last digit hat jaata hai (12345 -> 1234).
  - Jitni baar hata sake utne digits.
  - n = 0 pe loop chalega hi nahi, isliye pehle hi count++ (0 me 1 digit hai).
  - Negative number pe bhi chalta hai (-123 -> 3).
  - Method 2: string me convert karke length (Strings/CountDigits.cpp).
  - Method 3: log10(n) + 1.

TIME: O(number of digits)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    if(n==0) count++; // 0 me 1 digit
    while(n != 0){
        n /= 10; // last digit hatao
        count++;
    }
    cout<<count;
}
