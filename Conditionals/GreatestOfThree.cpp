/*
QUESTION: Greatest of Three Numbers
  Example: 4 9 2 -> 9 is largest

YAAD RAKHO: pehle a aur b compare karo, jo bada ho usko c se compare karo.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me - else if + &&):
      a >= b && a >= c -> a
      b >= a && b >= c -> b
      warna c
  - Method 2 (use ho raha hai - Nested if):
      a >= b ?  (a >= c ? a : c)  :  (b >= c ? b : c)
      Kam comparisons lagte hain.
  - Method 3: max(a, max(b, c))

LOGIC (short notes):
  - >= isliye taaki equal numbers pe bhi koi answer aaye.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    // Method 1
    // if(a>=b && a>=c) cout<<a<<" is largest";
    // else if(b>=a && b>=c) cout<<b<<" is largest";
    // else cout<<c<<" is largest";

    // Method 2: nested if
    if(a >= b){
        if(a >= c) cout<<a<<" is largest";
        else // c > a > b
            cout<<c<<" is largest";
    }
    else{ // b > a
        if(b >= c) cout<<b<<" is largest";
        else // c > b > a
            cout<<c<<" is largest";
    }
}
