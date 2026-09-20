/*
TOPIC: Function Overloading (Part 2 - type of parameter)

YAAD RAKHO: exact type match wala function chalega. 122 int hai -> fun(int) -> "Good Morning".

LOGIC (short notes):
  - fun(char), fun(int), fun(double) teeno hain.
  - fun(122)  -> int  -> Good Morning
  - fun('z')  -> char -> Hi
  - fun(12.2) -> double -> Kaise ho Sushant
  - Agar fun(int) na hota, to 122 char ya double me convert hota -> ambiguous.
    Sirf fun(char) hota to 122 -> 'z' (ImplicitTypecastingIntChar.cpp).
*/
#include<iostream>
using namespace std;
void fun(char x){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
void fun(double x){
    cout<<"Kaise ho Sushant"<<endl;
}
int main(){
    fun(122); // Good Morning
}
