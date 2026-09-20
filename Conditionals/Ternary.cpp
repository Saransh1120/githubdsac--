/*
QUESTION: Odd / Even using Ternary Operator
  Example: 4 -> Even, 7 -> Odd

YAAD RAKHO: condition ? value1 : value2 -> ek line ka if-else.

METHODS (sir ne 2 tarike likhe):
  - Method 1 (comment me): (n%2 == 0) ? cout<<"Even" : cout<<"Odd";
    -> ternary ke andar hi cout.
  - Method 2 (use ho raha hai): cout<<((n%2 == 0) ? "Even" : "Odd");
    -> ternary se string choose karo, phir ek cout.
    Bahar wala bracket zaroori hai, kyunki << ki priority ? : se zyada hai.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // (n%2 == 0) ? cout<<"Even" : cout<<"Odd";
    cout<<((n%2 == 0) ? "Even" : "Odd");
}
