/*
QUESTION: Valid Triangle or Not
  Teen sides a, b, c di hain. Triangle ban sakta hai?
  Example: 3 4 5 -> Valid,  1 2 5 -> Invalid

YAAD RAKHO: kinhi bhi DO sides ka sum teesri se BADA hona chahiye (teeno pairs check karo).

LOGIC (short notes):
  - a+b > c, b+c > a, a+c > b -> teeno true hon (and / &&).
  - Equal (1+2 = 3) bhi invalid hai, kyunki wo seedhi line ban jaati hai.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    if(a+b > c and b+c > a and a+c > b)
        cout<<"Valid Triangle";
    else
        cout<<"Invalid Triangle";
}
