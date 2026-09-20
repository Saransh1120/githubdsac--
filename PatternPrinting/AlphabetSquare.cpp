/*
QUESTION: Alphabet Square
  Example: n = 3
    A B C
    A B C
    A B C

YAAD RAKHO: har row me j = 1 se n, print (char)(j + 64). 1 -> 'A' (65).

LOGIC (short notes):
  - 'A' ka ASCII 65 hai, to j + 64 -> j = 1 pe 65 = 'A', j = 2 pe 'B'.
  - Same: (char)('A' + j - 1).
  - Har row same hai kyunki sirf j pe depend karta hai.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<" "; // 1 -> A, 2 -> B ...
        }
        cout<<endl;
    }
}
