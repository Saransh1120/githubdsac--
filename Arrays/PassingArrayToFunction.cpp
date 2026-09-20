/*
TOPIC: Passing Array to Function

YAAD RAKHO: array function me hamesha ADDRESS se jaata hai -> function me change = original me change.

LOGIC (short notes):
  - change(x) me array ki copy nahi jaati, pehle element ka address
    (pointer) jaata hai. int y[] actually int* y hi hai.
  - Isliye y[0] = 20 karne se main() ka x[0] bhi 20 ho gaya.
  - Normal int variable me aisa nahi hota (pass by value).
  - Function ke andar sizeof(y) array ka size nahi dega (pointer ka
    size dega). Isliye size alag se parameter me bhejte hain.
*/
#include<iostream>
using namespace std;
void change(int y[]){ // y = x ka address
    y[0] = 20;
}
int main(){
    int x[] = {6,1,2};
    change(x);
    cout<<x[0]<<endl; // 20
}
