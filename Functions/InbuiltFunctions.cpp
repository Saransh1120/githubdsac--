/*
TOPIC: Inbuilt Functions (<cmath> aur baaki)

YAAD RAKHO: max(a,b) sirf 2 numbers; pow, sqrt, cbrt, abs <cmath> me. sqrt(negative) = nan.

LOGIC (short notes):
  - max(51,78)     -> 78
  - max(51,78,12)  -> ERROR (sirf 2 leta hai). 3 ke liye max(a, max(b,c))
                      ya max({51,78,12}).
  - pow(2.6,2.6)   -> 2.6 ki power 2.6 (double answer)
  - sqrt(3.14)     -> square root
  - cbrt(10)       -> cube root (comment me cbrt<(10) typo hai, cbrt(10) likhna hai)
  - abs(-5)        -> 5 (mod / absolute value)
  - sqrt(-6)       -> nan (not a number)
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // cout<<max(51,78)<<endl;
    // cout<<max(51,78,12)<<endl; // error
    // cout<<pow(2.6,2.6)<<endl;
    // cout<<sqrt(3.14)<<endl;
   // cout<<cbrt(1000)<<endl;
   // cout<<abs(-5)<<endl; // mod
    // cout<<sqrt(-6);

}
