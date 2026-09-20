/*
TOPIC: Looping in a String

YAAD RAKHO: for(char ch : s) -> har character. Ya index se: for(i = 0; i < s.size(); i++) s[i].

METHODS:
  - Method 1 (comment me): index wala loop -> s[i].
  - Method 2 (use ho raha hai): for each -> for(char ch : s).
    (Change karna ho to for(char& ch : s).)
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Sumit Gupta";
    int n = s.size();
    // for(int i=0;i<n;i++){
    //     cout<<s[i];
    // }
    for(char ch : s){
        cout<<ch;
    }
}
