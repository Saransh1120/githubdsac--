/*
TOPIC: Implicit Typecasting (int -> char) in function call

YAAD RAKHO: function char maangta hai aur int diya -> apne aap char ban jaata hai. 122 = 'z'.

LOGIC (short notes):
  - fun(char x) ko 122 bheja.
  - 122 ASCII = 'z' -> print z.
  - (97 = 'a', 65 = 'A', 48 = '0')
*/
#include<iostream>
using namespace std;
void fun(char x){
    cout<<x<<endl;
}
int main(){
    fun(122); // z
}
