/*
QUESTION: Count Digits using String
  Example: -12345 -> 5

YAAD RAKHO: to_string(abs(n)).length() -> digits.

METHODS:
  - Method 1 (Loops/CountDigits.cpp): n /= 10 loop.
  - Method 2 (is file me): number ko string bana ke length.

LOGIC (short notes):
  - abs(n) isliye taaki negative ka '-' sign count na ho.
  - to_string(0) = "0" -> length 1 (0 wala case apne aap sahi).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    string s = to_string(abs(n));
    cout<<s.length()<<endl;
}
