/*
TOPIC: Return Type (function se value wapas lena)

YAAD RAKHO: int product(...) -> int return karega. return ans; se value call wali jagah pe aa jaati hai.

LOGIC (short notes):
  - product(4,11) -> 44 return -> x = 44.
  - void = kuch return nahi karta. int/float/bool... = wo type return karta hai.
  - Return ki hui value ko variable me rakh sakte ho ya seedha cout kar sakte ho.
*/
#include<iostream>
using namespace std;
int product(int a, int b){
    int ans = a*b;
    return ans;
}
int main(){
    int x = product(4,11);
    cout<<x; // 44
}
