/*
QUESTION: Toggle Characters (small <-> capital)
  Example: "HeLLo World" -> "hEllO wORLD"

YAAD RAKHO: small (97-122) -> 32 ghatao. Capital (65-90) -> 32 jodo. Baaki (space, digit) same.

LOGIC (short notes):
  - 'a' - 'A' = 97 - 65 = 32.
  - getline isliye taaki spaces wali poori line aaye.
  - Built-in: toupper(ch), tolower(ch).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122)      // small -> capital
            s[i] -= 32;
        else if(s[i]>=65 && s[i]<=90)  // capital -> small
            s[i] += 32;
    }
    cout<<s<<endl;
}
