/*
QUESTION: Count Vowels in a String
  Example: "Mohit Kumar Anand" -> 6  (o, i, u, a, A, a)

YAAD RAKHO: pehle har char ko small karo, phir a/e/i/o/u check -> count++.

LOGIC (short notes):
  - Capital (65-90) -> +32 -> small. Isse 'A' aur 'a' dono count ho jaate hain.
  - "or" C++ me || jaisa hi hai.
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Mohit Kumar Anand";
    int n = s.length();
    int count = 0;
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(ch>=65 and ch<=90) ch += 32; // capital -> small
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') count++;
    }
    cout<<count<<endl; // 6
}
