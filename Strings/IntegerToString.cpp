/*
QUESTION: Integer to String
  Example: 1234 -> "1234"

YAAD RAKHO: to_string(n). Khud karna ho to: last digit + 48 (= '0') -> char, push_back, end me reverse.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (use ho raha hai): built-in to_string(n).
  - Method 2 (comment me - manually):
      1. n % 10 se last digit nikaalo.
      2. digit + 48 -> uska character ('0' ka ASCII 48, to 3 + 48 = '3').
      3. s.push_back(ch), n /= 10.
      4. Digits ulte order me aaye, to two pointers se reverse.
      (Method 2 me n = 0 ya negative handle nahi hota.)
  - Ulta (string -> int): stoi(s), stoll(s).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    string s = to_string(n);
    cout<<s<<endl;

    // string s = "";
    // while(n != 0){
    //     int lastDigit = n%10;
    //     char ch = lastDigit + 48;
    //     s.push_back(ch);
    //     n /= 10;
    // }
    // // reverse
    // int i = 0, j = s.length() - 1;
    // while(i < j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    // cout<<s<<endl;
}
