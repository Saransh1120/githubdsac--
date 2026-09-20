/*
QUESTION: Square of a Number
  Example: 7 -> 49

YAAD RAKHO: cin>> se input, n*n print.

LOGIC (short notes):
  - cin>>n -> user se value.
  - n*n -> square. (pow(n,2) bhi hai par wo double deta hai.)
  - Bada n (jaise 50000) ho to n*n int se overflow ho sakta hai -> long long.
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n; // input
    cout<<n*n;
}
