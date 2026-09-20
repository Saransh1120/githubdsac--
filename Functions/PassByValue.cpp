/*
TOPIC: Pass by Value

YAAD RAKHO: normal parameter me COPY jaati hai. Function me change karo, original same rahega.

LOGIC (short notes):
  - main ka x = 10, change(x) me copy gayi.
  - Copy = 20 hui, main ka x abhi bhi 10.
  - Original change karna hai to:
      pass by reference -> void change(int& x)   (Swap2NumbersFunction.cpp)
      pointer           -> void change(int* x)   (Pointers/PassByReference.cpp)
*/
#include<iostream>
using namespace std;
void change(int x){ // copy
    x = 20;
}
int main(){
    int x = 10;
    change(x);
    cout<<x<<endl; // 10
}
