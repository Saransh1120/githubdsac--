/*
QUESTION: Print ASCII values of A-Z (aur a-z)

YAAD RAKHO: 'A' = 65 ... 'Z' = 90,  'a' = 97 ... 'z' = 122. (char)i se number -> letter.

LOGIC (short notes):
  - Loop 65 se 90 -> (char)i letter, i uska ASCII.
  - Comment wala loop 97 se 122 -> small letters.
  - Small aur capital me farak 32 hai ('a' - 'A' = 32).
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=65;i<=90;i++){
        cout<<(char)i<<" "<<i<<endl; // A 65, B 66 ...
    }
    // for(int i=97;i<=122;i++){
    //     cout<<(char)i<<" ";
    // }
}
