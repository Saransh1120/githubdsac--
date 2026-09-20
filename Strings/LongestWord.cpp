/*
QUESTION: Longest Word in a Sentence
  Example: "   Arjun    is  the smartest" -> 8 smartest

YAAD RAKHO: i = word ka start, j aage badhta hai. Space mila -> len = j - i compare karo, phir saare spaces skip karke i = j = agle word pe. Loop ke baad LAST word alag se check.

METHOD: Two Pointers (i, j)

LOGIC (short notes):
  - s[j] != ' ' -> word chal raha hai, j++.
  - s[j] == ' ' -> word khatam: len = j - i.
      len > maxlen -> maxlen aur ans = s.substr(i, len) update.
      Phir i = j, aur jab tak space hai i++ aur j++ (extra spaces skip).
  - Last word ke baad space nahi hota, isliye loop ke baad ek baar aur check.
  - Shuru ke spaces pe len = 0 aata hai, kuch nahi bigadta.

TIME: O(n)
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "   Arjun    is  the smartest";
    int n = s.length();
    int i = 0, j = 0, maxlen = 0;
    string ans = "";
    while(j < n){
        if(s[j] != ' ') j++; // word ke andar
        else{
            int len = j-i; // ek word khatam
            if(len > maxlen){
                maxlen = len;
                ans = s.substr(i,len);
            }
            // Jump to next word's starting
            i = j; // i and j are both at space
            while(i<n && s[i]==' '){
                i++;
                j++;
            }
        }
    }
    // last word
    int len = j-i;
    if(len > maxlen){
        maxlen = len;
        ans = s.substr(i,len);
    }
    cout<<maxlen<<" "<<ans<<endl; // 8 smartest
}
