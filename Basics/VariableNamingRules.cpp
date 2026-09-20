/*
TOPIC: Variable Naming Rules

YAAD RAKHO: naam letter ya _ se shuru, beech me space/symbol nahi, keyword nahi, case sensitive.

LOGIC (short notes):
  - int xy = 57;  -> sahi.
  - int x y = 57; -> ERROR (space nahi chalega).
  - int 1x = 5;   -> ERROR (number se shuru nahi ho sakta). x1 chalega.
  - Symbols (! @ # $ % - + ...) naam me nahi chalte. Sirf _ allowed.
  - Keywords (if, for, while, do, int ...) naam nahi ban sakte.
    int do = 6; -> ERROR.
  - Case sensitive: for keyword hai, par For alag naam hai (allowed).
*/
#include<iostream>
using namespace std;
int main() {
    // int xy = 57;
    // cout<<xy<<endl;
    // int x y = 57;
    // cout<<x y<<endl;
    // int 1x = 5;  // ERROR
    // cout<<1x<<endl;

    // ! @ # $ % ^ & * ( ) { } [ ] - +
    // = | \ / ? > < , . ~ ` " ' : ;

    // Keywords - if for while
    //int do = 6; ERROR
    // cout<<For;
}
