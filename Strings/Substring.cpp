/*
TOPIC: substr()

YAAD RAKHO: s.substr(start, length). Length na do to start se END tak.

LOGIC (short notes):
  - "Bhavya": substr(0,3) -> "Bha"
              substr(2,3) -> "avy"
              substr(2)   -> "avya"
  - Doosra number LENGTH hai, end index nahi (common galti).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Bhavya";
    cout<<s.substr(0,3)<<endl; // 0 se start, 3 length ka -> Bha
    cout<<s.substr(2,3)<<endl; // 2 se start, 3 length ka -> avy
    cout<<s.substr(2)<<endl; // 2 to end -> avya
}
