/*
TOPIC: String push_back, pop_back, sort

YAAD RAKHO: string bhi vector jaisa: push_back(ch), pop_back(), sort(s.begin(), s.end()).

LOGIC (short notes):
  - "Shubham" -> pop_back -> "Shubha" -> push_back('k') -> "Shubhak".
  - sort -> ASCII order me -> capital letters pehle (S = 83 < a = 97)
    -> "Sabhhku".
  - reverse(s.begin()+1, s.end()-1) -> first aur last chhod ke beech ka ulta (comment me).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Shubham";
    s.pop_back();       // Shubha
    s.push_back('k');   // Shubhak
    cout<<s<<endl;

    sort(s.begin(),s.end()); // Sabhhku
    // reverse(s.begin()+1,s.end()-1);
    cout<<s<<endl;
}
