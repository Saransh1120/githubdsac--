/*
TOPIC: Pass by Reference using Pointer

YAAD RAKHO: change(&x) -> address bhejo; andar *ptr = 20 -> main ka x = 20.

METHODS (original change karne ke 2 tarike):
  - Method 1 (is file me): pointer -> void change(int* ptr), call change(&x), andar *ptr.
  - Method 2 (Functions/Swap2NumbersFunction.cpp): reference -> void change(int& x), call change(x).
  - Pass by value (Functions/PassByValue.cpp) me x same rehta.
*/
#include<iostream>
using namespace std;
void change(int* ptr){
    *ptr = 20; // x = 20
}
int main(){
    int x = 10;
    change(&x);
    cout<<x<<endl; // 20
}
