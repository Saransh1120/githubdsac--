/*
QUESTION: Print All Substrings
  Example: "abcd" ->
    a ab abc abcd
    b bc bcd
    c cd
    d

YAAD RAKHO: i = start (0 se n-1), j = length (1 se n-i). s.substr(i, j).

LOGIC (short notes):
  - substr(start, length).
  - Start i se max n-i characters bache hain, isliye j <= n-i.
  - Total substrings = n*(n+1)/2.

TIME: O(n^3) (substr khud O(n) leta hai)
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcd";
    int n = s.length();
    for(int i=0;i<n;i++){          // start
        for(int j=1;j<=n-i;j++){   // length
            cout<<s.substr(i,j)<<" ";
        }
        cout<<endl;
    }
}
