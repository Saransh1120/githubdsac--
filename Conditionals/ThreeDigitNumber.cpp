/*
QUESTION: Check 3 Digit Number (Nested if)
  Example: 456 -> 3 Digit number,  1234 -> not a 3 digit number

YAAD RAKHO: 100 <= n <= 999. Yahan && ki jagah if ke andar if (nested) use kiya.

METHODS:
  - Method 1 (is file me - Nested if): pehle n >= 100, andar n <= 999.
  - Method 2 (FourDigitNumber.cpp jaisa): n >= 100 && n <= 999 -> ek hi if.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n >= 100){
        if(n <= 999) cout<<"3 Digit number";
        else cout<<"not a 3 digit number"; // 1000 ya zyada
    }
    else cout<<"not a 3 digit number"; // 100 se kam
}
