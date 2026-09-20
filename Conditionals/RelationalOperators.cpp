/*
TOPIC: Relational Operators (== != > < >= <=)

YAAD RAKHO: relational operator ka answer bool hota hai: true (1) ya false (0). = assign hai, == compare.

LOGIC (short notes):
  - x != y -> 3 != 9 -> true -> 1 print.
  - x == y -> false -> 0.
  - Galti se if(x = y) likh diya to compare nahi, assign ho jaayega
    (VariableInsideIf.cpp dekho).
*/
#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int y = 9;
    bool a = (x!=y);
    cout<<a<<endl; // not equal to -> 1
}
