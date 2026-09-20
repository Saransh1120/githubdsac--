/*
QUESTION: Swap Two Numbers using Function (Pass by Reference)
  Example: a = 5, b = 2 -> 2 5

YAAD RAKHO: int& a -> reference (alias / doosra naam). Function me change = original me change.

METHODS:
  - Pass by value (int a, int b) -> sirf copies swap hongi, main me kuch nahi badlega.
  - Pass by reference (int& a, int& b) -> is file me, original swap.
  - Pointers (int* a, int* b) -> Pointers/SwapUsingPointers.cpp

LOGIC (short notes):
  - int& a matlab a main wale a ka hi doosra naam hai, copy nahi.
  - Andar temp se normal swap.
*/
#include<iostream>
using namespace std;
void swap(int& a, int& b){ // alias
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5, b = 2;
    swap(a,b);
    cout<<a<<" "<<b<<endl; // 2 5
}
