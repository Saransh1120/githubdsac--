/*
QUESTION: Sum of Two Numbers
  Example: 3, 4 -> 7

YAAD RAKHO: do cin, ek cout<<a+b.

LOGIC (short notes):
  - int a,b; -> ek line me do variables.
  - cin>>a>>b; se bhi dono ek saath le sakte ho.
*/
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<a+b;
}
