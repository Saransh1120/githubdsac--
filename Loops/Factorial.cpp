/*
QUESTION: Factorial using Loop
  Example: 5 -> 120

YAAD RAKHO: fact = 1 se start, i = 2 se n tak fact *= i. long long lo.

METHODS:
  - Method 1 (is file me): for loop.
  - Method 2 (Recursion/Factorial.cpp): recursion.

LOGIC (short notes):
  - fact = 1 (0 se start karoge to sab 0 ho jaayega).
  - i = 2 se kyunki 1 se multiply karne ka koi fayda nahi.
  - 0! = 1 aur 1! = 1 -> loop chalega hi nahi, fact = 1 hi print.
  - long long -> 20! tak fit hota hai (int me sirf 12!).

TIME: O(n)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    cout<<fact;
}
