/*
QUESTION: Power a^b using Loop
  Example: a = 2, b = 5 -> 32

YAAD RAKHO: ans = 1, loop b baar ans *= a. 0^0 = indeterminate.

METHODS:
  - Method 1 (is file me): loop -> O(b)
  - Method 2 (Recursion/Power.cpp): recursion -> O(b)
  - Method 3 (Recursion/PowerLog.cpp): fast power -> O(log b)
  - Method 4: pow(a, b) from <cmath> (double deta hai)

LOGIC (short notes):
  - ans = 1 se start (a^0 = 1).
  - a == 1 ho to answer hamesha 1 -> break (bekaar loop mat chalao).
  - a = 0, b = 0 -> maths me undefined -> "Indeterminate Form".
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;

    int ans = 1;
    for(int i=1;i<=b;i++){ // ye loop b baar chal raha hai
        ans *= a;
        if(a==1) break; // 1^b = 1
    }
    if(a==0 && b==0) cout<<"Indeterminate Form";
    else cout<<ans;
}
