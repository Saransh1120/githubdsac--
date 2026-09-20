/*
QUESTION: Sum of Three Numbers using Function
  Example: sum(71,34,42) -> 147

YAAD RAKHO: 3 parameters lo, andar hi print karo (void function).

LOGIC (short notes):
  - void -> kuch return nahi, seedha print.
  - Agar answer aage use karna ho to int return karo (ReturnType.cpp).
*/
#include <iostream>
using namespace std;
void sum(int a, int b, int c){
    cout<<a+b+c<<endl;
}
int main(){
    sum(71,34,42); // 147
}
