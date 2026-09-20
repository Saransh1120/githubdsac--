/*
TOPIC: Function Overloading (Part 1 - number of parameters)

YAAD RAKHO: same naam, alag parameters (number/type/order). Compiler arguments dekh ke sahi function chunta hai.

LOGIC (short notes):
  - fun()        -> "Hi"
  - fun(5)       -> "Good Morning"
  - fun(5, 6)    -> "Kaise ho Sushant"
  - Sirf return type alag ho to overloading nahi hoti (ERROR).
  - Comment wala fun(int x = 7) ERROR deta hai: fun(int x) pehle se hai,
    aur default parameter se fun() bhi ambiguous ho jaata
    (fun() aur fun(int x = 7) dono match karenge).
*/
#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
// THIS WILL GIVE ERROR
// void fun(int x = 7){
//     cout<<"Good Morning"<<endl;
// }
void fun(int x, int y){
    cout<<"Kaise ho Sushant"<<endl;
}
int main(){
    fun(); // Hi
}
