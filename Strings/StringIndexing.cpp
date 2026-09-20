/*
TOPIC: String length, indexing, update

YAAD RAKHO: s.length() == s.size(). s[i] se character padho ya badlo (index 0 se).

LOGIC (short notes):
  - "Sumit Gupta" -> length 11 (space bhi count hota hai).
  - s[1] = 'u'.
  - s[0] = 'Z' -> "Zumit Gupta" (string change ho sakti hai).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Sumit Gupta";
    cout<<s.length()<<endl; // 11
    cout<<s.size()<<endl;   // 11
    cout<<s[1]<<endl;       // u
    s[0] = 'Z';
    cout<<s<<endl;          // Zumit Gupta
}
