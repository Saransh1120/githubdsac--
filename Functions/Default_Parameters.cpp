/*
TOPIC: Default Parameters

YAAD RAKHO: fun(int age = 20) -> argument nahi diya to 20 use hoga. Default wale parameters hamesha RIGHT side (last) me.

LOGIC (short notes):
  - fun()   -> My age is 20
  - fun(25) -> My age is 25
  - void f(int a = 1, int b) -> ERROR. Default parameter ke baad wale
    sab bhi default hone chahiye.
*/
#include<iostream>
using namespace std;
void fun(int age = 20){
    cout<<"My age is "<<age<<endl;
}
int main(){
    fun(); // My age is 20
}
