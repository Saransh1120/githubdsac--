/*
TOPIC: String Comparison (== , > , <)

YAAD RAKHO: strings dictionary order (lexicographic) me compare hoti hain - pehla ALAG character decide karta hai, length nahi.

LOGIC (short notes):
  - "abcdef" vs "abz": a = a, b = b, c vs z -> c chhota.
    Isliye "abz" bada hai (chahe wo chhoti string hai).
  - Output: Not Same
            abz is greater than abcdef
  - Agar ek string doosri ka shuru ka hissa ho ("ab" vs "abc"), to chhoti wali chhoti.
  - Capital letters small se chhote hote hain ('Z' = 90 < 'a' = 97).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string x = "abcdef";
    string y = "abz";
    if(x==y) cout<<"Same"<<endl;
    else cout<<"Not Same"<<endl;

    if(x > y) cout<<x<<" is greater than "<<y<<endl;
    else cout<<y<<" is greater than "<<x<<endl; // abz is greater than abcdef
}
